.. _readme-chplenv:

Setting up Your Environment for Chapel
======================================

To get started with Chapel, there are three environment settings that are
strongly recommended for effective use of the release, and a number of
other optional settings that are useful for cross-compiling or overriding
the default settings.  To check the values of the Chapel environment
variables that are set or can be inferred, run the command::

  $CHPL_HOME/util/printchplenv --all

The ``setchplenv.*`` source scripts in the ``$CHPL_HOME/util/quickstart/`` and
``$CHPL_HOME/util/`` directories contain commands that set the following
variables for various shells and host platforms when they are sourced from the
``$CHPL_HOME`` directory.  Frequent Chapel users may want to add such settings
to their shell's dotfile(s); but for getting started the setchplenv.* scripts
can be convenient.

.. contents::

.. _readme-chplenv.recommended_settings:

Recommended Settings
--------------------

.. _readme-chplenv.CHPL_HOME:

CHPL_HOME
~~~~~~~~~
   Setting ``CHPL_HOME`` is important if you have not installed Chapel
   and are instead working from a source directory. In that event,
   set the ``CHPL_HOME`` environment variable to point to the location of the
   chapel/ directory that was created when you unpacked the release.
   For example:

    .. code-block:: sh

        export CHPL_HOME=~/chapel-2.5.0

   .. note::
     This, and all other examples in the Chapel documentation, assumes you're
     using the ``bash`` shell.  If using ``csh`` or ``tcsh``, mentally change
     ``export FOO=BAR`` to ``setenv FOO BAR``.  If using some other shell, make
     the appropriate adjustment.


PATH
~~~~
   Updating ``PATH`` is important if you have not installed Chapel
   and are instead working from a source directory. Otherwise it might
   be necessary to use the full path to ``chpl`` when compiling programs.
   In that event, you can set path using the following command:

    .. code-block:: sh

        CHPL_BIN_SUBDIR=`"$CHPL_HOME"/util/chplenv/chpl_bin_subdir.py`
        export PATH="$PATH":"$CHPL_HOME/bin/$CHPL_BIN_SUBDIR"


MANPATH
~~~~~~~
   Updating ``MANPATH`` is important if you have not installed Chapel
   and are instead working from a source directory.
   Set your man path to include the directory ``$CHPL_HOME/man``.
   For example:

    .. code-block:: sh

        export MANPATH="$MANPATH":"$CHPL_HOME"/man

Optional Settings
-----------------

.. _readme-chplenv.CHPL_HOST_PLATFORM:

CHPL_HOST_PLATFORM
~~~~~~~~~~~~~~~~~~

   You can set the ``CHPL_HOST_PLATFORM`` environment variable to
   represent the platform on which you're working.  For standard UNIX
   workstations, the default is sufficient, and is equivalent to

    .. code-block:: sh

        export CHPL_HOST_PLATFORM=`$CHPL_HOME/util/chplenv/chpl_platform.py`

   For other platforms that appear very similar to a UNIX workstation from the
   shell prompt (e.g., a Cray CS\ |trade|), the value may need to be set
   explicitly.  The strings for our currently-supported host platforms are as
   follows:

        ===========  ==================================
        Value        Description
        ===========  ==================================
        cygwin32     x86 Cygwin (Windows) platforms
        cygwin64     x86_64 Cygwin (Windows) platforms
        darwin       Macintosh OS X platforms
        linux32      32-bit Linux platforms
        linux64      64-bit Linux platforms
        netbsd32     32-bit NetBSD platforms
        netbsd64     64-bit NetBSD platforms
        pwr6         IBM Power6 SMP cluster
        cray-cs      Cray CS\ |trade|
        cray-xc      Cray XC\ |trade|
        hpe-cray-ex  HPE Cray EX
        hpe-apollo   HPE Apollo
        hpe-cray-xd  HPE Cray XD
        ===========  ==================================

   Platform-specific documentation is available for most of these platforms in
   :ref:`platforms-index`.

   The Chapel Makefiles and sources are designed to work for any UNIX-compatible
   environment that supports a GNU-compatible make utility.  The list above
   represents the set of platforms that we have access to and can test easily.
   We are interested in making our code framework portable to other
   platforms—if you are using Chapel on a platform other than the ones
   listed above, please contact us for help with the effort.


.. _readme-chplenv.CHPL_TARGET_PLATFORM:

CHPL_TARGET_PLATFORM
~~~~~~~~~~~~~~~~~~~~
   If you are cross-compiling for a platform other than your
   ``$CHPL_HOST_PLATFORM``, set the ``CHPL_TARGET_PLATFORM`` environment
   variable to describe that platform.  See `CHPL_HOST_PLATFORM`_ above for
   legal values (though whether or not a given setting will support
   cross-compilation depends on your specific environment).

   .. note::
     If ``CHPL_TARGET_PLATFORM`` is not set, the target platform defaults to the
     same value as ``$CHPL_HOST_PLATFORM``.

.. _readme-chplenv.CHPL_HOST_ARCH:

CHPL_HOST_ARCH
~~~~~~~~~~~~~~~~~~~
   Optionally, set the ``CHPL_HOST_ARCH`` environment variable to indicate
   the architecture type of the current machine. Normally, the default
   value is sufficient.

        ========  =============================================================
        Value     Description
        ========  =============================================================
        x86_64    64-bit AMD and Intel processors
        aarch64   64-bit ARM processors
        arm64     an alternative name for 'aarch64'
        ========  =============================================================

   If unset, the default will be computed. The command ``uname -m``
   should produce the same value as the default.

.. _readme-chplenv.CHPL_TARGET_ARCH:

