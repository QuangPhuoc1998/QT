import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.0

Window {
    id: root
    visible: true
    minimumWidth: mainToolBar.implicitWidth
    width: 640
    height: 480
    title: qsTr("Hello World")

    ToolBar
    {
        id: mainToolBar
        RowLayout
        {
            width: parent.width
        ToolButton
        {
            iconSource: "icons/save.png"
            onClicked: root.color = "khaki"
        }
        ToolButton
        {
            iconSource: "icons/open.png"
            onClicked: root.color = "green"
        }
        ToolButton
        {
            iconSource: "icons/view.png"
            onClicked: root.color = "pink"
        }
        Slider
        {
            Layout.fillWidth: true
            implicitWidth: 150
            ColorAnimation { from: "#c0c0c0"; duration: 2000 }
        }
        TextField
        {

        }
        }
    }

    Rectangle {
        id: rectangle
        x: 70
        y: 140
        width: 200
        height: 200
        color: "#ffffff"
    }
}
