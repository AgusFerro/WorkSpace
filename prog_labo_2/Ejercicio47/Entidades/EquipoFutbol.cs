﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Entidades
{
    public class EquipoFutbol : Equipo
    {
        public EquipoFutbol(string nombre, DateTime fecha) : base(nombre, fecha)
        { }

        public override string Nombre
        {
            get
            {
                return this.nombre;
            }
        }

        public override string Ficha()
        {
            return base.Ficha();
        }
    }
}