CHPL_TARGET_ARCH
~~~~~~~~~~~~~~~~~~~
   Optionally, set the ``CHPL_TARGET_ARCH`` environment variable to indicate
   the architecture type of the target machine. See the table above for
   ``CHPL_HOST_ARCH`` for values this might be set to.

   If unset, ``CHPL_TARGET_ARCH`` will be inferred.
   If ``CHPL_TARGET_CPU`` is ``native``, ``unknown``, or ``none`` then
   ``CHPL_TARGET_ARCH`` will be set to ``CHPL_HOST_ARCH``.
   Otherwise, ``CHPL_TARGET_ARCH`` will be set based on the
   architecture type specified in ``CHPL_TARGET_CPU``.

.. _readme-chplenv.CHPL_COMPILER:

CHPL_*_COMPILER
~~~~~~~~~~~~~~~
   Optionally, you can set ``CHPL_HOST_COMPILER`` and/or
   ``CHPL_TARGET_COMPILER`` to indicate the compiler suite to use in building
   the sources.  ``CHPL_HOST_COMPILER`` is the compiler used to build the
   Chapel compiler itself so that it will run on ``CHPL_HOST_PLATFORM``.
   ``CHPL_TARGET_COMPILER`` is the compiler used to build the runtime libraries
   and generated code for ``CHPL_TARGET_PLATFORM``.  Currently supported values
   are as follows:

        =================== ===================================================
        Value               Description
        =================== ===================================================
        allinea             The Allinea ARM compiler suite -- clang and clang++
        clang               The Clang compiler suite -- clang and clang++
        cray-prgenv-allinea The Cray PrgEnv compiler using the Allinea backend
        cray-prgenv-cray    The Cray PrgEnv compiler using the Cray CCE backend
        cray-prgenv-gnu     The Cray PrgEnv compiler using the GNU backend
        cray-prgenv-intel   The Cray PrgEnv compiler using the Intel backend
        cray-prgenv-pgi     The Cray PrgEnv compiler using the PGI backend
        gnu                 The GNU compiler suite -- gcc and g++
        ibm                 The IBM compiler suite -- xlc and xlC
        intel               The Intel compiler suite -- icc and icpc
        llvm                LLVM code generation
        pgi                 The PGI compiler suite -- pgcc and pgc++
        =================== ===================================================

   The default value for ``CHPL_HOST_COMPILER`` is:

     * inferred from ``CHPL_HOST_CC`` and ``CHPL_HOST_CXX`` if those are
       provided (see :ref:`readme-chplenv.CHPL_CC`)

     * otherwise, inferred from ``CC`` and ``CXX`` if those are provided
       and none of the ``CHPL_*_CC`` / ``CHPL_*_CXX`` variables are set
       (see :ref:`readme-chplenv.CHPL_CC`)

     * otherwise, a default based on the value of ``CHPL_HOST_PLATFORM``:

        +---------------------+----------------------------------------------+
        | CHPL_HOST_PLATFORM  | Compiler                                     |
        +=====================+==============================================+
        | hpe-cray-ex         |                                              |
        |                     | gnu                                          |
        | cray-xc             |                                              |
        +---------------------+----------------------------------------------+
        | darwin              |                                              |
        |                     | clang if available, otherwise gnu            |
        | freebsd             |                                              |
        +---------------------+----------------------------------------------+
        | pwr6                | ibm                                          |
        +---------------------+----------------------------------------------+
        | other               | gnu                                          |
        +---------------------+----------------------------------------------+

   The default for ``CHPL_TARGET_COMPILER`` is:

     * ``llvm`` if the compiler is configured with LLVM support (see
       :ref:`readme-chplenv.CHPL_LLVM`)

     * otherwise, ``cray-prgenv-$PE_ENV`` on ``cray-xc`` and
       ``hpe-cray-ex`` platforms (where ``PE_ENV`` is set by ``PrgEnv-*``
       modules)

     * otherwise, inferred from ``CHPL_TARGET_CC`` and
       ``CHPL_TARGET_CXX`` if those are provided (see
       :ref:`readme-chplenv.CHPL_CC`)

     * otherwise, inferred from ``CC`` and ``CXX``  if those are provided
       and none of the ``CHPL_*_CC`` / ``CHPL_*_CXX`` variables are set
       (see :ref:`readme-chplenv.CHPL_CC`)

     * otherwise, ``CHPL_HOST_COMPILER`` if the host and target platforms
       are the same

     * otherwise, ``gnu``.

   In cases where the LLVM code generation strategy is the default,
   setting ``CHPL_TARGET_COMPILER`` to something other than ``llvm`` will
   request that the C backend be used with that compiler. For example, to
   select the C backend with the PrgEnv-gnu compiler, set
   ``CHPL_TARGET_COMPILER=cray-prgenv-gnu``.

.. _readme-chplenv.CHPL_CC:

