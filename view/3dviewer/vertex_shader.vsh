//attribute highp vec4 qt_MultiTexCoord0;
attribute highp vec4 qt_Vertex;
uniform highp mat4 qt_ModelViewProjectionMatrix;
//arying highp vec4 qt_TexCoord0;
uniform highp vec4 color;
void main(void)
{
    //gl_Position = vec4(qt_Vertex.x, qt_Vertex.y,qt_Vertex.z, 1.0);
    gl_PointSize = 5.0;
    gl_Position = qt_ModelViewProjectionMatrix * qt_Vertex;

}
