# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/CommandBasedRobotTemplate



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage.o


#Rules

# CommandBasedRobotTemplate
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate/$(MODE_DIR)/% : CPU = PPC603
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate/$(MODE_DIR)

OBJECTS_CommandBasedRobotTemplate = CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage.o

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out : $(OBJECTS_CommandBasedRobotTemplate)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate" ]; then cd "CommandBasedRobotTemplate"; rm -rf $(MODE_DIR); fi


# CommandBasedRobotTemplate_partialImage
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : CPU = PPC603
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL = gnu
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate_partialImage/$(MODE_DIR)

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/CommandBase.o : $(PRJ_ROOT_DIR)/CommandBase.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/CommandBasedRobot.o : $(PRJ_ROOT_DIR)/CommandBasedRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/ActivateLoader.o : $(PRJ_ROOT_DIR)/Commands/ActivateLoader.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/AutoDoNothing.o : $(PRJ_ROOT_DIR)/Commands/AutoDoNothing.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/AutoDriveXs.o : $(PRJ_ROOT_DIR)/Commands/AutoDriveXs.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/AutonomousScheduler.o : $(PRJ_ROOT_DIR)/Commands/AutonomousScheduler.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/AutonomousSchedulerReverse.o : $(PRJ_ROOT_DIR)/Commands/AutonomousSchedulerReverse.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/DeactivateLoader.o : $(PRJ_ROOT_DIR)/Commands/DeactivateLoader.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/DriveWithJoystick.o : $(PRJ_ROOT_DIR)/Commands/DriveWithJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/EjectLoader.o : $(PRJ_ROOT_DIR)/Commands/EjectLoader.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/EmergencyStop.o : $(PRJ_ROOT_DIR)/Commands/EmergencyStop.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/ExampleCommand.o : $(PRJ_ROOT_DIR)/Commands/ExampleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/ExtendLoaderCommand.o : $(PRJ_ROOT_DIR)/Commands/ExtendLoaderCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/HoldWinch.o : $(PRJ_ROOT_DIR)/Commands/HoldWinch.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/PrecisionDrive.o : $(PRJ_ROOT_DIR)/Commands/PrecisionDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/PullBackWinch.o : $(PRJ_ROOT_DIR)/Commands/PullBackWinch.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/ReleaseWinch.o : $(PRJ_ROOT_DIR)/Commands/ReleaseWinch.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/RetractLoaderCommand.o : $(PRJ_ROOT_DIR)/Commands/RetractLoaderCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/StopEverything.o : $(PRJ_ROOT_DIR)/Commands/StopEverything.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/ToggleDrive.o : $(PRJ_ROOT_DIR)/Commands/ToggleDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/AutonomusModeSwitches.o : $(PRJ_ROOT_DIR)/Subsystems/AutonomusModeSwitches.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/CameraSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/CameraSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/Chassis.o : $(PRJ_ROOT_DIR)/Subsystems/Chassis.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/DriverStationLCDSystem.o : $(PRJ_ROOT_DIR)/Subsystems/DriverStationLCDSystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/ExampleSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/ExampleSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/LoaderSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/LoaderSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/RelaySubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/RelaySubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/WinchSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/WinchSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBasedRobotTemplate_partialImage = CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/CommandBase.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/CommandBasedRobot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/ActivateLoader.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/AutoDoNothing.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/AutoDriveXs.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/AutonomousScheduler.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/AutonomousSchedulerReverse.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/DeactivateLoader.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/DriveWithJoystick.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/EjectLoader.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/EmergencyStop.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/ExampleCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/ExtendLoaderCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/HoldWinch.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/PrecisionDrive.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/PullBackWinch.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/ReleaseWinch.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/RetractLoaderCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/StopEverything.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/ToggleDrive.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/OI.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/AutonomusModeSwitches.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/CameraSubsystem.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/Chassis.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/DriverStationLCDSystem.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/ExampleSubsystem.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/LoaderSubsystem.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/RelaySubsystem.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/WinchSubsystem.o

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage.o : $(OBJECTS_CommandBasedRobotTemplate_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_CommandBasedRobotTemplate_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage_clean

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate_partialImage" ]; then cd "CommandBasedRobotTemplate_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/CommandBase.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/CommandBasedRobot.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/ActivateLoader.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/AutoDoNothing.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/AutoDriveXs.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/AutonomousScheduler.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/AutonomousSchedulerReverse.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/DeactivateLoader.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/DriveWithJoystick.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/EjectLoader.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/EmergencyStop.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/ExampleCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/ExtendLoaderCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/HoldWinch.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/PrecisionDrive.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/PullBackWinch.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/ReleaseWinch.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/RetractLoaderCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/StopEverything.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Commands/ToggleDrive.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/OI.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/AutonomusModeSwitches.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/CameraSubsystem.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/Chassis.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/DriverStationLCDSystem.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/ExampleSubsystem.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/LoaderSubsystem.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/RelaySubsystem.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate/Subsystems/WinchSubsystem.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
