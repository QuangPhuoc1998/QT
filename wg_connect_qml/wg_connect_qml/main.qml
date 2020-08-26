import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.2

Window {
    visible: true
    width: 800
    height: 480
    color: "#242424"
    title: qsTr("Hello World")
    /*---speed---*/
    Speed
    {
        id: sp
        x: 250
        y: 90

        width: 300
        height: 300
        value: sl.value
    }
}