CC and Similar
~~~~~~~~~~~~~~

   It is sometimes important to be able to provide a particular command
   to run for C or C++ compilation. The following variables are available
   to help with that:

        =============== =======================================================
        Variable        Description
        =============== =======================================================
        CC              indicates the C compiler to use
        CXX             indicates the CXX compiler to use
        CHPL_HOST_CC    indicates the C compiler for building ``chpl`` itself
        CHPL_HOST_CXX   indicates the C++ compiler for building ``chpl`` itself
        CHPL_TARGET_CC  indicates the C compiler used by ``chpl``
        CHPL_TARGET_CXX indicates the C++ compiler used by ``chpl``
        =============== =======================================================

   In normal usage, both the C and C++ variants of these should be
   provided (e.g. ``CC`` and ``CXX`` would both be set).

   The compiler family settings ``CHPL_HOST_COMPILER`` and
   ``CHPL_TARGET_COMPILER`` can be inferred from these ``*CC`` ``*CXX``
   variables in some cases as described in
   :ref:`readme-chplenv.CHPL_COMPILER`. To infer a compiler family from the
   path to a compiler, the configuration looks to recognize an
   executable name normally used with that compiler. For example,
   the ``gnu`` family normally uses ``gcc`` for C code and ``g++`` for
   C++ code. This inference process ignores the directory as well as any
   suffix following ``-`` or ``.`` and so the ``gnu`` family can be
   inferred from ``/path/to/gcc-10``, for example.

   Please note that setting ``CC`` and ``CXX`` or ``CHPL_TARGET_CC`` and
   ``CHPL_TARGET_CXX`` will not change ``CHPL_TARGET_COMPILER`` when the
   LLVM backend is in use or when working with a PrgEnv compiler. In
   these cases, it is necessary to also set ``CHPL_TARGET_COMPILER`` in
   order for the ``CC`` / ``CHPL_TARGET_CC`` variables to take effect.

   In some cases, it is useful to configure additional arguments for the
   associated ``clang`` command to use with the LLVM backend. For
   example, the ``clang`` compiler might need additional arguments in
   order to function properly. To support these cases, overriding
   ``CHPL_TARGET_CC`` and ``CHPL_TARGET_CXX`` will impact the ``clang``
   commands used by the LLVM backend. Please note that setting these
   variables will override the normal process to find a bundled or
   system-wide installation of ``clang``.

.. _readme-chplenv.CHPL_TARGET_CPU:

CHPL_TARGET_CPU
~~~~~~~~~~~~~~~~
   Optionally, set the ``CHPL_TARGET_CPU`` environment variable to indicate
   that the target executable should be specialized to the given architecture
   when using ``--specialize`` (and ``--fast``). Valid options are:

        ========  =============================================================
        Value     Description
        ========  =============================================================
        native    The C compiler will attempt to detect the architecture on the
                  machine that is compiling the target executable. This is a
                  good choice if you will be running on the same machine that
                  you are compiling on.  If you are not, see the options below.
        unknown   No specialization will be performed
        none      No specialization will be performed (will not warn)
        ========  =============================================================

        **Architecture-specific values**

        =========== ================ ================
        intel       amd              arm
        =========== ================ ================
        core2           k8           aarch64
        nehalem         k8sse3       thunderx
        westmere        barcelona    thunderx2t99
        sandybridge     bdver1
        ivybridge       bdver2
        haswell         bdver3
        broadwell       bdver4
        skylake
        =========== ================ ================

   These values are defined to be the same as in GCC 7:

        https://gcc.gnu.org/onlinedocs/gcc-7.3.0/gcc/x86-Options.html
        https://gcc.gnu.org/onlinedocs/gcc-7.3.0/gcc/AArch64-Options.html

   If you do not want ``CHPL_TARGET_CPU`` to have any effect, you can set it
   to either ``unknown`` or ``none``. Both will disable specialization, but the
   latter will not warn if ``--specialize`` is used.

   Setting ``CHPL_TARGET_CPU`` to an incorrect value for your processor may
   result in an invalid binary that will not run on the intended machine.
   Special care should be taken to select the lowest common denominator when
   running on machines with heterogeneous processor architectures.

   The default value for this setting will vary based on settings in your
   environment, in order of application these rules are:

        * If :ref:`CHPL_TARGET_COMPILER <readme-chplenv.chpl_compiler>` is ``cray-prgenv-*`` you do not need to
          set anything in ``CHPL_TARGET_CPU``. One of the ``craype-*`` modules
          (e.g.  ``craype-sandybridge``) should be loaded to provide equivalent
          functionality. Once the proper module is loaded, ``CRAY_CPU_TARGET``
          will have the architecture being used in it.

        * If ``CHPL_TARGET_COMPILER`` is ``cray``, ``pgi``, or ``ibm``,
          ``CHPL_TARGET_CPU`` will be set to ``none`` and no specialization
          will occur.

        * If :ref:`readme-chplenv.CHPL_COMM` is set, no attempt to set a useful value will be
          made and ``CHPL_TARGET_CPU`` will be ``unknown``.

        * If :ref:`readme-chplenv.CHPL_TARGET_PLATFORM` is ``darwin``, ``linux*``, or
          ``cygwin*`` ``CHPL_TARGET_CPU`` will be ``native``, passing the
          responsibility off to the backend C compiler to detect the specifics
          of the hardware.


.. _readme-chplenv.CHPL_MAKE:

CHPL_MAKE
~~~~~~~~~
   Optionally, set the ``CHPL_MAKE`` environment variable to indicate the
   GNU-compatible make utility that you want the compiler back-end to invoke
   when compiling the generated C code.  If not set, this will default to a
   value based on ``$CHPL_HOST_PLATFORM``:

        ==================    ============
        platform              make utility
        ==================    ============
        cygwin*, darwin       make
        linux32, linux64      gmake if available, otherwise make
        other                 gmake
        ==================    ============


.. _readme-chplenv.CHPL_MODULE_PATH:

CHPL_MODULE_PATH
~~~~~~~~~~~~~~~~
   Optionally, set the ``CHPL_MODULE_PATH`` environment variable to provide a
   list of directories to be added to the :ref:`readme-module_search`.  The
   value of this environment variable should be a colon-separated list of
   directory paths.

   The module search path is used to satisfy 'use' statements in the Chapel
   program.  The complete search path can be displayed using the compiler option
   ``--print-search-dirs``.  It will also include the compiler's standard module
   search paths, those introduced by the ``-M`` flag on the command line and
   directories containing the .chpl files named explicitly on the compiler
   command line.


