import QtQuick 2.0

Item {
    id: cell
    width: 40
    height: 20
    implicitWidth: 40
    implicitHeight: 20

    property string skin: "ccslider"
    property real outerRadius: 70
    property real innerRadius: 45
    property real angleMargin: 2.5
    property string flatBarOffColor: "#333333"
    property string flatBarOnColor: "#f59321"
    property string flatEdgeOffColor: "#00000000"
    property string flatEdgeOnColor: "#ffccaa"
    property bool lit: false
    property bool isButton: true
    property int ledGlowExpand: 10

    property bool asynchronous: false

    property real _amR: angleMargin * Math.PI / 180.0

    signal clicked()

    state: ""
    states: [
        State {
            name: "FLAT"
            PropertyChanges {target: naturalCell; visible: false }
            PropertyChanges {target: flatCell; visible: true }
        }
    ]

    onLitChanged: flatCell.requestPaint()
    onIsButtonChanged: flatCell.requestPaint()


    Image {
        id: naturalCell
        anchors.fill: parent
        anchors.margins: (cell.lit && !cell.isButton) ? -cell.ledGlowExpand : 0
        source: cell.skin + (cell.isButton ? (ma.pressed ? "_btnDown" : "_btnUp") : "_led") + (cell.lit ? "_on" : "_off") + ".png"
        sourceSize.width: width
        sourceSize.height: height

        asynchronous: cell.asynchronous

        visible: true
    }

    Canvas {
        id: flatCell
        anchors.fill: parent

        property real oR: cell.outerRadius
        property real iR: cell.innerRadius
        property real xOff: 2 * cell.outerRadius * cell.height / cell.width
        property string fillCol: cell.lit ? cell.flatBarOnColor : cell.flatBarOffColor
        property string strokeCol: cell.isButton ? "#aaa" : (cell.lit ? cell.flatEdgeOnColor : cell.flatEdgeOffColor)
        property int strokeWidth: cell.isButton ? 4 : 1

        onPaint: {

            var g = getContext("2d")
            g.clearRect(0,0,width,height)

            g.fillStyle = fillCol
            g.strokeStyle = strokeCol
            g.lineWidth = strokeWidth

            g.beginPath()
            g.arc(width/2,oR+2,oR,-5*Math.PI/8 + cell._amR,-3*Math.PI/8 - cell._amR,false)
            g.arc(width/2,oR+2,iR,-3*Math.PI/8 - cell._amR,-5*Math.PI/8 + cell._amR,true)
            g.closePath()
            g.stroke()
            g.fill()

        }

        visible: false
    }

    MouseArea {
        id: ma
        anchors.fill: parent
        enabled: cell.isButton
        onClicked: cell.clicked()
    }
}
