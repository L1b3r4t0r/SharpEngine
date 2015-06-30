using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Render
{
    class Shape
    {
        ShapesList = ["Cube", "Piramid", "Cilinder"];
        Shape(int format, string color, [int x, int y, int z])
        {
            Render DefaultShape = Render.ModelParser.LoadFBX("%SDK%/shapes/" + ShapesList[format]+".fbx");
        }
    }
}
