#pragma once

/* Whether GMP is embedded into ghc-bignum */
#define GHC_GMP_INTREE     1

/* The following values denote the GMP version used during GHC build-time */
#define GHC_GMP_VERSION_MJ 6
#define GHC_GMP_VERSION_MI 1
#define GHC_GMP_VERSION_PL 2
#define GHC_GMP_VERSION \
    (6 * 10000 + 1 * 100 + 2)

/* Whether GMP supports mpz_powm_sec */
#define HAVE_SECURE_POWM 1
