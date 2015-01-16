using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace MSpriteRenderer.Source
{
    [Serializable]
    public class PlayerModelConfig:SingleRenderConfig
    {
        public string HeadBoneName;
        public string LHandBoneName;
        public string RHandBoneName;
        public bool Animate;
    }
}
