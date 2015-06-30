using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Xml;
using System.Threading.Tasks;

namespace Render
{
    class ModelParser : Render
    {
        protected string GetModelFromXML(int StackPos)
        {
            XmlReader xmlr = XmlReader.Create(Engine.FS.GetFileAtStackPos(StackPos));
        }
    }
}