.. _readme-chplenv.CHPL_LOCALE_MODEL:

CHPL_LOCALE_MODEL
~~~~~~~~~~~~~~~~~
   Optionally, set the ``CHPL_LOCALE_MODEL`` environment variable to
   indicate the locale model you want to use.  Current options are:

        ======== =============================================
        Value    Description
        ======== =============================================
        flat     top-level locales are not further subdivided
        gpu      enable gpu sublocales
        ======== =============================================

   If unset, ``CHPL_LOCALE_MODEL`` defaults to ``flat``.

   To enable GPU support, the value must be set to ``gpu``. See :ref:`readme-gpu` for more information.

   .. warning:: GPU support is under active development and settings may change.


.. _readme-chplenv.CHPL_TASKS:

CHPL_TASKS
~~~~~~~~~~
   Optionally, set the ``CHPL_TASKS`` environment variable to indicate what
   tasking layer you want to use to implement intra-locale parallelism (see
   :ref:`readme-tasks` for more information on this option).  Current options
   are:

        ============== ===================================================
        Value          Description
        ============== ===================================================
        qthreads       use Sandia's Qthreads package
        fifo           use POSIX threads
        ============== ===================================================

   If ``CHPL_TASKS`` is not set it defaults to ``qthreads`` in all cases
   except for a few specific configurations in which it defaults to
   ``fifo``:

     * target platform is ``cygwin*``
     * target platform is ``netbsd*``

   .. note::
     Note that the Chapel ``util/quickstart/setchplenv.*`` source scripts set
     ``CHPL_TASKS`` to ``fifo`` to reduce build-time and third-party dependences,
     while the ``util/setchplenv.*`` versions leave it unset, resulting in the
     behavior described just above.

   See :ref:`readme-tasks` for more information about executing using the
   various ``CHPL_TASKS`` options.


.. _readme-chplenv.CHPL_COMM:

CHPL_COMM
~~~~~~~~~
   Optionally, set the ``CHPL_COMM`` environment variable to indicate what
   communication layer you want to use to implement inter-locale communication.
   Current options are:

        ======= ============================================
        Value   Description
        ======= ============================================
        none    only supports single-locale execution
        gasnet  use the GASNet-based communication layer
        ofi     use the libfabric-based communication layer
        ugni    Cray-specific native communication layer
        ======= ============================================

   If unset, ``CHPL_COMM`` defaults to ``none`` in most cases.  On Cray
   XC systems it defaults to ``ugni``.  On Cray CS systems it defaults
   to ``gasnet``.  See :ref:`readme-multilocale` for more information on
   executing Chapel programs using multiple locales.  See
   :ref:`readme-libfabric` for more information about the ofi communication
   layer.  See :ref:`readme-cray` for more information about Cray-specific
   runtime layers.


.. _readme-chplenv.CHPL_MEM:

CHPL_MEM
~~~~~~~~

   .. warning::

      ``CHPL_MEM`` has been deprecated and renamed to :ref:`readme-chplenv.CHPL_TARGET_MEM`

   Optionally, the ``CHPL_MEM`` environment variable can be used to select
   a memory management layer.  Current options are:

        ========= =======================================================
        Value     Description
        ========= =======================================================
        cstdlib   use the standard C malloc/free commands
        jemalloc  use Jason Evan's memory allocator
        mimalloc  use the mimalloc memory allocator
        ========= =======================================================

   If unset, ``CHPL_MEM`` defaults to ``jemalloc`` for most configurations.
   If the target platform is ``cygwin*`` it defaults to ``cstdlib``

   .. note::
     Certain ``CHPL_COMM`` settings (e.g. ugni, gasnet segment fast/large,
     ofi with the gni provider) register the heap to improve communication
     performance.  Registering the heap requires special allocator support
     that not all allocators provide.  Currently only ``jemalloc`` is capable
     of supporting configurations that require a registered heap.

.. _readme-chplenv.CHPL_TARGET_MEM:

CHPL_TARGET_MEM
~~~~~~~~~~~~~~~

   Optionally, the ``CHPL_TARGET_MEM`` environment variable can be used to select
   a memory management layer.  Current options are:

        ========= =======================================================
        Value     Description
        ========= =======================================================
        cstdlib   use the standard C malloc/free commands
        jemalloc  use Jason Evan's memory allocator
        mimalloc  use the mimalloc memory allocator
        ========= =======================================================

   If unset, ``CHPL_TARGET_MEM`` defaults to ``jemalloc`` for most configurations.
   If the target platform is ``cygwin*`` it defaults to ``cstdlib``

   .. note::
     Certain ``CHPL_COMM`` settings (e.g. ugni, gasnet segment fast/large,
     ofi with the gni provider) register the heap to improve communication
     performance.  Registering the heap requires special allocator support
     that not all allocators provide.  Currently only ``jemalloc`` is capable
     of supporting configurations that require a registered heap.

.. _readme-chplenv.CHPL_TARGET_JEMALLOC:

CHPL_TARGET_JEMALLOC
~~~~~~~~~~~~~~~~~~~~
   Optionally, the ``CHPL_TARGET_JEMALLOC`` environment variable can select
   between no jemalloc, using the jemalloc distributed with Chapel in
   third-party, or using a system jemalloc. This setting is intended to
   elaborate upon ``CHPL_MEM=jemalloc``.

        ======== ==============================================================
        Value    Description
        ======== ==============================================================
        none     do not build or use jemalloc
        bundled  use the jemalloc distribution bundled with Chapel in third-party
        system   use the jemalloc found on the system
        ======== ==============================================================

   If unset, ``CHPL_TARGET_JEMALLOC`` defaults to ``bundled`` if
   :ref:`readme-chplenv.CHPL_MEM` is ``jemalloc``.  In all other cases it
   defaults to ``none``.

