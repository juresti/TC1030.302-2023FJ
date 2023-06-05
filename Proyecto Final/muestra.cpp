#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Cancion {
private:
    int id;
    string pista;
    string artista;
    string genero;
    float calificacion;
public:
    Cancion(int id, string pista, string artista, string genero, float calificacion):
        id{id}, pista{pista}, artista{artista}, genero{genero}, calificacion{calificacion} {}

    string getGenero() {
        return genero;
    }

    string to_csv() const {
        return to_string(id) + "," + pista + "," + artista + "," + genero + "," + to_string(calificacion);
    }
    
    friend ostream& operator<<(ostream &os, const Cancion cancion) {
        os << "Cancion: " << cancion.pista << " - Artista: " << cancion.artista << " - Genero: " << cancion.genero << " - Calificacion: " << cancion.calificacion;
        return os;
    }

    friend bool operator<(const Cancion &lhs, const Cancion &rhs) {
        return lhs.calificacion < rhs.calificacion;
    }

    friend bool operator>(const Cancion &lhs, const Cancion &rhs) {
        return lhs.calificacion > rhs.calificacion;
    }

};

vector<Cancion> leer_archivo(string nombre_archivo) {
    ifstream archivo; // Stream de tipo input file
    archivo.open(nombre_archivo); // Indica qué archivo queremos abrir
    vector<Cancion> canciones;
    if (archivo.is_open()) { // Revisando si el archivo se pudo abrir
        string linea;

        int id;
        string pista;
        string artista;
        string genero;
        float calificacion;
        string temp;

        getline(archivo, temp); // Para saltarnos los encabezados
        // Revisa que no haya problemas con el archivo hasta el momento. Reporta el final del archivo como un problema.
        while (archivo.good()) { 
            // getline(archivo, linea); // Obtiene la siguiente línea del archivo y la guarda en la variable linea
            // cout << linea << endl;

            getline(archivo, temp, ',');
            id = stoi(temp);
            getline(archivo, pista, ',');
            getline(archivo, artista, ',');
            getline(archivo, genero, ',');
            getline(archivo, temp, '\n');
            calificacion = stof(temp);

            Cancion cancion{id, pista, artista, genero, calificacion};
            canciones.push_back(cancion);

        }
    }
    return canciones;
}

void agregar_registro(string nombre_archivo, const Cancion cancion) {
    ofstream archivo;
    archivo.open(nombre_archivo, ios::app);
    if (archivo.is_open()) {
        archivo << endl << cancion.to_csv();
        archivo.close();
    }
}

int main() {
    string genero = "canadian hip hop";
    vector<Cancion> canciones = leer_archivo("top50.csv");
    Cancion menor = canciones.at(0);
    Cancion mayor = canciones.at(0);
    for (Cancion cancion : canciones) {
        if (cancion < menor) {
            menor = cancion;
        }
        if (cancion > mayor) {
            mayor = cancion;
        }
        if (genero == cancion.getGenero()) {
            cout << cancion << endl;
        }
    }
    cout << "Cancion con la menor calificacion: " << menor << endl;
    cout << "Cancion con la mayor calificacion: " << mayor << endl;

    Cancion nueva{51, "Baby Shark", "Disney", "pop", 5};
    canciones.push_back(nueva);

    agregar_registro("top50.csv", nueva);

}