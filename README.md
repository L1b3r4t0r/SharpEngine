# Sharp Engine

------

## Cloning
------
You need  to type the following commands in the shell.
```BASH
$ git clone https://github.com/matheusxaviersi/SharpEngine.git
$ git submodule init
$ git submodule update
```

##Usage
Include the isharp.h and use the "SharpEngine" namespace that can be aliased to "SE" to access the api.
```CPP
#include "include/isharp.h"

int main()
{
	SE Engine
	Engine::Draw.Rect(12, 12, "#fff000");
	return 0;
}
```

Every game needs a "game.json" file example is as follows:
```JSON
{
    "Metadata": {
        "Name": "Testgame",
        "Info": {
            "Studio": "Example",
            "Publisher": "Example publisher",
            "Version": "1.0.0",
            "Permissions": {
                "UseDX11": false
            }
        }
    }
}
```