.. _readme-chplenv.CHPL_HOST_MEM:

CHPL_HOST_MEM
~~~~~~~~~~~~~
   Optionally, the ``CHPL_HOST_MEM`` environment variable can be used to select
   a memory management layer for the ``chpl`` compiler.

        ========= =======================================================
        Value     Description
        ========= =======================================================
        cstdlib   use the standard C malloc/free commands
        jemalloc  use Jason Evan's memory allocator
        mimalloc  use the mimalloc memory allocator
        ========= =======================================================

   If unset, ``CHPL_HOST_MEM`` defaults to ``jemalloc`` everywhere except
   for Cygwin and MacOS. On those systems, it defaults to ``cstdlib``.

.. _readme-chplenv.CHPL_HOST_JEMALLOC:

CHPL_HOST_JEMALLOC
~~~~~~~~~~~~~~~~~~

    Optionally, the ``CHPL_HOST_JEMALLOC`` environment variable can select
    between no jemalloc, or using the jemalloc distributed with Chapel in
    third-party. This setting is intended to elaborate upon
    ``CHPL_HOST_MEM=jemalloc``.

        ======== ==============================================================
        Value    Description
        ======== ==============================================================
        none     do not build or use jemalloc
        bundled  use the jemalloc distribution bundled with Chapel in third-party
        system   use jemalloc found on system. requires ``jemalloc-config`` in PATH
        ======== ==============================================================


    Currently, the only supported combinations of host target are:

        ======== ==============================================================
        Host     Source
        ======== ==============================================================
        darwin   system
        linux    bundled
        ======== ==============================================================

    If unset, ``CHPL_HOST_JEMALLOC`` defaults to one of the above support combinations,
    or ``none`` if :ref:`readme-chplenv.CHPL_HOST_MEM` is ``cstdlib``.

.. _readme-chplenv.CHPL_LAUNCHER:

CHPL_LAUNCHER
~~~~~~~~~~~~~
   Optionally, the ``CHPL_LAUNCHER`` environment variable can be used to select
   a launcher to get your program up and running.  See :ref:`readme-launcher`
   for more information on this variable's default and possible settings.


.. _readme-chplenv.CHPL_ATOMICS:

CHPL_ATOMICS
~~~~~~~~~~~~
   Optionally, the ``CHPL_ATOMICS`` environment variable can be used to
   select an implementation for atomic operations in the runtime.  Current
   options are:

        ===========  =====================================================
        Value        Description
        ===========  =====================================================
        cstdlib      implement atomics with C standard atomics (from C11)
        intrinsics   implement atomics with target compiler intrinsics
        locks        implement atomics with mutexes
        ===========  =====================================================

   If ``CHPL_ATOMICS`` is not set, it defaults to ``cstdlib`` when the target
   compiler is ``gnu``, ``clang``, ``allinea``, ``llvm``, or
   ``cray``.  It defaults to ``intrinsics`` when the target compiler is
   ``intel``.  It defaults to ``locks`` when the target compiler is ``pgi``.

   See the Chapel Language Specification for more information about atomic
   operations in Chapel or :ref:`readme-atomics` for more information about the
   runtime implementation.

   .. warning::

     Using ``CHPL_ATOMICS=intrinsics`` is a known performance issue. Please consider using ``CHPL_ATOMICS=cstdlib`` for better performance, if possible. If not, please open an issue on GitHub.


.. _readme-chplenv.CHPL_NETWORK_ATOMICS:

CHPL_NETWORK_ATOMICS
~~~~~~~~~~~~~~~~~~~~
   Optionally, the ``CHPL_NETWORK_ATOMICS`` environment variable can be used
   to select whether atomic operations are performed by the network or the
   processor. This is only applicable when ``CHPL_COMM != none`` and only for
   networks that support atomic operations. If ``CHPL_NETWORK_ATOMICS=none``
   then atomics are implemented using active messages and processor atomics,
   otherwise ``CHPL_NETWORK_ATOMICS`` must have the same value as
   ``CHPL_COMM``. Note that with ``CHPL_NETWORK_ATOMICS=ofi`` support for
   network atomics is provider-specific, and the provider is selected at
   runtime. If the selected provider does not support network atomics then
   atomics will be implemeted using active messages and processor atomics.

   Current options are:

        ======  ==============================================================
        Value   Description
        ======  ==============================================================
        none    implement atomics using active messages and processor atomics
        ofi     use network atomics if supported by the provider
        ugni    use network atomics
        ======  ==============================================================

.. _readme-chplenv.CHPL_TIMERS:

CHPL_TIMERS
~~~~~~~~~~~
   Optionally, the ``CHPL_TIMERS`` environment variable can be used to
   select an implementation for Chapel's timers.  Current options are:

       generic
         use a ``gettimeofday()``-based implementation

   If unset, ``CHPL_TIMERS`` defaults to ``generic``


.. _readme-chplenv.CHPL_GMP:

