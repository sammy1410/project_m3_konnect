#include <BRepPrimAPI_MakeBox.hxx>
#include <GProp_GProps.hxx>
#include <BRepGProp.hxx>
#include <iostream>

int main() {
    TopoDS_Shape box = BRepPrimAPI_MakeBox(10, 20, 30).Shape();
    GProp_GProps props;
    BRepGProp::VolumeProperties(box, props);
    std::cout << "Volume: " << props.Mass() << "\n";
}