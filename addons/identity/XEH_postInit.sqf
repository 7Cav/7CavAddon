#include "script_component.hpp"

if (hasInterface) then {
    if (call FUNC(allowApplication)) then {
        private _texture = call FUNC(getTexture);
        player setObjectTextureGlobal [3, _texture];
    };
}