CHPL_GMP
~~~~~~~~
   Optionally, the ``CHPL_GMP`` environment variable can select between
   no GMP support, using the GMP distributed with Chapel in third-party, or
   using a system GMP. Current options are:

       =======  ============================================================
       Value     Description
       =======  ============================================================
       system   use a system install of GMP
                (#include gmp.h, -lgmp)
       none     do not build GMP support into the Chapel runtime
       bundled  use the GMP distribution bundled with Chapel in third-party
       =======  ============================================================

   If unset, Chapel will attempt to build GMP using
   :ref:`CHPL_TARGET_COMPILER<readme-chplenv.CHPL_COMPILER>` (noting that the bundled version
   may not be supported by all compilers).  Based on the outcome, Chapel will
   default to:

       ======= ====================================================
       Value   Description
       ======= ====================================================
       bundled if the build was successful
       system  if unsuccessful and :ref:`readme-chplenv.CHPL_TARGET_PLATFORM` is cray-x*
       none    otherwise
       ======= ====================================================

   .. note::
     Note that the Chapel ``util/quickstart/setchplenv.*`` source scripts set
     ``CHPL_GMP`` to ``none`` while the ``util/setchplenv.*`` versions leave it
     unset, resulting in the behavior described just above.


.. _readme-chplenv.CHPL_HWLOC:

CHPL_HWLOC
~~~~~~~~~~
   Optionally, the ``CHPL_HWLOC`` environment variable can select between
   no hwloc support, using the hwloc package distributed with Chapel in
   third-party, or using a system hwloc.

       ======== ==============================================================
       Value    Description
       ======== ==============================================================
       none     do not build hwloc support into the Chapel runtime
       bundled  use the hwloc distribution bundled with Chapel in third-party
       system   use a system install of hwloc (requires version 2.1+)
       ======== ==============================================================

   If unset, ``CHPL_HWLOC`` defaults to ``bundled`` if
   :ref:`readme-chplenv.CHPL_TASKS` is ``qthreads``.  In all other cases
   it defaults to ``none``.  In the unlikely event the bundled hwloc
   distribution does not build successfully, it should still be possible
   to use qthreads.  To do this, manually set ``CHPL_HWLOC`` to ``none``
   and rebuild (and please file a bug with the Chapel team.) Note that
   building without hwloc will have a negative impact on performance.

..  (comment) CHPL_LIBFABRIC is not a user-facing feature

   .. _readme-chplenv.CHPL_LIBFABRIC:

   CHPL_LIBFABRIC
   ~~~~~~~~~~~~~~
      Optionally, the ``CHPL_LIBFABRIC`` environment variable can select
      between no libfabric or using the libfabric distributed with Chapel in
      third-party. This setting is intended to elaborate upon
      ``CHPL_COMM=ofi``.

          ========= ==============================================================
          Value     Description
          ========= ==============================================================
          none      do not build or use libfabric
          bundled   use the libfabric distribution bundled with Chapel in third-party
          ========= ==============================================================

      If unset, ``CHPL_LIBFABRIC`` defaults to ``bundled`` if
      :ref:`readme-chplenv.CHPL_COMM` is ``ofi``.  In all other cases it
      defaults to ``none``.

   .. (comment) CHPL_LIBFABRIC=system is also available but it is only intended to support packaging.

.. _readme-chplenv.CHPL_RE2:

CHPL_RE2
~~~~~~~~~~~
   Optionally, the ``CHPL_RE2`` environment variable can be used to enable
   regular expression operations as defined in :chpl:mod:`Regex`.  Current
   options are:

       ======= ==============================================
       Value   Description
       ======= ==============================================
       bundled use the re2 distribution in third-party
       none    do not support regular expression operations
       ======= ==============================================

   If unset, Chapel will attempt to build RE2 using :ref:`CHPL_TARGET_COMPILER<readme-chplenv.CHPL_COMPILER>`
   (noting that the bundled version may not be supported by all compilers).
   Based on the outcome, Chapel will default to:

       ======= ===============================
       Value   Description
       ======= ===============================
       bundled if the build was successful
       none    otherwise
       ======= ===============================

   .. note::
     Note that the Chapel ``util/quickstart/setchplenv.*`` source scripts set
     ``CHPL_RE2`` to ``'none`` while the ``util/setchplenv.*`` versions
     leave it unset, resulting in the behavior described just above.

.. _readme-chplenv.CHPL_AUX_FILESYS:

CHPL_AUX_FILESYS
~~~~~~~~~~~~~~~~
   Optionally, the ``CHPL_AUX_FILESYS`` environment variable can be used to
   request runtime support for certain filesystems.

       ====== ======================================================
       Value  Description
       ====== ======================================================
       none   only support traditional Linux filesystems
       lustre enable I/O improvements specific to Lustre filesystems
       ====== ======================================================

   If unset, ``CHPL_AUX_FILESYS`` defaults to ``none``.

.. _readme-chplenv.CHPL_LLVM:

CHPL_LLVM
~~~~~~~~~

   The ``CHPL_LLVM`` environment variable enables support for the LLVM
   back-end to the Chapel compiler (see :ref:`readme-llvm`) and
   support for extern blocks in Chapel code via the Clang compiler (see
   :ref:`readme-extern`). Current options are:

       ============== ======================================================
       Value          Description
       ============== ======================================================
       bundled        use the llvm/clang distribution in third-party
       system         find a compatible LLVM and clang in system libraries;
                      but note that it must be a version supported by Chapel
       none           do not support llvm/clang-related features
                      (but note that the LLVM Support library will still
                      be used -- see ``CHPL_LLVM_SUPPORT`` below)
       unset          indicates that no reasonable default has been
                      inferred, requiring the user to intentionally select
                      another option
       ============== ======================================================

   If unset, ``CHPL_LLVM`` defaults to:

     * ``none`` on linux32 where Chapel LLVM support is not yet implemented
     * ``bundled`` if you've already built the bundled llvm in
       `third-party/llvm`
     *  ``system`` if a compatible system-wide installation of LLVM and
        clang is detected
     * ``unset`` otherwise

   If CHPL_LLVM is ``unset`` you will need to either add a system-wide
   installation of LLVM or set ``CHPL_LLVM`` to ``bundled`` or ``none``.

   See :ref:`readme-prereqs` for more information about currently
   supported LLVM versions and how to install them. If you are having
   trouble getting the build system to recognize your system install of
   LLVM, try setting ``CHPL_LLVM=system`` and set ``CHPL_LLVM_CONFIG`` to
   the ``llvm-config`` command from the LLVM version you have installed.
   Temporarily setting these can help produce a different error message
   that may may help you to diagnose the problem.

.. _readme-chplenv.CHPL_LLVM_SUPPORT:

CHPL_LLVM_SUPPORT
~~~~~~~~~~~~~~~~~

   This variable indicates where to find the LLVM support library. The
   LLVM support library is required to build the ``chpl`` compiler. It
   can only have two values:

       ============== ======================================================
       Value          Description
       ============== ======================================================
       bundled        build the LLVM support library from source using
                      the bundled version in third-party
       system         use a system-wide install of LLVM to get the
                      LLVM support library
       ============== ======================================================

   If unset, ``CHPL_LLVM_SUPPORT`` defaults to the same value as
   ``CHPL_LLVM`` if ``CHPL_LLVM=system`` or ``CHPL_LLVM=bundled``.
   Otherwise:

     * ``system`` if a compatible system-wide installation of LLVM is detected
     * ``bundled`` otherwise

.. _readme-chplenv.CHPL_LLVM_CONFIG:

CHPL_LLVM_CONFIG
~~~~~~~~~~~~~~~~

   In some cases, it is useful to be able to select a particular LLVM
   installation for use with ``CHPL_LLVM=system`` or with
   ``CHPL_LLVM_SUPPORT=system``. In that event, in addition to setting
   one of those variables, you can set ``CHPL_LLVM_CONFIG`` to the
   llvm-config command from the LLVM installation you wish to use.

   Inspecting the value of this variable from ``printchplenv --all`` can
   also help to identify problems with detection of a system install of
   LLVM and clang.

.. _readme-chplenv.CHPL_LLVM_GCC_PREFIX:

CHPL_LLVM_GCC_PREFIX
~~~~~~~~~~~~~~~~~~~~

   In some cases, the configured ``clang`` will not work correctly
   without a ``--gcc-toolchain`` flag. The Chapel compiler tries to infer
   this flag based upon the ``gcc`` currently available in your ``PATH``
   but sometimes that strategy does not work. As a result, it is
   sometimes necessary to indicate the path to the GCC libraries.  You
   can set ``CHPL_LLVM_GCC_PREFIX`` to ``none`` to  disable passing the
   ``--gcc-toolchain`` flag; or you can set it to a particular directory
   to pass to ``clang`` with the ``--gcc-toolchain`` flag.

   Please note that, on some systems, it's possible to install multiple
   versions of gcc to ``/usr``. In that event, ``CHPL_LLVM_GCC_PREFIX``
   and ``--gcc-toolchain`` cannot distinguish between these multiple versions.
   Use the next option, ``CHPL_LLVM_GCC_INSTALL_DIR``, instead for such
   cases.

.. _readme-chplenv.CHPL_LLVM_GCC_INSTALL_DIR:

CHPL_LLVM_GCC_INSTALL_DIR
~~~~~~~~~~~~~~~~~~~~~~~~~

   Sometimes it's necessary to request that ``clang`` work with a
   particular version of GCC. If many versions are installed at the same
   prefix (e.g. ``/usr``) then ``CHPL_LLVM_GCC_PREFIX`` won't be able to
   differentiate between them. The Chapel compiler tries to infer
   this flag based upon the ``gcc`` currently available in your ``PATH``
   but sometimes that strategy does not work. That is where
   ``CHPL_LLVM_GCC_INSTALL_DIR`` comes in!

   To understand what to set ``CHPL_LLVM_GCC_INSTALL_DIR`` to in such
   cases, try a test compile:

      * ``echo int main() { return 0; } > hello.cc``
      * ``clang++ -v hello.cc``

   This will print out lines along these lines::

      Found candidate GCC installation: /usr/bin/../lib/gcc/x86_64-linux-gnu/11
      Found candidate GCC installation: /usr/bin/../lib/gcc/x86_64-linux-gnu/12
      Found candidate GCC installation: /usr/bin/../lib/gcc/x86_64-linux-gnu/13
      Found candidate GCC installation: /usr/bin/../lib/gcc/x86_64-linux-gnu/14
      Selected GCC installation: /usr/bin/../lib/gcc/x86_64-linux-gnu/14

   The paths printed here are suitable for use with
   ``CHPL_LLVM_GCC_INSTALL_DIR``. Choose the path that corresponds to the
   ``g++`` version that you are trying to use. If you are not sure which
   ``g++`` version to use -- the version that comes with your system is a
   good starting point. You can use
   ``/usr/bin/g++ --version`` or just ``g++ --version`` to find that
   version.

   .. note::

      ``CHPL_LLVM_GCC_INSTALL_DIR`` works with the clang flag
      ``--gcc-install-dir`` which was added in LLVM / clang 16. As a
      result, ``CHPL_LLVM_GCC_INSTALL_DIR`` will not work for earlier
      versions of LLVM / clang.

.. _readme-chplenv.CHPL_UNWIND:

CHPL_UNWIND
~~~~~~~~~~~
   Optionally, the ``CHPL_UNWIND`` environment variable can be used to select
   an unwind library for stack tracing. Current options are:

       ========= =======================================================
       Value     Description
       ========= =======================================================
       bundled   use the libunwind bundled with Chapel in third-party
       system    assume libunwind is already installed on the system
       none      don't use an unwind library, disabling stack tracing
       ========= =======================================================

   If unset, ``CHPL_UNWIND`` defaults to ``none``

   .. note::

      At present, ``CHPL_UWIND=bundled`` does not work on Mac OS X.
      ``CHPL_UNWIND=system`` should be used instead on that system.

.. _readme-chplenv.CHPL_LIB_PIC:

CHPL_LIB_PIC
~~~~~~~~~~~~

   Optionally, the ``CHPL_LIB_PIC`` environment variable can be used to
   build position independent code suitable for shared libraries.  This
   is intended for use when :ref:`readme-libraries`, especially when
   :ref:`readme-libraries.Python` or when building with ``--dynamic``.
   This setting affects the runtime build as well as programs compiled
   with ``chpl``. Current options are:

       ===== ================================
       Value Description
       ===== ================================
       pic   build position-independent code suitable for a shared library
       none  use the system default, which might be
             position-dependent or position-independent but not
             suitable for a shared library
       ===== ================================

   If unset, ``CHPL_LIB_PIC`` defaults to ``none``

.. _readme-chplenv.character_set:

Character Set
-------------

Chapel works with the Unicode character set with the UTF-8 encoding.
Chapel programs will use the UTF-8 encoding regardless of the LANG and
LC_ALL environment variable settings that the C library uses.

Compiler Command Line Option Defaults
-------------------------------------

Most of the compiler's command line options support setting a default value for
the option via an environment variable.  To see a list of the environment
variables that support each option, run the compiler with the ``--help-env``
flag.  For boolean flags and toggles, setting the environment variable to any
value selects that flag.

.. index::
   single: chplconfig; Chapel configuration file

.. _readme-chplenv.chplconfig:

Chapel Configuration Files
--------------------------

The Chapel configuration file is a file named either ``chplconfig`` or
``.chplconfig`` that can store overrides of the inferred environment variables
listed as a result of executing ``printchplenv``.

Syntax
~~~~~~

Below are the valid forms of syntax for Chapel configuration files. All other
usages will result in a syntax error.

**Definitions**

Users can define variables with the following format:

.. code-block:: python

    CHPL_ENV=value


Above, the default value of ``CHPL_ENV`` will be overridden to be ``value``.
All white space is stripped away from definitions.

**Ignored Lines**

Any lines containing nothing or only white space will be ignored.  Comments,
which are denoted by the ``#`` character, similar to ``bash`` or ``python``,
are also ignored.


Example
~~~~~~~

Below is an example of a Chapel configuration file with comments:

.. code-block:: python

    # ~/.chplconfig

    # Default to multi-locale
    CHPL_COMM=gasnet

    CHPL_TASKS=qthreads # Use Qthreads

    # System GMP is available on these machines
    CHPL_GMP=system


To confirm the configuration file is written correctly, you can run
``printchplenv --all --overrides``, which will show a list of variables that are
currently being overridden. Values followed by a
``+`` have been overridden by the Chapel configuration file, whereas
values followed by a ``*`` have been overridden by an environment variable.

Generating Configuration Files
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


To generate a configuration file based on the current configuration, use
``printchplenv`` or ``./configure``.

When using ``printchplenv``, run it with the ``--simple`` format flag to get a
format compatible with Chapel configuration files.

The ``--overrides`` filter flag can be used to print only the variables
currently overridden by either environment variables or Chapel
configuration file.

For example, to save the current overrides into a Chapel configuration file:

.. code-block:: sh

    printchplenv --all --simple --overrides > ~/.chplconfig

The ``printchplenv --all --simple`` flag can be used to print all the variables
of the current configuration. For example:

.. code-block:: sh

    printchplenv --all --simple > ~/.chplconfig

For more information on using ``printchplenv``, see the ``printchplenv -h``
output.

Alternatively, the ``./configure`` script will generate a ``chplconfig``
file. See :ref:`readme-installing`.


Search Paths and File Names
~~~~~~~~~~~~~~~~~~~~~~~~~~~
Though you can put your Chapel configuration file anywhere by setting the
``$CHPL_CONFIG`` environment variable to its enclosing directory, you can also
place it in your ``$HOME`` or ``$CHPL_HOME`` directory and Chapel will be able to
find it.

The search priority for Chapel configuration files is as follows:

1. ``$CHPL_CONFIG``
2. ``$HOME`` (``~/``)
3. ``$CHPL_HOME``

When both a ``chplconfig`` and ``.chplconfig`` are present, the visible
``chplconfig`` will be prioritized.

Only a single ``chplconfig`` file will be used. That is, as soon as a valid
Chapel configuration file is found, the definitions of that file are used.

.. note::

    The ``$CHPL_CONFIG`` variable is the path to the *enclosing*
    directory - not the full path including ``chplconfig`` itself.

.. note::

   In a prefix install, a ``chplconfig`` file is installed in ``$CHPL_HOME``.
   See :ref:`readme-installing`.

Variable Priority
~~~~~~~~~~~~~~~~~

Variable precedence goes in the following order:

1. Explicit compiler flags specified as ``chpl --env=value```
2. Environment variables set by the user (``export CHPL_ENV=value`` or
   ``CHPL_ENV=value chpl ...``)
3. Chapel configuration file settings from a ``chplconfig`` file, as described
   above
4. Inferred environment variables from ``printchplenv``


.. |trade|  unicode:: U+02122 .. TRADE MARK SIGN
