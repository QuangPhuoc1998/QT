import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

Window {
    id: root
    visible: true
    width: 800
    height: 480
    color: "#242424"
    title: qsTr("Hello World")
    DelayButton {
           id: btn_delay
           x: 322
           y: 161
           width: 156
           height: 159
           visible: true
           delay: 1000
           onActivated:
           {
              console.debug("Activated!")
               var component = Qt.createComponent("form_2.qml")
               var window    = component.createObject(root)
               root.visible = false
               window.show()
           }
           contentItem: Text {
               font.bold: true
               font.pointSize: 12
               opacity: enabled ? 1.0 : 0.3
               color: "white"
               text: "SIGN IN"
               layer.enabled: false
               horizontalAlignment: Text.AlignHCenter
               verticalAlignment: Text.AlignVCenter
               elide: Text.ElideRight
           }

           background: Rectangle {
               implicitWidth: 100
               implicitHeight: 100
               opacity: enabled ? 1 : 0.3
               color: btn_delay.down ? "#17a81a" : "#21be2b"
               radius: size / 2

               readonly property real size: Math.min(btn_delay.width, btn_delay.height)
               width: size
               height: size
               anchors.centerIn: parent

               Canvas {
                   id: canvas
                   anchors.fill: parent

                   Connections {
                       target: btn_delay
                       function onProgressChanged() { canvas.requestPaint(); }
                   }

                   onPaint: {
                       var ctx = getContext("2d")
                       ctx.clearRect(0, 0, width, height)
                       ctx.strokeStyle = "white"
                       ctx.lineWidth = parent.size / 20
                       ctx.beginPath()
                       var startAngle = Math.PI / 5 * 3
                       var endAngle = startAngle + btn_delay.progress * Math.PI / 5 * 9
                       ctx.arc(width / 2, height / 2, width / 2 - ctx.lineWidth / 2 - 2, startAngle, endAngle)
                       ctx.stroke()
                   }
               }
           }
       }

       Rectangle {
           id: rectangle
           x: -164
           y: -48
           width: 365
           height: 133
           color: "#777777"
           rotation: 135
       }

       Text {
           id: txt
           x: 9
           y: 21
           width: 102
           height: 53
           color: "#ffffff"
           text: qsTr("SIGN IN")
           rotation: -45
           font.bold: true
           font.pixelSize: 20
       }
}
