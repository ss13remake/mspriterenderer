using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace MSpriteRenderer.Source
{
    [Serializable]
    public class ItemConfig : SingleRenderConfig
    {
        public float QuatW;
        public float QuatX;
        public float QuatY;
        public float QuatZ;
        public float OffsetX;
        public float OffsetY;
        public float OffsetZ;
    }
}
