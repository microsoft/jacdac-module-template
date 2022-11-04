# Template for Jacdac module firmware

This repository is a template to create a new module firmware for [Jacdac](https://aka.ms/jacdac).

**The full build instructions are available at https://github.com/microsoft/jacdac-stm32x0/blob/main/README.md.**
This is also where you learn more about this repo. 

To pull the submodule sources, run

```
git submodule update --init --recursive && git pull
```

## TODOs

Follow these steps to update the file structure to reflect your module.

- [ ] update `jacdac-stm32` and `jacdac-c` submodules (eg., with `make update-submodules`)
- [ ] copy `targets/_example/` to `targets/buzzer-v1.0/` (replacing `buzzer-v1.0` with the name of the module or series of modules)
- [ ] edit `targets/buzzer-v1.0/board.h` to match your module
- [ ] you likely do not need to edit `targets/buzzer-v1.0/config.mk`, unless using F0 chip
- [ ] edit `targets/buzzer-v1.0/profile/module.c` 
  to include your module name and used services (follow comments in `module.c`);
  see [jd_services.h](https://github.com/microsoft/jacdac-c/blob/master/services/jd_services.h)
  for list of services
- [ ] rename `module.c` to match the type of module (eg. `buzzer.c`)
- [ ] if you have several modules with non-conflicting `board.h` definitions,
  you can create more files under `targets/buzzer-v1.0/profile/`;
  otherwise you'll need to create `targets/thermocouple-v1.0` or something similar
- [ ] edit `Makefile.user` to set `TRG`, eg. `TRG = targets/buzzer-v1.0/profile/buzzer.c`
- [ ] run `make`; this will generate a new unique identifier and place as an argument of `FIRMWARE_IDENTIFIER` macro

> make sure to never change the firmware identifier number, as that will break future firmware updates

_Erase this section once you are done with the setup_

## Contributing

This project welcomes contributions and suggestions.  Most contributions require you to agree to a
Contributor License Agreement (CLA) declaring that you have the right to, and actually do, grant us
the rights to use your contribution. For details, visit https://cla.opensource.microsoft.com.

When you submit a pull request, a CLA bot will automatically determine whether you need to provide
a CLA and decorate the PR appropriately (e.g., status check, comment). Simply follow the instructions
provided by the bot. You will only need to do this once across all repos using our CLA.

This project has adopted the [Microsoft Open Source Code of Conduct](https://opensource.microsoft.com/codeofconduct/).
For more information see the [Code of Conduct FAQ](https://opensource.microsoft.com/codeofconduct/faq/) or
contact [opencode@microsoft.com](mailto:opencode@microsoft.com) with any additional questions or comments.

## Trademarks

This project may contain trademarks or logos for projects, products, or services. Authorized use of Microsoft 
trademarks or logos is subject to and must follow 
[Microsoft's Trademark & Brand Guidelines](https://www.microsoft.com/en-us/legal/intellectualproperty/trademarks/usage/general).
Use of Microsoft trademarks or logos in modified versions of this project must not cause confusion or imply Microsoft sponsorship.
Any use of third-party trademarks or logos are subject to those third-party's policies.
