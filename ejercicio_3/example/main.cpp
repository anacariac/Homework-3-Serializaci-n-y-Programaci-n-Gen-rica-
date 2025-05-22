#include "JSONbuilder.hpp"

int main() {
    JSONbuilder builder;

    DataGenerator<double> genDoubles;
    genDoubles.addData(1.3);
    genDoubles.addData(2.1);
    genDoubles.addData(3.2);
    builder.addInfo(genDoubles.toJSON());

    DataGenerator<string> genStrings;
    genStrings.addData("Hola");
    genStrings.addData("Mundo");
    builder.addInfo(genStrings.toJSON());

    DataGenerator<vector<int>> genListas;
    genListas.addData({1, 2});
    genListas.addData({3, 4});
    builder.addInfo(genListas.toJSON());

    builder.showJSON();
}
