#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include "libretro.h"

/*
 ********************************
 * VERSION: 2.0
 ********************************
 *
 * - 2.0: Add support for core options v2 interface
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/
/* RETRO_LANGUAGE_AR */

#define CATEGORY_SYSTEM_LABEL_AR NULL
#define CATEGORY_SYSTEM_INFO_0_AR NULL
#define CATEGORY_VIDEO_LABEL_AR "فيديو"
#define CATEGORY_VIDEO_INFO_0_AR NULL
#define CATEGORY_VIDEO_INFO_1_AR NULL
#define CATEGORY_AUDIO_LABEL_AR "نظام تشغيل الصوت"
#define CATEGORY_AUDIO_INFO_0_AR NULL
#define CATEGORY_INPUT_LABEL_AR NULL
#define CATEGORY_INPUT_INFO_0_AR NULL
#define CATEGORY_PERFORMANCE_LABEL_AR NULL
#define CATEGORY_PERFORMANCE_INFO_0_AR NULL
#define MGBA_GB_MODEL_LABEL_AR NULL
#define MGBA_GB_MODEL_INFO_0_AR NULL
#define OPTION_VAL_AUTODETECT_AR "الكشف التلقائي"
#define OPTION_VAL_GAME_BOY_AR NULL
#define OPTION_VAL_SUPER_GAME_BOY_AR NULL
#define OPTION_VAL_GAME_BOY_COLOR_AR NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_AR NULL
#define MGBA_USE_BIOS_LABEL_AR NULL
#define MGBA_USE_BIOS_INFO_0_AR NULL
#define MGBA_SKIP_BIOS_LABEL_AR NULL
#define MGBA_SKIP_BIOS_INFO_0_AR NULL
#define MGBA_GB_COLORS_LABEL_AR NULL
#define MGBA_GB_COLORS_INFO_0_AR NULL
#define OPTION_VAL_GRAYSCALE_AR NULL
#define MGBA_GB_COLORS_PRESET_LABEL_AR NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_AR NULL
#define OPTION_VAL_0_AR NULL
#define OPTION_VAL_1_AR NULL
#define OPTION_VAL_2_AR NULL
#define OPTION_VAL_3_AR NULL
#define MGBA_SGB_BORDERS_LABEL_AR NULL
#define MGBA_SGB_BORDERS_INFO_0_AR NULL
#define MGBA_COLOR_CORRECTION_LABEL_AR NULL
#define MGBA_COLOR_CORRECTION_INFO_0_AR NULL
#define OPTION_VAL_AUTO_AR "تلقائي"
#define MGBA_INTERFRAME_BLENDING_LABEL_AR NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_AR NULL
#define OPTION_VAL_MIX_AR NULL
#define OPTION_VAL_MIX_SMART_AR NULL
#define OPTION_VAL_LCD_GHOSTING_AR NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_AR NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_AR "تصفية الصوت"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_AR NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_AR NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_AR NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_AR NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_AR NULL
#define OPTION_VAL_5_AR NULL
#define OPTION_VAL_10_AR NULL
#define OPTION_VAL_15_AR NULL
#define OPTION_VAL_20_AR NULL
#define OPTION_VAL_25_AR NULL
#define OPTION_VAL_30_AR NULL
#define OPTION_VAL_35_AR NULL
#define OPTION_VAL_40_AR NULL
#define OPTION_VAL_45_AR NULL
#define OPTION_VAL_50_AR NULL
#define OPTION_VAL_55_AR NULL
#define OPTION_VAL_60_AR NULL
#define OPTION_VAL_65_AR NULL
#define OPTION_VAL_70_AR NULL
#define OPTION_VAL_75_AR NULL
#define OPTION_VAL_80_AR NULL
#define OPTION_VAL_85_AR NULL
#define OPTION_VAL_90_AR NULL
#define OPTION_VAL_95_AR NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_AR NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_AR NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_AR NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_AR NULL
#define OPTION_VAL_SENSOR_AR NULL
#define MGBA_FORCE_GBP_LABEL_AR NULL
#define MGBA_FORCE_GBP_INFO_0_AR NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_AR NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_AR NULL
#define OPTION_VAL_REMOVE_KNOWN_AR NULL
#define OPTION_VAL_DETECT_AND_REMOVE_AR NULL
#define OPTION_VAL_DON_T_REMOVE_AR NULL
#define MGBA_FRAMESKIP_LABEL_AR NULL
#define MGBA_FRAMESKIP_INFO_0_AR NULL
#define OPTION_VAL_AUTO_THRESHOLD_AR NULL
#define OPTION_VAL_FIXED_INTERVAL_AR NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_AR NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_AR NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_AR NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_AR NULL

struct retro_core_option_v2_category option_cats_ar[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_AR,
      CATEGORY_SYSTEM_INFO_0_AR
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_AR,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_AR
#else
      CATEGORY_VIDEO_INFO_1_AR
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_AR,
      CATEGORY_AUDIO_INFO_0_AR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_AR,
      CATEGORY_INPUT_INFO_0_AR
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_AR,
      CATEGORY_PERFORMANCE_INFO_0_AR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ar[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_AR,
      NULL,
      MGBA_GB_MODEL_INFO_0_AR,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_AR },
         { "Game Boy",         OPTION_VAL_GAME_BOY_AR },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_AR },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_AR },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_AR },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_AR,
      NULL,
      MGBA_USE_BIOS_INFO_0_AR,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_AR,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_AR,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_AR,
      NULL,
      MGBA_GB_COLORS_INFO_0_AR,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_AR },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_AR,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_AR,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_AR },
         { "1", OPTION_VAL_1_AR },
         { "2", OPTION_VAL_2_AR },
         { "3", OPTION_VAL_3_AR },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_AR,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_AR,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_AR,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_AR,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_AR },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_AR },
         { "Auto", OPTION_VAL_AUTO_AR },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_AR,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_AR,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_AR },
         { "mix_smart",         OPTION_VAL_MIX_SMART_AR },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_AR },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_AR },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_AR,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_AR,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_AR,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_AR,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_AR,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_AR,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_AR },
         { "10", OPTION_VAL_10_AR },
         { "15", OPTION_VAL_15_AR },
         { "20", OPTION_VAL_20_AR },
         { "25", OPTION_VAL_25_AR },
         { "30", OPTION_VAL_30_AR },
         { "35", OPTION_VAL_35_AR },
         { "40", OPTION_VAL_40_AR },
         { "45", OPTION_VAL_45_AR },
         { "50", OPTION_VAL_50_AR },
         { "55", OPTION_VAL_55_AR },
         { "60", OPTION_VAL_60_AR },
         { "65", OPTION_VAL_65_AR },
         { "70", OPTION_VAL_70_AR },
         { "75", OPTION_VAL_75_AR },
         { "80", OPTION_VAL_80_AR },
         { "85", OPTION_VAL_85_AR },
         { "90", OPTION_VAL_90_AR },
         { "95", OPTION_VAL_95_AR },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_AR,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_AR,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_AR,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_AR,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_AR },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_AR,
      NULL,
      MGBA_FORCE_GBP_INFO_0_AR,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_AR,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_AR,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_AR },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_AR },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_AR },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_AR,
      NULL,
      MGBA_FRAMESKIP_INFO_0_AR,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_AR },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_AR },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_AR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_AR,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_AR,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_AR,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_AR,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ar = {
   option_cats_ar,
   option_defs_ar
};

/* RETRO_LANGUAGE_AST */

#define CATEGORY_SYSTEM_LABEL_AST "Sistema"
#define CATEGORY_SYSTEM_INFO_0_AST NULL
#define CATEGORY_VIDEO_LABEL_AST "Videu"
#define CATEGORY_VIDEO_INFO_0_AST NULL
#define CATEGORY_VIDEO_INFO_1_AST NULL
#define CATEGORY_AUDIO_LABEL_AST "Audiu"
#define CATEGORY_AUDIO_INFO_0_AST NULL
#define CATEGORY_INPUT_LABEL_AST "Preseos d'entrada y auxiliares"
#define CATEGORY_INPUT_INFO_0_AST NULL
#define CATEGORY_PERFORMANCE_LABEL_AST "Rindimientu"
#define CATEGORY_PERFORMANCE_INFO_0_AST NULL
#define MGBA_GB_MODEL_LABEL_AST NULL
#define MGBA_GB_MODEL_INFO_0_AST NULL
#define OPTION_VAL_AUTODETECT_AST NULL
#define OPTION_VAL_GAME_BOY_AST NULL
#define OPTION_VAL_SUPER_GAME_BOY_AST NULL
#define OPTION_VAL_GAME_BOY_COLOR_AST NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_AST NULL
#define MGBA_USE_BIOS_LABEL_AST NULL
#define MGBA_USE_BIOS_INFO_0_AST NULL
#define MGBA_SKIP_BIOS_LABEL_AST NULL
#define MGBA_SKIP_BIOS_INFO_0_AST NULL
#define MGBA_GB_COLORS_LABEL_AST NULL
#define MGBA_GB_COLORS_INFO_0_AST NULL
#define OPTION_VAL_GRAYSCALE_AST NULL
#define MGBA_GB_COLORS_PRESET_LABEL_AST NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_AST "Usa les paletes de los xuegos de Game Boy que tengan preaxustes en Game Boy Color o Super Game Boy."
#define OPTION_VAL_0_AST NULL
#define OPTION_VAL_1_AST "Namás preaxustes de Game Boy Color"
#define OPTION_VAL_2_AST "Namás preaxustes de Super Game Boy"
#define OPTION_VAL_3_AST "Cualesquier preaxuste disponible"
#define MGBA_SGB_BORDERS_LABEL_AST NULL
#define MGBA_SGB_BORDERS_INFO_0_AST NULL
#define MGBA_COLOR_CORRECTION_LABEL_AST NULL
#define MGBA_COLOR_CORRECTION_INFO_0_AST NULL
#define OPTION_VAL_AUTO_AST NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_AST NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_AST NULL
#define OPTION_VAL_MIX_AST NULL
#define OPTION_VAL_MIX_SMART_AST NULL
#define OPTION_VAL_LCD_GHOSTING_AST NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_AST NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_AST NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_AST NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_AST NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_AST NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_AST NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_AST NULL
#define OPTION_VAL_5_AST NULL
#define OPTION_VAL_10_AST NULL
#define OPTION_VAL_15_AST NULL
#define OPTION_VAL_20_AST NULL
#define OPTION_VAL_25_AST NULL
#define OPTION_VAL_30_AST NULL
#define OPTION_VAL_35_AST NULL
#define OPTION_VAL_40_AST NULL
#define OPTION_VAL_45_AST NULL
#define OPTION_VAL_50_AST NULL
#define OPTION_VAL_55_AST NULL
#define OPTION_VAL_60_AST NULL
#define OPTION_VAL_65_AST NULL
#define OPTION_VAL_70_AST NULL
#define OPTION_VAL_75_AST NULL
#define OPTION_VAL_80_AST NULL
#define OPTION_VAL_85_AST NULL
#define OPTION_VAL_90_AST NULL
#define OPTION_VAL_95_AST NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_AST NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_AST NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_AST "Nivel del sensor solar"
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_AST NULL
#define OPTION_VAL_SENSOR_AST NULL
#define MGBA_FORCE_GBP_LABEL_AST NULL
#define MGBA_FORCE_GBP_INFO_0_AST NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_AST NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_AST NULL
#define OPTION_VAL_REMOVE_KNOWN_AST NULL
#define OPTION_VAL_DETECT_AND_REMOVE_AST NULL
#define OPTION_VAL_DON_T_REMOVE_AST NULL
#define MGBA_FRAMESKIP_LABEL_AST NULL
#define MGBA_FRAMESKIP_INFO_0_AST NULL
#define OPTION_VAL_AUTO_THRESHOLD_AST NULL
#define OPTION_VAL_FIXED_INTERVAL_AST NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_AST NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_AST NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_AST NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_AST NULL

struct retro_core_option_v2_category option_cats_ast[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_AST,
      CATEGORY_SYSTEM_INFO_0_AST
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_AST,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_AST
#else
      CATEGORY_VIDEO_INFO_1_AST
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_AST,
      CATEGORY_AUDIO_INFO_0_AST
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_AST,
      CATEGORY_INPUT_INFO_0_AST
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_AST,
      CATEGORY_PERFORMANCE_INFO_0_AST
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ast[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_AST,
      NULL,
      MGBA_GB_MODEL_INFO_0_AST,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_AST },
         { "Game Boy",         OPTION_VAL_GAME_BOY_AST },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_AST },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_AST },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_AST },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_AST,
      NULL,
      MGBA_USE_BIOS_INFO_0_AST,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_AST,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_AST,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_AST,
      NULL,
      MGBA_GB_COLORS_INFO_0_AST,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_AST },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_AST,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_AST,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_AST },
         { "1", OPTION_VAL_1_AST },
         { "2", OPTION_VAL_2_AST },
         { "3", OPTION_VAL_3_AST },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_AST,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_AST,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_AST,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_AST,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_AST },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_AST },
         { "Auto", OPTION_VAL_AUTO_AST },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_AST,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_AST,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_AST },
         { "mix_smart",         OPTION_VAL_MIX_SMART_AST },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_AST },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_AST },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_AST,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_AST,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_AST,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_AST,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_AST,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_AST,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_AST },
         { "10", OPTION_VAL_10_AST },
         { "15", OPTION_VAL_15_AST },
         { "20", OPTION_VAL_20_AST },
         { "25", OPTION_VAL_25_AST },
         { "30", OPTION_VAL_30_AST },
         { "35", OPTION_VAL_35_AST },
         { "40", OPTION_VAL_40_AST },
         { "45", OPTION_VAL_45_AST },
         { "50", OPTION_VAL_50_AST },
         { "55", OPTION_VAL_55_AST },
         { "60", OPTION_VAL_60_AST },
         { "65", OPTION_VAL_65_AST },
         { "70", OPTION_VAL_70_AST },
         { "75", OPTION_VAL_75_AST },
         { "80", OPTION_VAL_80_AST },
         { "85", OPTION_VAL_85_AST },
         { "90", OPTION_VAL_90_AST },
         { "95", OPTION_VAL_95_AST },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_AST,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_AST,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_AST,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_AST,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_AST },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_AST,
      NULL,
      MGBA_FORCE_GBP_INFO_0_AST,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_AST,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_AST,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_AST },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_AST },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_AST },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_AST,
      NULL,
      MGBA_FRAMESKIP_INFO_0_AST,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_AST },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_AST },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_AST },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_AST,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_AST,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_AST,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_AST,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ast = {
   option_cats_ast,
   option_defs_ast
};

/* RETRO_LANGUAGE_CA */

#define CATEGORY_SYSTEM_LABEL_CA "Sistema"
#define CATEGORY_SYSTEM_INFO_0_CA NULL
#define CATEGORY_VIDEO_LABEL_CA "Vídeo"
#define CATEGORY_VIDEO_INFO_0_CA NULL
#define CATEGORY_VIDEO_INFO_1_CA NULL
#define CATEGORY_AUDIO_LABEL_CA "Àudio"
#define CATEGORY_AUDIO_INFO_0_CA NULL
#define CATEGORY_INPUT_LABEL_CA NULL
#define CATEGORY_INPUT_INFO_0_CA NULL
#define CATEGORY_PERFORMANCE_LABEL_CA "Rendiment"
#define CATEGORY_PERFORMANCE_INFO_0_CA NULL
#define MGBA_GB_MODEL_LABEL_CA NULL
#define MGBA_GB_MODEL_INFO_0_CA NULL
#define OPTION_VAL_AUTODETECT_CA NULL
#define OPTION_VAL_GAME_BOY_CA NULL
#define OPTION_VAL_SUPER_GAME_BOY_CA NULL
#define OPTION_VAL_GAME_BOY_COLOR_CA NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_CA NULL
#define MGBA_USE_BIOS_LABEL_CA NULL
#define MGBA_USE_BIOS_INFO_0_CA NULL
#define MGBA_SKIP_BIOS_LABEL_CA NULL
#define MGBA_SKIP_BIOS_INFO_0_CA NULL
#define MGBA_GB_COLORS_LABEL_CA NULL
#define MGBA_GB_COLORS_INFO_0_CA NULL
#define OPTION_VAL_GRAYSCALE_CA NULL
#define MGBA_GB_COLORS_PRESET_LABEL_CA NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_CA NULL
#define OPTION_VAL_0_CA NULL
#define OPTION_VAL_1_CA NULL
#define OPTION_VAL_2_CA NULL
#define OPTION_VAL_3_CA NULL
#define MGBA_SGB_BORDERS_LABEL_CA NULL
#define MGBA_SGB_BORDERS_INFO_0_CA NULL
#define MGBA_COLOR_CORRECTION_LABEL_CA NULL
#define MGBA_COLOR_CORRECTION_INFO_0_CA NULL
#define OPTION_VAL_AUTO_CA "Automàtic"
#define MGBA_INTERFRAME_BLENDING_LABEL_CA NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_CA NULL
#define OPTION_VAL_MIX_CA NULL
#define OPTION_VAL_MIX_SMART_CA NULL
#define OPTION_VAL_LCD_GHOSTING_CA NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_CA NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CA NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_CA NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_CA NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CA NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_CA NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_CA NULL
#define OPTION_VAL_5_CA NULL
#define OPTION_VAL_10_CA NULL
#define OPTION_VAL_15_CA NULL
#define OPTION_VAL_20_CA NULL
#define OPTION_VAL_25_CA NULL
#define OPTION_VAL_30_CA NULL
#define OPTION_VAL_35_CA NULL
#define OPTION_VAL_40_CA NULL
#define OPTION_VAL_45_CA NULL
#define OPTION_VAL_50_CA NULL
#define OPTION_VAL_55_CA NULL
#define OPTION_VAL_60_CA NULL
#define OPTION_VAL_65_CA NULL
#define OPTION_VAL_70_CA NULL
#define OPTION_VAL_75_CA NULL
#define OPTION_VAL_80_CA NULL
#define OPTION_VAL_85_CA NULL
#define OPTION_VAL_90_CA NULL
#define OPTION_VAL_95_CA NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_CA NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_CA NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_CA NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_CA NULL
#define OPTION_VAL_SENSOR_CA NULL
#define MGBA_FORCE_GBP_LABEL_CA NULL
#define MGBA_FORCE_GBP_INFO_0_CA NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_CA NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_CA NULL
#define OPTION_VAL_REMOVE_KNOWN_CA NULL
#define OPTION_VAL_DETECT_AND_REMOVE_CA NULL
#define OPTION_VAL_DON_T_REMOVE_CA NULL
#define MGBA_FRAMESKIP_LABEL_CA NULL
#define MGBA_FRAMESKIP_INFO_0_CA NULL
#define OPTION_VAL_AUTO_THRESHOLD_CA NULL
#define OPTION_VAL_FIXED_INTERVAL_CA NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_CA NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_CA NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_CA NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_CA NULL

struct retro_core_option_v2_category option_cats_ca[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_CA,
      CATEGORY_SYSTEM_INFO_0_CA
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_CA,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_CA
#else
      CATEGORY_VIDEO_INFO_1_CA
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CA,
      CATEGORY_AUDIO_INFO_0_CA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CA,
      CATEGORY_INPUT_INFO_0_CA
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_CA,
      CATEGORY_PERFORMANCE_INFO_0_CA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ca[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_CA,
      NULL,
      MGBA_GB_MODEL_INFO_0_CA,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_CA },
         { "Game Boy",         OPTION_VAL_GAME_BOY_CA },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_CA },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_CA },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_CA },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_CA,
      NULL,
      MGBA_USE_BIOS_INFO_0_CA,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_CA,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_CA,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_CA,
      NULL,
      MGBA_GB_COLORS_INFO_0_CA,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_CA },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_CA,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_CA,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_CA },
         { "1", OPTION_VAL_1_CA },
         { "2", OPTION_VAL_2_CA },
         { "3", OPTION_VAL_3_CA },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_CA,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_CA,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_CA,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_CA,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_CA },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_CA },
         { "Auto", OPTION_VAL_AUTO_CA },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_CA,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_CA,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_CA },
         { "mix_smart",         OPTION_VAL_MIX_SMART_CA },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_CA },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_CA },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CA,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_CA,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_CA,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CA,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_CA,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_CA,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_CA },
         { "10", OPTION_VAL_10_CA },
         { "15", OPTION_VAL_15_CA },
         { "20", OPTION_VAL_20_CA },
         { "25", OPTION_VAL_25_CA },
         { "30", OPTION_VAL_30_CA },
         { "35", OPTION_VAL_35_CA },
         { "40", OPTION_VAL_40_CA },
         { "45", OPTION_VAL_45_CA },
         { "50", OPTION_VAL_50_CA },
         { "55", OPTION_VAL_55_CA },
         { "60", OPTION_VAL_60_CA },
         { "65", OPTION_VAL_65_CA },
         { "70", OPTION_VAL_70_CA },
         { "75", OPTION_VAL_75_CA },
         { "80", OPTION_VAL_80_CA },
         { "85", OPTION_VAL_85_CA },
         { "90", OPTION_VAL_90_CA },
         { "95", OPTION_VAL_95_CA },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_CA,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_CA,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_CA,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_CA,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_CA },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_CA,
      NULL,
      MGBA_FORCE_GBP_INFO_0_CA,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_CA,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_CA,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_CA },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_CA },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_CA },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_CA,
      NULL,
      MGBA_FRAMESKIP_INFO_0_CA,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_CA },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_CA },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_CA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_CA,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_CA,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_CA,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_CA,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ca = {
   option_cats_ca,
   option_defs_ca
};

/* RETRO_LANGUAGE_CHS */

#define CATEGORY_SYSTEM_LABEL_CHS "系统"
#define CATEGORY_SYSTEM_INFO_0_CHS "选择硬件类型/BIOS参数。"
#define CATEGORY_VIDEO_LABEL_CHS "视频"
#define CATEGORY_VIDEO_INFO_0_CHS "配置 DMG 调色板/SGB 边框/色彩校正/LCD 鬼影效果。"
#define CATEGORY_VIDEO_INFO_1_CHS "配置 DMG 调色板/SGB 边框。"
#define CATEGORY_AUDIO_LABEL_CHS "音频"
#define CATEGORY_AUDIO_INFO_0_CHS "配置音频滤镜。"
#define CATEGORY_INPUT_LABEL_CHS "输入和辅助设备"
#define CATEGORY_INPUT_INFO_0_CHS "配置控制器/传感器输入和震动设置。"
#define CATEGORY_PERFORMANCE_LABEL_CHS "性能"
#define CATEGORY_PERFORMANCE_INFO_0_CHS "配置空循环移除/跳帧。"
#define MGBA_GB_MODEL_LABEL_CHS "Game Boy 型号（需要重启）"
#define MGBA_GB_MODEL_INFO_0_CHS "使用指定的Game Boy型号运行游戏。‘自动检测’会为当前游戏选择最合适的型号。"
#define OPTION_VAL_AUTODETECT_CHS "自动检测"
#define OPTION_VAL_GAME_BOY_CHS NULL
#define OPTION_VAL_SUPER_GAME_BOY_CHS NULL
#define OPTION_VAL_GAME_BOY_COLOR_CHS NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_CHS NULL
#define MGBA_USE_BIOS_LABEL_CHS "使用官方BIOS文件（需要重启）"
#define MGBA_USE_BIOS_INFO_0_CHS "RetroArch系统目录下如果存在官方BIOS/引导装载程序, 则使用。"
#define MGBA_SKIP_BIOS_LABEL_CHS "跳过BIOS启动画面（需要重启）"
#define MGBA_SKIP_BIOS_INFO_0_CHS "使用官方BIOS/引导装载程序时，跳过启动动画。如果‘使用官方BIOS文件’选项关闭，则此选项无效。"
#define MGBA_GB_COLORS_LABEL_CHS "默认Game Boy调色板"
#define MGBA_GB_COLORS_INFO_0_CHS "为非GBC/SGB兼容的GB游戏，或者硬件型号强制选择为GB时，选择要使用的调色板。"
#define OPTION_VAL_GRAYSCALE_CHS "灰阶"
#define MGBA_GB_COLORS_PRESET_LABEL_CHS "硬件预设GB调色板（需要重启）"
#define MGBA_GB_COLORS_PRESET_INFO_0_CHS "对于在GBC和SGB上有预设调色板的GB游戏，使用何种预设调色板。"
#define OPTION_VAL_0_CHS "默认Game Boy预设"
#define OPTION_VAL_1_CHS "只使用Game Boy Color预设"
#define OPTION_VAL_2_CHS "只使用Super Game Boy预设"
#define OPTION_VAL_3_CHS "所有可用预设"
#define MGBA_SGB_BORDERS_LABEL_CHS "使用SGB边框（需要重启）"
#define MGBA_SGB_BORDERS_INFO_0_CHS "运行SGB增强游戏时，显示SGB边框。"
#define MGBA_COLOR_CORRECTION_LABEL_CHS "色彩校正"
#define MGBA_COLOR_CORRECTION_INFO_0_CHS "调整输出色彩以匹配真实GBA/GBC硬件的显示效果。"
#define OPTION_VAL_AUTO_CHS "自动"
#define MGBA_INTERFRAME_BLENDING_LABEL_CHS "帧间混合"
#define MGBA_INTERFRAME_BLENDING_INFO_0_CHS "模拟LCD鬼影现象。‘简单’模式对当前帧和上一帧执行50:50的混合； ‘智能’模式尝试检测屏幕闪烁，只在受影响的像素上执行50:50的混合；‘LCD鬼影’模式通过合并多个帧缓冲来模拟自然LCD的响应时间；对于主动利用LCD鬼影来实现透明效果的游戏，必须使用‘简单’或者‘智能’模式（例如：《水上摩托》、《地球解放军》、《零式赛车》、《我们的太阳》系列）。"
#define OPTION_VAL_MIX_CHS "简单"
#define OPTION_VAL_MIX_SMART_CHS "智能"
#define OPTION_VAL_LCD_GHOSTING_CHS "LCD鬼影（精确）"
#define OPTION_VAL_LCD_GHOSTING_FAST_CHS "LCD鬼影（快速）"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CHS "音频滤镜"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_CHS "低通滤波器"
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_CHS "启用低通音频滤波器来降低生成音频的刺耳声。"
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CHS "音频滤镜等级"
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_CHS "过滤等级"
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_CHS "指定低通滤波器的截断频率。值越高过滤强度越高，因为越宽范围的高频频谱会被衰减。"
#define OPTION_VAL_5_CHS NULL
#define OPTION_VAL_10_CHS NULL
#define OPTION_VAL_15_CHS NULL
#define OPTION_VAL_20_CHS NULL
#define OPTION_VAL_25_CHS NULL
#define OPTION_VAL_30_CHS NULL
#define OPTION_VAL_35_CHS NULL
#define OPTION_VAL_40_CHS NULL
#define OPTION_VAL_45_CHS NULL
#define OPTION_VAL_50_CHS NULL
#define OPTION_VAL_55_CHS NULL
#define OPTION_VAL_60_CHS NULL
#define OPTION_VAL_65_CHS NULL
#define OPTION_VAL_70_CHS NULL
#define OPTION_VAL_75_CHS NULL
#define OPTION_VAL_80_CHS NULL
#define OPTION_VAL_85_CHS NULL
#define OPTION_VAL_90_CHS NULL
#define OPTION_VAL_95_CHS NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_CHS "允许同时按下相反方向的输入"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_CHS "开启此选项会允许同时按下/快速切换/同时按住左右键（或者上下键），此功能可能会导致角色移动问题。"
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_CHS "光线传感器等级"
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_CHS "设置环境光强敏感度。有些带有太阳光传感器的卡带使用此功能，例如：《我们的太阳》系列。"
#define OPTION_VAL_SENSOR_CHS "如果可用则使用当前设备自带传感器"
#define MGBA_FORCE_GBP_LABEL_CHS "GBP底座震动功能（需要重启）"
#define MGBA_FORCE_GBP_INFO_0_CHS "开启此选项允许带有GBP兼容标志的游戏使用手柄的震动功能。由于任天堂这个功能的工作机制，它可能会导致一些小问题，例如有些此类游戏会闪烁或者卡顿。"
#define MGBA_IDLE_OPTIMIZATION_LABEL_CHS "移除空闲循环"
#define MGBA_IDLE_OPTIMIZATION_INFO_0_CHS "通过优化所谓的‘空闲循环’来降低系统负载。‘空闲循环’指代码中的无用代码段，但是CPU却全速运行（就像汽车发动机的空转）。 此选项可以提高性能，在低端硬件上应该开启。"
#define OPTION_VAL_REMOVE_KNOWN_CHS "移除已知的空闲循环"
#define OPTION_VAL_DETECT_AND_REMOVE_CHS "检测和移除空循环"
#define OPTION_VAL_DON_T_REMOVE_CHS "不要移除空循环"
#define MGBA_FRAMESKIP_LABEL_CHS "跳帧"
#define MGBA_FRAMESKIP_INFO_0_CHS "跳过一定帧数以避免音频缓冲欠载（爆音），通过牺牲视频流畅度来提高性能。‘自动’模式使用前端推荐的帧数；‘自动（阈值）’模式使用‘跳帧阈值(%)’设置；‘固定间隔’模式使用‘跳帧间隔’设置。"
#define OPTION_VAL_AUTO_THRESHOLD_CHS "自动（阈值）"
#define OPTION_VAL_FIXED_INTERVAL_CHS "固定间隔"
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_CHS "跳帧阈值(%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_CHS "当‘跳帧’设为‘自动（阈值）’时， 指定音频缓冲区占用阈值（百分比），低于该阈值时帧将被跳过。值越高爆音的风险越低，丢帧越频繁。"
#define MGBA_FRAMESKIP_INTERVAL_LABEL_CHS "跳帧间隔"
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_CHS "当‘跳帧’设为‘固定间隔’时，此值指定渲染一帧后丢弃多少帧，例如： '0' = 60fps, '1' = 30fps, '2' = 15fps, 等等。"

struct retro_core_option_v2_category option_cats_chs[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_CHS,
      CATEGORY_SYSTEM_INFO_0_CHS
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_CHS,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_CHS
#else
      CATEGORY_VIDEO_INFO_1_CHS
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CHS,
      CATEGORY_AUDIO_INFO_0_CHS
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CHS,
      CATEGORY_INPUT_INFO_0_CHS
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_CHS,
      CATEGORY_PERFORMANCE_INFO_0_CHS
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_chs[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_CHS,
      NULL,
      MGBA_GB_MODEL_INFO_0_CHS,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_CHS },
         { "Game Boy",         OPTION_VAL_GAME_BOY_CHS },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_CHS },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_CHS },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_CHS },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_CHS,
      NULL,
      MGBA_USE_BIOS_INFO_0_CHS,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_CHS,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_CHS,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_CHS,
      NULL,
      MGBA_GB_COLORS_INFO_0_CHS,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_CHS },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_CHS,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_CHS,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_CHS },
         { "1", OPTION_VAL_1_CHS },
         { "2", OPTION_VAL_2_CHS },
         { "3", OPTION_VAL_3_CHS },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_CHS,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_CHS,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_CHS,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_CHS,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_CHS },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_CHS },
         { "Auto", OPTION_VAL_AUTO_CHS },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_CHS,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_CHS,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_CHS },
         { "mix_smart",         OPTION_VAL_MIX_SMART_CHS },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_CHS },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_CHS },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CHS,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_CHS,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CHS,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_CHS,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_CHS },
         { "10", OPTION_VAL_10_CHS },
         { "15", OPTION_VAL_15_CHS },
         { "20", OPTION_VAL_20_CHS },
         { "25", OPTION_VAL_25_CHS },
         { "30", OPTION_VAL_30_CHS },
         { "35", OPTION_VAL_35_CHS },
         { "40", OPTION_VAL_40_CHS },
         { "45", OPTION_VAL_45_CHS },
         { "50", OPTION_VAL_50_CHS },
         { "55", OPTION_VAL_55_CHS },
         { "60", OPTION_VAL_60_CHS },
         { "65", OPTION_VAL_65_CHS },
         { "70", OPTION_VAL_70_CHS },
         { "75", OPTION_VAL_75_CHS },
         { "80", OPTION_VAL_80_CHS },
         { "85", OPTION_VAL_85_CHS },
         { "90", OPTION_VAL_90_CHS },
         { "95", OPTION_VAL_95_CHS },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_CHS,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_CHS,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_CHS,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_CHS,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_CHS },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_CHS,
      NULL,
      MGBA_FORCE_GBP_INFO_0_CHS,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_CHS,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_CHS,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_CHS },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_CHS },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_CHS },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_CHS,
      NULL,
      MGBA_FRAMESKIP_INFO_0_CHS,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_CHS },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_CHS },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_CHS },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_CHS,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_CHS,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_CHS,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_CHS,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_chs = {
   option_cats_chs,
   option_defs_chs
};

/* RETRO_LANGUAGE_CHT */

#define CATEGORY_SYSTEM_LABEL_CHT "系統"
#define CATEGORY_SYSTEM_INFO_0_CHT NULL
#define CATEGORY_VIDEO_LABEL_CHT "顯示"
#define CATEGORY_VIDEO_INFO_0_CHT "變更DMG調色板、SGB邊框、顏色校正和LCD重影效果的設定。"
#define CATEGORY_VIDEO_INFO_1_CHT NULL
#define CATEGORY_AUDIO_LABEL_CHT "音效"
#define CATEGORY_AUDIO_INFO_0_CHT NULL
#define CATEGORY_INPUT_LABEL_CHT "輸入和輔助裝置"
#define CATEGORY_INPUT_INFO_0_CHT NULL
#define CATEGORY_PERFORMANCE_LABEL_CHT "效能"
#define CATEGORY_PERFORMANCE_INFO_0_CHT NULL
#define MGBA_GB_MODEL_LABEL_CHT NULL
#define MGBA_GB_MODEL_INFO_0_CHT NULL
#define OPTION_VAL_AUTODETECT_CHT "自動偵測"
#define OPTION_VAL_GAME_BOY_CHT NULL
#define OPTION_VAL_SUPER_GAME_BOY_CHT NULL
#define OPTION_VAL_GAME_BOY_COLOR_CHT NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_CHT NULL
#define MGBA_USE_BIOS_LABEL_CHT NULL
#define MGBA_USE_BIOS_INFO_0_CHT NULL
#define MGBA_SKIP_BIOS_LABEL_CHT NULL
#define MGBA_SKIP_BIOS_INFO_0_CHT NULL
#define MGBA_GB_COLORS_LABEL_CHT NULL
#define MGBA_GB_COLORS_INFO_0_CHT NULL
#define OPTION_VAL_GRAYSCALE_CHT "灰階"
#define MGBA_GB_COLORS_PRESET_LABEL_CHT NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_CHT NULL
#define OPTION_VAL_0_CHT NULL
#define OPTION_VAL_1_CHT NULL
#define OPTION_VAL_2_CHT NULL
#define OPTION_VAL_3_CHT NULL
#define MGBA_SGB_BORDERS_LABEL_CHT NULL
#define MGBA_SGB_BORDERS_INFO_0_CHT NULL
#define MGBA_COLOR_CORRECTION_LABEL_CHT NULL
#define MGBA_COLOR_CORRECTION_INFO_0_CHT NULL
#define OPTION_VAL_AUTO_CHT "自動"
#define MGBA_INTERFRAME_BLENDING_LABEL_CHT NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_CHT NULL
#define OPTION_VAL_MIX_CHT NULL
#define OPTION_VAL_MIX_SMART_CHT NULL
#define OPTION_VAL_LCD_GHOSTING_CHT NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_CHT NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CHT "音訊過濾器"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_CHT NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_CHT NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CHT NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_CHT NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_CHT NULL
#define OPTION_VAL_5_CHT NULL
#define OPTION_VAL_10_CHT NULL
#define OPTION_VAL_15_CHT NULL
#define OPTION_VAL_20_CHT NULL
#define OPTION_VAL_25_CHT NULL
#define OPTION_VAL_30_CHT NULL
#define OPTION_VAL_35_CHT NULL
#define OPTION_VAL_40_CHT NULL
#define OPTION_VAL_45_CHT NULL
#define OPTION_VAL_50_CHT NULL
#define OPTION_VAL_55_CHT NULL
#define OPTION_VAL_60_CHT NULL
#define OPTION_VAL_65_CHT NULL
#define OPTION_VAL_70_CHT NULL
#define OPTION_VAL_75_CHT NULL
#define OPTION_VAL_80_CHT NULL
#define OPTION_VAL_85_CHT NULL
#define OPTION_VAL_90_CHT NULL
#define OPTION_VAL_95_CHT NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_CHT "允許反向操作"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_CHT "允許反方向快速操作，可同時按下左右或上下的方向。可能導致遊戲的移動架構出錯。"
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_CHT NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_CHT NULL
#define OPTION_VAL_SENSOR_CHT NULL
#define MGBA_FORCE_GBP_LABEL_CHT NULL
#define MGBA_FORCE_GBP_INFO_0_CHT NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_CHT NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_CHT NULL
#define OPTION_VAL_REMOVE_KNOWN_CHT NULL
#define OPTION_VAL_DETECT_AND_REMOVE_CHT NULL
#define OPTION_VAL_DON_T_REMOVE_CHT NULL
#define MGBA_FRAMESKIP_LABEL_CHT "跳幀"
#define MGBA_FRAMESKIP_INFO_0_CHT "設定跳幀用以避免音訊緩衝區不足(產生破音)。用影像流暢度為代價提高效能。\n<自動> 由前端系統控制。<自動 (上限)> 由「跳幀上限 (%)」控制。<固定間隔> 由「跳幀間隔」控制。"
#define OPTION_VAL_AUTO_THRESHOLD_CHT "自動 (上限)"
#define OPTION_VAL_FIXED_INTERVAL_CHT NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_CHT "跳幀上限 (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_CHT NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_CHT NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_CHT NULL

struct retro_core_option_v2_category option_cats_cht[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_CHT,
      CATEGORY_SYSTEM_INFO_0_CHT
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_CHT,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_CHT
#else
      CATEGORY_VIDEO_INFO_1_CHT
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CHT,
      CATEGORY_AUDIO_INFO_0_CHT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CHT,
      CATEGORY_INPUT_INFO_0_CHT
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_CHT,
      CATEGORY_PERFORMANCE_INFO_0_CHT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cht[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_CHT,
      NULL,
      MGBA_GB_MODEL_INFO_0_CHT,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_CHT },
         { "Game Boy",         OPTION_VAL_GAME_BOY_CHT },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_CHT },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_CHT },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_CHT },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_CHT,
      NULL,
      MGBA_USE_BIOS_INFO_0_CHT,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_CHT,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_CHT,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_CHT,
      NULL,
      MGBA_GB_COLORS_INFO_0_CHT,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_CHT },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_CHT,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_CHT,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_CHT },
         { "1", OPTION_VAL_1_CHT },
         { "2", OPTION_VAL_2_CHT },
         { "3", OPTION_VAL_3_CHT },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_CHT,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_CHT,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_CHT,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_CHT,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_CHT },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_CHT },
         { "Auto", OPTION_VAL_AUTO_CHT },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_CHT,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_CHT,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_CHT },
         { "mix_smart",         OPTION_VAL_MIX_SMART_CHT },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_CHT },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_CHT },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CHT,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_CHT,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CHT,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_CHT,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_CHT },
         { "10", OPTION_VAL_10_CHT },
         { "15", OPTION_VAL_15_CHT },
         { "20", OPTION_VAL_20_CHT },
         { "25", OPTION_VAL_25_CHT },
         { "30", OPTION_VAL_30_CHT },
         { "35", OPTION_VAL_35_CHT },
         { "40", OPTION_VAL_40_CHT },
         { "45", OPTION_VAL_45_CHT },
         { "50", OPTION_VAL_50_CHT },
         { "55", OPTION_VAL_55_CHT },
         { "60", OPTION_VAL_60_CHT },
         { "65", OPTION_VAL_65_CHT },
         { "70", OPTION_VAL_70_CHT },
         { "75", OPTION_VAL_75_CHT },
         { "80", OPTION_VAL_80_CHT },
         { "85", OPTION_VAL_85_CHT },
         { "90", OPTION_VAL_90_CHT },
         { "95", OPTION_VAL_95_CHT },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_CHT,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_CHT,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_CHT,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_CHT,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_CHT },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_CHT,
      NULL,
      MGBA_FORCE_GBP_INFO_0_CHT,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_CHT,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_CHT,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_CHT },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_CHT },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_CHT },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_CHT,
      NULL,
      MGBA_FRAMESKIP_INFO_0_CHT,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_CHT },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_CHT },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_CHT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_CHT,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_CHT,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_CHT,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_CHT,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cht = {
   option_cats_cht,
   option_defs_cht
};

/* RETRO_LANGUAGE_CS */

#define CATEGORY_SYSTEM_LABEL_CS "Systém"
#define CATEGORY_SYSTEM_INFO_0_CS "Konfigurace výběru základního hardwaru / parametrů systému BIOS."
#define CATEGORY_VIDEO_LABEL_CS NULL
#define CATEGORY_VIDEO_INFO_0_CS "Konfigurace palety DMG / okrajů SGB / korekce barev / efektů duchů LCD."
#define CATEGORY_VIDEO_INFO_1_CS "Konfigurace palety DMG / okrajů SGB."
#define CATEGORY_AUDIO_LABEL_CS "Zvuk"
#define CATEGORY_AUDIO_INFO_0_CS "Konfigurace filtrování zvuku."
#define CATEGORY_INPUT_LABEL_CS "Vstupní a Pomocná Zařízení"
#define CATEGORY_INPUT_INFO_0_CS "Konfigurace nastavení ovladače / vstupu snímače a vybrací."
#define CATEGORY_PERFORMANCE_LABEL_CS "Výkon"
#define CATEGORY_PERFORMANCE_INFO_0_CS "Konfigurace parametrů odstraňování nečinných smyček / přeskakování rámců."
#define MGBA_GB_MODEL_LABEL_CS NULL
#define MGBA_GB_MODEL_INFO_0_CS "Spustí načtený obsah s konkrétním modelem Game Boy. Funkce 'Autodetekce' vybere nejvhodnější model pro aktuální hru."
#define OPTION_VAL_AUTODETECT_CS "Autodetekovat"
#define OPTION_VAL_GAME_BOY_CS NULL
#define OPTION_VAL_SUPER_GAME_BOY_CS NULL
#define OPTION_VAL_GAME_BOY_COLOR_CS NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_CS NULL
#define MGBA_USE_BIOS_LABEL_CS "Použít Soubor BIOS Pokud byl Nalezen (Restart)"
#define MGBA_USE_BIOS_INFO_0_CS "Použíje oficiální BIOS/bootloader pro emulovaný hardware, pokud je přítomen v systémové složce RetroArchu."
#define MGBA_SKIP_BIOS_LABEL_CS "Přeskočení Intra BIOSU (Restart)"
#define MGBA_SKIP_BIOS_INFO_0_CS "Při použití oficiálního systému BIOS/bootloaderu přeskočte animaci spouštěcího loga. Toto nastavení je ignorováno, pokud je vypnuta možnost 'Použít Soubor BIOS Pokud byl Nalezen'."
#define MGBA_GB_COLORS_LABEL_CS "Výchozí Paleta Game Boye"
#define MGBA_GB_COLORS_INFO_0_CS "Vybírá, která paleta se použije pro hry pro Game Boy, které nejsou kompatibilní s Game Boy Color nebo Super Game Boy, nebo pokud je model nuceně nastaven na Game Boy."
#define OPTION_VAL_GRAYSCALE_CS NULL
#define MGBA_GB_COLORS_PRESET_LABEL_CS "Hardwarové Přednastavené Palety pro Game Boy (Restart)"
#define MGBA_GB_COLORS_PRESET_INFO_0_CS "Používejte palety pro hry pro Game Boy, které mají předvolby pro Game Boy Color nebo Super Game Boy."
#define OPTION_VAL_0_CS "Výchozí Předvolba pro Game Boy"
#define OPTION_VAL_1_CS "Pouze Předvolby pro Game Boy Color"
#define OPTION_VAL_2_CS "Pouze Předvolby pro Super Game Boy"
#define OPTION_VAL_3_CS "Všechny dostupné předvolby"
#define MGBA_SGB_BORDERS_LABEL_CS "Použití Ohraničení Super Game Boy (Restart)"
#define MGBA_SGB_BORDERS_INFO_0_CS "Zobrazit ohraničení Super Game Boy, když běží vylepšené hry Super Game Boy."
#define MGBA_COLOR_CORRECTION_LABEL_CS "Korekce Barev"
#define MGBA_COLOR_CORRECTION_INFO_0_CS "Upraví výstupní barvy tak, aby odpovídaly zobrazení skutečného hardwaru GBA/GBC."
#define OPTION_VAL_AUTO_CS NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_CS "Prolínání Mezi-Snímku"
#define MGBA_INTERFRAME_BLENDING_INFO_0_CS "Simuluje efekty duchů na LCD. 'Jednoduchá' provádí mix aktuálního a předchozího snímku v poměru 50:50. 'Chytrá' se pokouší detekovat blikání obrazovky a provede mix 50:50 pouze u postižených pixelů. 'LCD Ghosting' napodobuje přirozenou dobu odezvy LCD kombinací více vyrovnávací paměti snímků. Prolínání 'Jednoduchá' nebo 'Chytrá' je nutné při hraní her, které agresivně využívají LCD ghosting pro efekty průhlednosti (Wave Race, Chikyuu Kaihou Gun ZAS, F-Zero, série Boktai...)."
#define OPTION_VAL_MIX_CS "Jednoduchá"
#define OPTION_VAL_MIX_SMART_CS "Chytrá"
#define OPTION_VAL_LCD_GHOSTING_CS "LCD Ghosting (Přesný)"
#define OPTION_VAL_LCD_GHOSTING_FAST_CS "LCD Ghosting (Rychlý)"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CS "Audio Filtr"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_CS "Nízko Propustný Filtr"
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_CS "Povoluje dolní propust zvukového filtru pro snížení 'hrubosti' generovaného zvuku."
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CS "Úroveň Filtru Zvuku"
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_CS "Úroveň Filtru"
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_CS "Určuje mezní frekvenci dolní propusti zvukového filtru. Vyšší hodnota zvyšuje vnímanou 'sílu' filtru, protože je potlačen širší rozsah vysokofrekvenčního spektra."
#define OPTION_VAL_5_CS NULL
#define OPTION_VAL_10_CS NULL
#define OPTION_VAL_15_CS NULL
#define OPTION_VAL_20_CS NULL
#define OPTION_VAL_25_CS NULL
#define OPTION_VAL_30_CS NULL
#define OPTION_VAL_35_CS NULL
#define OPTION_VAL_40_CS NULL
#define OPTION_VAL_45_CS NULL
#define OPTION_VAL_50_CS NULL
#define OPTION_VAL_55_CS NULL
#define OPTION_VAL_60_CS NULL
#define OPTION_VAL_65_CS NULL
#define OPTION_VAL_70_CS NULL
#define OPTION_VAL_75_CS NULL
#define OPTION_VAL_80_CS NULL
#define OPTION_VAL_85_CS NULL
#define OPTION_VAL_90_CS NULL
#define OPTION_VAL_95_CS NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_CS "Povolení Protichůdného Směrového Vstupu"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_CS "Povolení této funkce umožní stisknout / rychle střídat / držet současně levý i pravý směr (nebo nahoru a dolů). To může způsobit závady založené na pohybu."
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_CS "Úroveň Solárního Senzoru"
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_CS "Nastaví intenzitu okolního slunečního světla. Lze použít ve hrách, které obsahují sluneční senzor v kazetách, např. v sérii Boktai."
#define OPTION_VAL_SENSOR_CS "Použít snímač zařízení, je-li k dispozici"
#define MGBA_FORCE_GBP_LABEL_CS "Game Boy Player Vybrace (Restart)"
#define MGBA_FORCE_GBP_INFO_0_CS "Povolení této funkce umožní kompatibilním hrám se spouštěcím logem Game Boy Player, aby ovladač vybroval. Vzhledem k tomu, jak se společnost Nintendo rozhodla, že by tato funkce měla fungovat, může v některých těchto hrách způsobovat závady, jako je blikání nebo zpoždění."
#define MGBA_IDLE_OPTIMIZATION_LABEL_CS "Odstranění Nečinné Smyčky"
#define MGBA_IDLE_OPTIMIZATION_INFO_0_CS "Snížení zátěže systému optimalizací tzv. 'nečinné-smyčky' - úseků v kódu, kde se nic neděje, ale procesor běží na plné obrátky (jako když auto jede na neutrál). Zvyšuje výkon a měla by být povolena na hardwaru nižší třídy."
#define OPTION_VAL_REMOVE_KNOWN_CS "Odstranit Známé"
#define OPTION_VAL_DETECT_AND_REMOVE_CS "Detekovat a Odstranit"
#define OPTION_VAL_DON_T_REMOVE_CS "Neodstraňovat"
#define MGBA_FRAMESKIP_LABEL_CS NULL
#define MGBA_FRAMESKIP_INFO_0_CS "Přeskočení snímků, aby se zabránilo nedostatečnému využití vyrovnávací paměti zvuku (praskání). Zlepšuje výkon na úkor vizuální plynulosti. Funkce 'Auto' přeskakuje snímky, pokud to doporučí frontend. 'Auto (Hraniční Hodnota)' využívá nastavení 'Hraniční Hodnota Přeskočení Snímku (%)'. 'Pevný Interval' využívá nastavení 'Interval Přeskočení Snímku'."
#define OPTION_VAL_AUTO_THRESHOLD_CS "Auto (Hraniční Hodnota)"
#define OPTION_VAL_FIXED_INTERVAL_CS "Pevný Interval"
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_CS "Hraniční Hodnota Frameskip (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_CS "Pokud je položka 'Přeskočení Snímku' nastavena na hodnotu 'Auto (Hraniční Hodnota)', určuje prahovou hodnotu (procento) obsazení vyrovnávací paměti zvuku, pod kterou budou snímky přeskočeny. Vyšší hodnoty snižují riziko praskání tím, že způsobují častější vynechávání snímků."
#define MGBA_FRAMESKIP_INTERVAL_LABEL_CS "Interval Přeskočení Snímku"
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_CS "Pokud je položka 'Přeskočení Snímku' nastavena na 'Pevný interval', je zde nastavená hodnota počtem vynechaných snímků po vykreslení snímku - tj. '0' = 60 snímků/s, '1' = 30 snímků/s, '2' = 15 snímků/s atd."

struct retro_core_option_v2_category option_cats_cs[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_CS,
      CATEGORY_SYSTEM_INFO_0_CS
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_CS,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_CS
#else
      CATEGORY_VIDEO_INFO_1_CS
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CS,
      CATEGORY_AUDIO_INFO_0_CS
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CS,
      CATEGORY_INPUT_INFO_0_CS
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_CS,
      CATEGORY_PERFORMANCE_INFO_0_CS
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cs[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_CS,
      NULL,
      MGBA_GB_MODEL_INFO_0_CS,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_CS },
         { "Game Boy",         OPTION_VAL_GAME_BOY_CS },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_CS },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_CS },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_CS },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_CS,
      NULL,
      MGBA_USE_BIOS_INFO_0_CS,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_CS,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_CS,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_CS,
      NULL,
      MGBA_GB_COLORS_INFO_0_CS,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_CS },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_CS,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_CS,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_CS },
         { "1", OPTION_VAL_1_CS },
         { "2", OPTION_VAL_2_CS },
         { "3", OPTION_VAL_3_CS },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_CS,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_CS,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_CS,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_CS,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_CS },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_CS },
         { "Auto", OPTION_VAL_AUTO_CS },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_CS,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_CS,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_CS },
         { "mix_smart",         OPTION_VAL_MIX_SMART_CS },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_CS },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_CS },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CS,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_CS,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_CS,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CS,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_CS,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_CS,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_CS },
         { "10", OPTION_VAL_10_CS },
         { "15", OPTION_VAL_15_CS },
         { "20", OPTION_VAL_20_CS },
         { "25", OPTION_VAL_25_CS },
         { "30", OPTION_VAL_30_CS },
         { "35", OPTION_VAL_35_CS },
         { "40", OPTION_VAL_40_CS },
         { "45", OPTION_VAL_45_CS },
         { "50", OPTION_VAL_50_CS },
         { "55", OPTION_VAL_55_CS },
         { "60", OPTION_VAL_60_CS },
         { "65", OPTION_VAL_65_CS },
         { "70", OPTION_VAL_70_CS },
         { "75", OPTION_VAL_75_CS },
         { "80", OPTION_VAL_80_CS },
         { "85", OPTION_VAL_85_CS },
         { "90", OPTION_VAL_90_CS },
         { "95", OPTION_VAL_95_CS },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_CS,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_CS,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_CS,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_CS,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_CS },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_CS,
      NULL,
      MGBA_FORCE_GBP_INFO_0_CS,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_CS,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_CS,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_CS },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_CS },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_CS },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_CS,
      NULL,
      MGBA_FRAMESKIP_INFO_0_CS,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_CS },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_CS },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_CS },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_CS,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_CS,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_CS,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_CS,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cs = {
   option_cats_cs,
   option_defs_cs
};

/* RETRO_LANGUAGE_CY */

#define CATEGORY_SYSTEM_LABEL_CY NULL
#define CATEGORY_SYSTEM_INFO_0_CY NULL
#define CATEGORY_VIDEO_LABEL_CY NULL
#define CATEGORY_VIDEO_INFO_0_CY NULL
#define CATEGORY_VIDEO_INFO_1_CY NULL
#define CATEGORY_AUDIO_LABEL_CY NULL
#define CATEGORY_AUDIO_INFO_0_CY NULL
#define CATEGORY_INPUT_LABEL_CY NULL
#define CATEGORY_INPUT_INFO_0_CY NULL
#define CATEGORY_PERFORMANCE_LABEL_CY NULL
#define CATEGORY_PERFORMANCE_INFO_0_CY NULL
#define MGBA_GB_MODEL_LABEL_CY NULL
#define MGBA_GB_MODEL_INFO_0_CY NULL
#define OPTION_VAL_AUTODETECT_CY NULL
#define OPTION_VAL_GAME_BOY_CY NULL
#define OPTION_VAL_SUPER_GAME_BOY_CY NULL
#define OPTION_VAL_GAME_BOY_COLOR_CY NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_CY NULL
#define MGBA_USE_BIOS_LABEL_CY NULL
#define MGBA_USE_BIOS_INFO_0_CY NULL
#define MGBA_SKIP_BIOS_LABEL_CY NULL
#define MGBA_SKIP_BIOS_INFO_0_CY NULL
#define MGBA_GB_COLORS_LABEL_CY NULL
#define MGBA_GB_COLORS_INFO_0_CY NULL
#define OPTION_VAL_GRAYSCALE_CY NULL
#define MGBA_GB_COLORS_PRESET_LABEL_CY NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_CY NULL
#define OPTION_VAL_0_CY NULL
#define OPTION_VAL_1_CY NULL
#define OPTION_VAL_2_CY NULL
#define OPTION_VAL_3_CY NULL
#define MGBA_SGB_BORDERS_LABEL_CY NULL
#define MGBA_SGB_BORDERS_INFO_0_CY NULL
#define MGBA_COLOR_CORRECTION_LABEL_CY NULL
#define MGBA_COLOR_CORRECTION_INFO_0_CY NULL
#define OPTION_VAL_AUTO_CY NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_CY NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_CY NULL
#define OPTION_VAL_MIX_CY NULL
#define OPTION_VAL_MIX_SMART_CY NULL
#define OPTION_VAL_LCD_GHOSTING_CY NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_CY NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CY NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_CY NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_CY NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CY NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_CY NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_CY NULL
#define OPTION_VAL_5_CY NULL
#define OPTION_VAL_10_CY NULL
#define OPTION_VAL_15_CY NULL
#define OPTION_VAL_20_CY NULL
#define OPTION_VAL_25_CY NULL
#define OPTION_VAL_30_CY NULL
#define OPTION_VAL_35_CY NULL
#define OPTION_VAL_40_CY NULL
#define OPTION_VAL_45_CY NULL
#define OPTION_VAL_50_CY NULL
#define OPTION_VAL_55_CY NULL
#define OPTION_VAL_60_CY NULL
#define OPTION_VAL_65_CY NULL
#define OPTION_VAL_70_CY NULL
#define OPTION_VAL_75_CY NULL
#define OPTION_VAL_80_CY NULL
#define OPTION_VAL_85_CY NULL
#define OPTION_VAL_90_CY NULL
#define OPTION_VAL_95_CY NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_CY NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_CY NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_CY NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_CY NULL
#define OPTION_VAL_SENSOR_CY NULL
#define MGBA_FORCE_GBP_LABEL_CY NULL
#define MGBA_FORCE_GBP_INFO_0_CY NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_CY NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_CY NULL
#define OPTION_VAL_REMOVE_KNOWN_CY NULL
#define OPTION_VAL_DETECT_AND_REMOVE_CY NULL
#define OPTION_VAL_DON_T_REMOVE_CY NULL
#define MGBA_FRAMESKIP_LABEL_CY NULL
#define MGBA_FRAMESKIP_INFO_0_CY NULL
#define OPTION_VAL_AUTO_THRESHOLD_CY NULL
#define OPTION_VAL_FIXED_INTERVAL_CY NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_CY NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_CY NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_CY NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_CY NULL

struct retro_core_option_v2_category option_cats_cy[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_CY,
      CATEGORY_SYSTEM_INFO_0_CY
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_CY,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_CY
#else
      CATEGORY_VIDEO_INFO_1_CY
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CY,
      CATEGORY_AUDIO_INFO_0_CY
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CY,
      CATEGORY_INPUT_INFO_0_CY
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_CY,
      CATEGORY_PERFORMANCE_INFO_0_CY
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cy[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_CY,
      NULL,
      MGBA_GB_MODEL_INFO_0_CY,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_CY },
         { "Game Boy",         OPTION_VAL_GAME_BOY_CY },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_CY },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_CY },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_CY },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_CY,
      NULL,
      MGBA_USE_BIOS_INFO_0_CY,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_CY,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_CY,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_CY,
      NULL,
      MGBA_GB_COLORS_INFO_0_CY,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_CY },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_CY,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_CY,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_CY },
         { "1", OPTION_VAL_1_CY },
         { "2", OPTION_VAL_2_CY },
         { "3", OPTION_VAL_3_CY },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_CY,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_CY,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_CY,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_CY,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_CY },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_CY },
         { "Auto", OPTION_VAL_AUTO_CY },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_CY,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_CY,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_CY },
         { "mix_smart",         OPTION_VAL_MIX_SMART_CY },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_CY },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_CY },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CY,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_CY,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_CY,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CY,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_CY,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_CY,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_CY },
         { "10", OPTION_VAL_10_CY },
         { "15", OPTION_VAL_15_CY },
         { "20", OPTION_VAL_20_CY },
         { "25", OPTION_VAL_25_CY },
         { "30", OPTION_VAL_30_CY },
         { "35", OPTION_VAL_35_CY },
         { "40", OPTION_VAL_40_CY },
         { "45", OPTION_VAL_45_CY },
         { "50", OPTION_VAL_50_CY },
         { "55", OPTION_VAL_55_CY },
         { "60", OPTION_VAL_60_CY },
         { "65", OPTION_VAL_65_CY },
         { "70", OPTION_VAL_70_CY },
         { "75", OPTION_VAL_75_CY },
         { "80", OPTION_VAL_80_CY },
         { "85", OPTION_VAL_85_CY },
         { "90", OPTION_VAL_90_CY },
         { "95", OPTION_VAL_95_CY },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_CY,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_CY,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_CY,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_CY,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_CY },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_CY,
      NULL,
      MGBA_FORCE_GBP_INFO_0_CY,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_CY,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_CY,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_CY },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_CY },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_CY },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_CY,
      NULL,
      MGBA_FRAMESKIP_INFO_0_CY,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_CY },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_CY },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_CY },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_CY,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_CY,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_CY,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_CY,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cy = {
   option_cats_cy,
   option_defs_cy
};

/* RETRO_LANGUAGE_DA */

#define CATEGORY_SYSTEM_LABEL_DA NULL
#define CATEGORY_SYSTEM_INFO_0_DA NULL
#define CATEGORY_VIDEO_LABEL_DA NULL
#define CATEGORY_VIDEO_INFO_0_DA NULL
#define CATEGORY_VIDEO_INFO_1_DA NULL
#define CATEGORY_AUDIO_LABEL_DA "Lyd"
#define CATEGORY_AUDIO_INFO_0_DA NULL
#define CATEGORY_INPUT_LABEL_DA NULL
#define CATEGORY_INPUT_INFO_0_DA NULL
#define CATEGORY_PERFORMANCE_LABEL_DA NULL
#define CATEGORY_PERFORMANCE_INFO_0_DA NULL
#define MGBA_GB_MODEL_LABEL_DA NULL
#define MGBA_GB_MODEL_INFO_0_DA NULL
#define OPTION_VAL_AUTODETECT_DA NULL
#define OPTION_VAL_GAME_BOY_DA NULL
#define OPTION_VAL_SUPER_GAME_BOY_DA NULL
#define OPTION_VAL_GAME_BOY_COLOR_DA NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_DA NULL
#define MGBA_USE_BIOS_LABEL_DA NULL
#define MGBA_USE_BIOS_INFO_0_DA NULL
#define MGBA_SKIP_BIOS_LABEL_DA NULL
#define MGBA_SKIP_BIOS_INFO_0_DA NULL
#define MGBA_GB_COLORS_LABEL_DA NULL
#define MGBA_GB_COLORS_INFO_0_DA NULL
#define OPTION_VAL_GRAYSCALE_DA NULL
#define MGBA_GB_COLORS_PRESET_LABEL_DA NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_DA NULL
#define OPTION_VAL_0_DA NULL
#define OPTION_VAL_1_DA NULL
#define OPTION_VAL_2_DA NULL
#define OPTION_VAL_3_DA NULL
#define MGBA_SGB_BORDERS_LABEL_DA NULL
#define MGBA_SGB_BORDERS_INFO_0_DA NULL
#define MGBA_COLOR_CORRECTION_LABEL_DA NULL
#define MGBA_COLOR_CORRECTION_INFO_0_DA NULL
#define OPTION_VAL_AUTO_DA NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_DA NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_DA NULL
#define OPTION_VAL_MIX_DA NULL
#define OPTION_VAL_MIX_SMART_DA NULL
#define OPTION_VAL_LCD_GHOSTING_DA NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_DA NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_DA NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_DA NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_DA NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_DA NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_DA NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_DA NULL
#define OPTION_VAL_5_DA NULL
#define OPTION_VAL_10_DA NULL
#define OPTION_VAL_15_DA NULL
#define OPTION_VAL_20_DA NULL
#define OPTION_VAL_25_DA NULL
#define OPTION_VAL_30_DA NULL
#define OPTION_VAL_35_DA NULL
#define OPTION_VAL_40_DA NULL
#define OPTION_VAL_45_DA NULL
#define OPTION_VAL_50_DA NULL
#define OPTION_VAL_55_DA NULL
#define OPTION_VAL_60_DA NULL
#define OPTION_VAL_65_DA NULL
#define OPTION_VAL_70_DA NULL
#define OPTION_VAL_75_DA NULL
#define OPTION_VAL_80_DA NULL
#define OPTION_VAL_85_DA NULL
#define OPTION_VAL_90_DA NULL
#define OPTION_VAL_95_DA NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_DA NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_DA NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_DA NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_DA NULL
#define OPTION_VAL_SENSOR_DA NULL
#define MGBA_FORCE_GBP_LABEL_DA NULL
#define MGBA_FORCE_GBP_INFO_0_DA NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_DA NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_DA NULL
#define OPTION_VAL_REMOVE_KNOWN_DA NULL
#define OPTION_VAL_DETECT_AND_REMOVE_DA NULL
#define OPTION_VAL_DON_T_REMOVE_DA NULL
#define MGBA_FRAMESKIP_LABEL_DA NULL
#define MGBA_FRAMESKIP_INFO_0_DA NULL
#define OPTION_VAL_AUTO_THRESHOLD_DA NULL
#define OPTION_VAL_FIXED_INTERVAL_DA NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_DA NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_DA NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_DA NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_DA NULL

struct retro_core_option_v2_category option_cats_da[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_DA,
      CATEGORY_SYSTEM_INFO_0_DA
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_DA,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_DA
#else
      CATEGORY_VIDEO_INFO_1_DA
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_DA,
      CATEGORY_AUDIO_INFO_0_DA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_DA,
      CATEGORY_INPUT_INFO_0_DA
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_DA,
      CATEGORY_PERFORMANCE_INFO_0_DA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_da[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_DA,
      NULL,
      MGBA_GB_MODEL_INFO_0_DA,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_DA },
         { "Game Boy",         OPTION_VAL_GAME_BOY_DA },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_DA },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_DA },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_DA },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_DA,
      NULL,
      MGBA_USE_BIOS_INFO_0_DA,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_DA,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_DA,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_DA,
      NULL,
      MGBA_GB_COLORS_INFO_0_DA,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_DA },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_DA,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_DA,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_DA },
         { "1", OPTION_VAL_1_DA },
         { "2", OPTION_VAL_2_DA },
         { "3", OPTION_VAL_3_DA },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_DA,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_DA,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_DA,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_DA,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_DA },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_DA },
         { "Auto", OPTION_VAL_AUTO_DA },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_DA,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_DA,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_DA },
         { "mix_smart",         OPTION_VAL_MIX_SMART_DA },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_DA },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_DA },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_DA,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_DA,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_DA,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_DA,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_DA,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_DA,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_DA },
         { "10", OPTION_VAL_10_DA },
         { "15", OPTION_VAL_15_DA },
         { "20", OPTION_VAL_20_DA },
         { "25", OPTION_VAL_25_DA },
         { "30", OPTION_VAL_30_DA },
         { "35", OPTION_VAL_35_DA },
         { "40", OPTION_VAL_40_DA },
         { "45", OPTION_VAL_45_DA },
         { "50", OPTION_VAL_50_DA },
         { "55", OPTION_VAL_55_DA },
         { "60", OPTION_VAL_60_DA },
         { "65", OPTION_VAL_65_DA },
         { "70", OPTION_VAL_70_DA },
         { "75", OPTION_VAL_75_DA },
         { "80", OPTION_VAL_80_DA },
         { "85", OPTION_VAL_85_DA },
         { "90", OPTION_VAL_90_DA },
         { "95", OPTION_VAL_95_DA },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_DA,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_DA,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_DA,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_DA,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_DA },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_DA,
      NULL,
      MGBA_FORCE_GBP_INFO_0_DA,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_DA,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_DA,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_DA },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_DA },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_DA },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_DA,
      NULL,
      MGBA_FRAMESKIP_INFO_0_DA,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_DA },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_DA },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_DA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_DA,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_DA,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_DA,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_DA,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_da = {
   option_cats_da,
   option_defs_da
};

/* RETRO_LANGUAGE_DE */

#define CATEGORY_SYSTEM_LABEL_DE NULL
#define CATEGORY_SYSTEM_INFO_0_DE "Grundlegende Hardwareauswahl / BIOS-Parameter konfigurieren."
#define CATEGORY_VIDEO_LABEL_DE NULL
#define CATEGORY_VIDEO_INFO_0_DE "DMG-Palette / SGB-Ränder / Farbkorrektur / LCD-Geistereffekte konfigurieren."
#define CATEGORY_VIDEO_INFO_1_DE "DMG-Palette / SGB-Ränder konfigurieren."
#define CATEGORY_AUDIO_LABEL_DE NULL
#define CATEGORY_AUDIO_INFO_0_DE "Audiofilterung konfigurieren."
#define CATEGORY_INPUT_LABEL_DE "Eingabe- und Hilfsgeräte"
#define CATEGORY_INPUT_INFO_0_DE "Einstellungen für die Controller-/Sensoreingabe und Controllervibration (Rumble) konfigurieren."
#define CATEGORY_PERFORMANCE_LABEL_DE "Leistung"
#define CATEGORY_PERFORMANCE_INFO_0_DE "Entfernen von Leerlaufschleifen und Frameskipping-Parameter konfigurieren."
#define MGBA_GB_MODEL_LABEL_DE "Game-Boy-Modell (Neustart erforderlich)"
#define MGBA_GB_MODEL_INFO_0_DE "Führt geladene Inhalte mit einem bestimmten Game Boy-Modell aus. „Automatisch erkennen\" wählt das am besten geeignete Modell für das aktuelle Spiel."
#define OPTION_VAL_AUTODETECT_DE "Automatisch erkennen"
#define OPTION_VAL_GAME_BOY_DE NULL
#define OPTION_VAL_SUPER_GAME_BOY_DE NULL
#define OPTION_VAL_GAME_BOY_COLOR_DE NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_DE NULL
#define MGBA_USE_BIOS_LABEL_DE "BIOS-Datei verwenden, sofern gefunden (Neustart erforderlich)"
#define MGBA_USE_BIOS_INFO_0_DE "Offiziellen BIOS/Bootloader für emulierte Hardware verwenden, sofern im Systemverzeichnis von RetroArch vorhanden."
#define MGBA_SKIP_BIOS_LABEL_DE "BIOS-Einleitung überspringen (Neustart erforderlich)"
#define MGBA_SKIP_BIOS_INFO_0_DE "Beim Verwenden eines offiziellen BIOS/Bootloader die Startlogo-Animation überspringen. Diese Einstellung wird ignoriert, wenn „BIOS-Datei verwenden, sofern gefunden“ deaktiviert ist."
#define MGBA_GB_COLORS_LABEL_DE "Game-Boy-Standardpalette"
#define MGBA_GB_COLORS_INFO_0_DE "Legt fest, welche Palette für Game-Boy-Spiele verwendet wird, die nicht mit dem Game Boy Color oder Super Game Boy kompatibel sind, oder wenn das Modell auf Game Boy eingestellt ist."
#define OPTION_VAL_GRAYSCALE_DE "Graustufen"
#define MGBA_GB_COLORS_PRESET_LABEL_DE "Hardware voreingestellte Game-Boy-Paletten (Neustart erforderlich)"
#define MGBA_GB_COLORS_PRESET_INFO_0_DE "Paletten für Game Boy-Spiele verwenden, die Voreinstellungen für den Game Boy Color oder Super Game Boy haben."
#define OPTION_VAL_0_DE "Game-Boy-Standardvoreinstellungen"
#define OPTION_VAL_1_DE "Nur Voreinstellungen für Game Boy Color"
#define OPTION_VAL_2_DE "Nur Voreinstellungen für Super Game Boy"
#define OPTION_VAL_3_DE "Alle verfügbaren Voreinstellungen"
#define MGBA_SGB_BORDERS_LABEL_DE "Ränder für Super Game Boy verwenden (Neustart erforderlich)"
#define MGBA_SGB_BORDERS_INFO_0_DE "Super-Game-Boy-Ränder beim Ausführen von Super-Game-Boy-Enhanced-Spielen."
#define MGBA_COLOR_CORRECTION_LABEL_DE "Farbkorrektur"
#define MGBA_COLOR_CORRECTION_INFO_0_DE "Passt die Ausgabefarben so an, dass sie der Anzeige der echten GBA/GBC-Hardware entsprechen."
#define OPTION_VAL_AUTO_DE "Automatisch"
#define MGBA_INTERFRAME_BLENDING_LABEL_DE "Interframe-Blending"
#define MGBA_INTERFRAME_BLENDING_INFO_0_DE "Simuliert LCD-Ghosting-Effekte. „Einfach“ führt eine 50:50-Mischung aus aktuellem und vorherigen Bild durch. „Intelligent“ versucht, Bildschirmflimmern zu erkennen, und führt nur bei den betroffenen Pixeln eine 50:50-Mischung durch. „LCD-Ghosting“ ahmt die natürlichen LCD-Reaktionszeiten nach, indem mehrere gepufferte Bilder kombiniert werden. „Einfaches“ oder „Intelligentes“ Überblenden ist bei Spielen erforderlich, die LCD-Ghosting aggressiv für Transparenzeffekte ausnutzen (Wave Race, Chikyuu Kaihou Gun ZAS, F-Zero, die Boktai-Serie, …)."
#define OPTION_VAL_MIX_DE "Einfach"
#define OPTION_VAL_MIX_SMART_DE "Intelligent"
#define OPTION_VAL_LCD_GHOSTING_DE "LCD-Ghosting (Genau)"
#define OPTION_VAL_LCD_GHOSTING_FAST_DE "LCD-Ghosting (Schnell)"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_DE "Audiofilter"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_DE "Tiefpassfilter"
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_DE "Aktiviert einen Tiefpass-Audiofilter, um die „Schärfe“ des erzeugten Tons zu reduzieren."
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_DE "Audiofilterstufe"
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_DE "Filterstufe"
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_DE "Legt die Höchstfrequenz des Tiefpass-Audiofilters fest. Ein höherer Wert erhöht die wahrgenommene „Stärke“ des Filters, da ein größerer Bereich des Hochfrequenzspektrums abgeschwächt wird."
#define OPTION_VAL_5_DE "5 %"
#define OPTION_VAL_10_DE "10 %"
#define OPTION_VAL_15_DE "15 %"
#define OPTION_VAL_20_DE "20 %"
#define OPTION_VAL_25_DE "25 %"
#define OPTION_VAL_30_DE "30 %"
#define OPTION_VAL_35_DE "35 %"
#define OPTION_VAL_40_DE "40 %"
#define OPTION_VAL_45_DE "45 %"
#define OPTION_VAL_50_DE "50 %"
#define OPTION_VAL_55_DE "55 %"
#define OPTION_VAL_60_DE "60 %"
#define OPTION_VAL_65_DE "65 %"
#define OPTION_VAL_70_DE "70 %"
#define OPTION_VAL_75_DE "75 %"
#define OPTION_VAL_80_DE "80 %"
#define OPTION_VAL_85_DE "85 %"
#define OPTION_VAL_90_DE "90 %"
#define OPTION_VAL_95_DE "95 %"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_DE "Entgegengesetzte Richtungseingabe zulassen"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_DE "Wenn diese Funktion aktiviert ist, kann gleichzeitig die linke und die rechte (oder die obere und die untere) Richtungstaste bzw. schnell abwechselnd gedrückt oder gehalten werden. Dies kann zu bewegungsbasierten Fehlern führen."
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_DE "Solarsensorstufe"
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_DE "Setzt die Intensität des Umgebungslichts. Kann von Spielen verwendet werden, die einen Solarsensor in ihre Module eingeschlossen haben, z. B. die Boktai-Serie."
#define OPTION_VAL_SENSOR_DE "Gerätesensor verwenden, falls verfügbar"
#define MGBA_FORCE_GBP_LABEL_DE "Game-Boy-Player-Rumble (Neustart erforderlich)"
#define MGBA_FORCE_GBP_INFO_0_DE "Wird dies aktiviert, können kompatible Spiele mit dem Game-Boy-Player-Bootlogo den Controller zum Rattern bringen. Aufgrund der Entscheidung von Nintendo, wie diese Funktion funktioniert, kann es bei einigen dieser Spiele zu Störungen wie Flackern oder Verzögerungen kommen."
#define MGBA_IDLE_OPTIMIZATION_LABEL_DE "Leerlaufschleife entfernen"
#define MGBA_IDLE_OPTIMIZATION_INFO_0_DE "Die Systemlast durch Optimierung der so genannten „Idle-Loops“-Abschnitte im Code verringern, in denen nichts passiert, aber die CPU mit voller Geschwindigkeit läuft (wie ein Auto, das im Leerlauf auf Drehzahl kommt). Verbessert die Leistung und sollte auf leistungsschwacher Hardware aktiviert werden."
#define OPTION_VAL_REMOVE_KNOWN_DE "Bekannte entfernen"
#define OPTION_VAL_DETECT_AND_REMOVE_DE "Erkennen und entfernen"
#define OPTION_VAL_DON_T_REMOVE_DE "Nicht entfernen"
#define MGBA_FRAMESKIP_LABEL_DE NULL
#define MGBA_FRAMESKIP_INFO_0_DE "Überspringen von Einzelbildern, um ein Unterlaufen des Audiopuffers (Knistern) zu vermeiden. Verbessert die Leistung auf Kosten der visuellen Glättung. „Automatisch“ überspringt Frames auf Anweisung des Frontends. „Automatisch (Schwellenwert)“ verwendet die Einstellung „Frameskip-Schwellenwert (%)“. Bei „Festes Intervall“ wird die Einstellung „Frameskip-Intervall“ verwendet."
#define OPTION_VAL_AUTO_THRESHOLD_DE "Automatisch (Schwellenwert)"
#define OPTION_VAL_FIXED_INTERVAL_DE "Festes Intervall"
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_DE "Frameskip-Grenzwert (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_DE "Wenn „Frameskip“ auf „Automatisch (Schwellenwert)“ eingestellt ist, wird hier der Schwellenwert für die Belegung des Audiopuffers (in Prozent) angegeben, unterhalb dessen Frames übersprungen werden. Höhere Werte verringern das Risiko von Knistern, da die Frames häufiger übersprungen werden."
#define MGBA_FRAMESKIP_INTERVAL_LABEL_DE "Frameskip-Intervall"
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_DE "Wenn „Frameskip“ auf „Festes Intervall“ eingestellt ist, wird hier die Anzahl der Auslassungen gesetzt, nachdem ein Frame gerendert wurde – z. B. „0“ = 60 fps, „1“ = 30 fps, „2“ = 15 fps usw."

struct retro_core_option_v2_category option_cats_de[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_DE,
      CATEGORY_SYSTEM_INFO_0_DE
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_DE,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_DE
#else
      CATEGORY_VIDEO_INFO_1_DE
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_DE,
      CATEGORY_AUDIO_INFO_0_DE
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_DE,
      CATEGORY_INPUT_INFO_0_DE
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_DE,
      CATEGORY_PERFORMANCE_INFO_0_DE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_de[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_DE,
      NULL,
      MGBA_GB_MODEL_INFO_0_DE,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_DE },
         { "Game Boy",         OPTION_VAL_GAME_BOY_DE },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_DE },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_DE },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_DE },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_DE,
      NULL,
      MGBA_USE_BIOS_INFO_0_DE,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_DE,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_DE,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_DE,
      NULL,
      MGBA_GB_COLORS_INFO_0_DE,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_DE },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_DE,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_DE,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_DE },
         { "1", OPTION_VAL_1_DE },
         { "2", OPTION_VAL_2_DE },
         { "3", OPTION_VAL_3_DE },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_DE,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_DE,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_DE,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_DE,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_DE },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_DE },
         { "Auto", OPTION_VAL_AUTO_DE },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_DE,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_DE,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_DE },
         { "mix_smart",         OPTION_VAL_MIX_SMART_DE },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_DE },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_DE },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_DE,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_DE,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_DE,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_DE,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_DE,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_DE,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_DE },
         { "10", OPTION_VAL_10_DE },
         { "15", OPTION_VAL_15_DE },
         { "20", OPTION_VAL_20_DE },
         { "25", OPTION_VAL_25_DE },
         { "30", OPTION_VAL_30_DE },
         { "35", OPTION_VAL_35_DE },
         { "40", OPTION_VAL_40_DE },
         { "45", OPTION_VAL_45_DE },
         { "50", OPTION_VAL_50_DE },
         { "55", OPTION_VAL_55_DE },
         { "60", OPTION_VAL_60_DE },
         { "65", OPTION_VAL_65_DE },
         { "70", OPTION_VAL_70_DE },
         { "75", OPTION_VAL_75_DE },
         { "80", OPTION_VAL_80_DE },
         { "85", OPTION_VAL_85_DE },
         { "90", OPTION_VAL_90_DE },
         { "95", OPTION_VAL_95_DE },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_DE,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_DE,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_DE,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_DE,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_DE },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_DE,
      NULL,
      MGBA_FORCE_GBP_INFO_0_DE,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_DE,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_DE,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_DE },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_DE },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_DE },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_DE,
      NULL,
      MGBA_FRAMESKIP_INFO_0_DE,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_DE },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_DE },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_DE },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_DE,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_DE,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_DE,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_DE,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_de = {
   option_cats_de,
   option_defs_de
};

/* RETRO_LANGUAGE_EL */

#define CATEGORY_SYSTEM_LABEL_EL "Σύστημα"
#define CATEGORY_SYSTEM_INFO_0_EL NULL
#define CATEGORY_VIDEO_LABEL_EL "Οδηγός Βίντεο"
#define CATEGORY_VIDEO_INFO_0_EL NULL
#define CATEGORY_VIDEO_INFO_1_EL NULL
#define CATEGORY_AUDIO_LABEL_EL "Οδηγός Ήχου"
#define CATEGORY_AUDIO_INFO_0_EL "Ρύθμιση φίλτρου ήχου."
#define CATEGORY_INPUT_LABEL_EL NULL
#define CATEGORY_INPUT_INFO_0_EL NULL
#define CATEGORY_PERFORMANCE_LABEL_EL "Επίδοση"
#define CATEGORY_PERFORMANCE_INFO_0_EL NULL
#define MGBA_GB_MODEL_LABEL_EL "Μοντέλο Game Boy (Επανεκκίνηση)"
#define MGBA_GB_MODEL_INFO_0_EL NULL
#define OPTION_VAL_AUTODETECT_EL "Αυτόματη ανίχνευση"
#define OPTION_VAL_GAME_BOY_EL NULL
#define OPTION_VAL_SUPER_GAME_BOY_EL NULL
#define OPTION_VAL_GAME_BOY_COLOR_EL NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_EL NULL
#define MGBA_USE_BIOS_LABEL_EL NULL
#define MGBA_USE_BIOS_INFO_0_EL NULL
#define MGBA_SKIP_BIOS_LABEL_EL "Παράλειψη Εισαγωγικών BIOS (Επανεκκίνηση)"
#define MGBA_SKIP_BIOS_INFO_0_EL NULL
#define MGBA_GB_COLORS_LABEL_EL NULL
#define MGBA_GB_COLORS_INFO_0_EL NULL
#define OPTION_VAL_GRAYSCALE_EL "Γκρι απόχρωση"
#define MGBA_GB_COLORS_PRESET_LABEL_EL NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_EL NULL
#define OPTION_VAL_0_EL NULL
#define OPTION_VAL_1_EL NULL
#define OPTION_VAL_2_EL NULL
#define OPTION_VAL_3_EL NULL
#define MGBA_SGB_BORDERS_LABEL_EL NULL
#define MGBA_SGB_BORDERS_INFO_0_EL NULL
#define MGBA_COLOR_CORRECTION_LABEL_EL "Διόρθωση Χρωμάτων"
#define MGBA_COLOR_CORRECTION_INFO_0_EL NULL
#define OPTION_VAL_AUTO_EL "Αυτόματο"
#define MGBA_INTERFRAME_BLENDING_LABEL_EL NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_EL NULL
#define OPTION_VAL_MIX_EL "Απλό"
#define OPTION_VAL_MIX_SMART_EL "Έξυπνο"
#define OPTION_VAL_LCD_GHOSTING_EL NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_EL NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_EL "Φίλτρα Ήχου"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_EL NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_EL NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_EL NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_EL "Επίπεδο Φίλτραρίσματος"
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_EL NULL
#define OPTION_VAL_5_EL NULL
#define OPTION_VAL_10_EL NULL
#define OPTION_VAL_15_EL NULL
#define OPTION_VAL_20_EL NULL
#define OPTION_VAL_25_EL NULL
#define OPTION_VAL_30_EL NULL
#define OPTION_VAL_35_EL NULL
#define OPTION_VAL_40_EL NULL
#define OPTION_VAL_45_EL NULL
#define OPTION_VAL_50_EL NULL
#define OPTION_VAL_55_EL NULL
#define OPTION_VAL_60_EL NULL
#define OPTION_VAL_65_EL NULL
#define OPTION_VAL_70_EL NULL
#define OPTION_VAL_75_EL NULL
#define OPTION_VAL_80_EL "το 80%"
#define OPTION_VAL_85_EL NULL
#define OPTION_VAL_90_EL NULL
#define OPTION_VAL_95_EL NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_EL NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_EL NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_EL "Επίπεδο Ηλιακού Αισθητήρα"
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_EL NULL
#define OPTION_VAL_SENSOR_EL "Χρήση αισθητήρα συσκευής εάν υπάρχει"
#define MGBA_FORCE_GBP_LABEL_EL NULL
#define MGBA_FORCE_GBP_INFO_0_EL NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_EL NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_EL NULL
#define OPTION_VAL_REMOVE_KNOWN_EL NULL
#define OPTION_VAL_DETECT_AND_REMOVE_EL "Ανίχνευση και Αφαίρεση"
#define OPTION_VAL_DON_T_REMOVE_EL "Να Μην Αφαιρεθεί"
#define MGBA_FRAMESKIP_LABEL_EL NULL
#define MGBA_FRAMESKIP_INFO_0_EL NULL
#define OPTION_VAL_AUTO_THRESHOLD_EL NULL
#define OPTION_VAL_FIXED_INTERVAL_EL "Σταθερό Διάστημα"
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_EL NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_EL NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_EL NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_EL NULL

struct retro_core_option_v2_category option_cats_el[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_EL,
      CATEGORY_SYSTEM_INFO_0_EL
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_EL,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_EL
#else
      CATEGORY_VIDEO_INFO_1_EL
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_EL,
      CATEGORY_AUDIO_INFO_0_EL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_EL,
      CATEGORY_INPUT_INFO_0_EL
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_EL,
      CATEGORY_PERFORMANCE_INFO_0_EL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_el[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_EL,
      NULL,
      MGBA_GB_MODEL_INFO_0_EL,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_EL },
         { "Game Boy",         OPTION_VAL_GAME_BOY_EL },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_EL },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_EL },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_EL },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_EL,
      NULL,
      MGBA_USE_BIOS_INFO_0_EL,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_EL,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_EL,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_EL,
      NULL,
      MGBA_GB_COLORS_INFO_0_EL,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_EL },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_EL,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_EL,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_EL },
         { "1", OPTION_VAL_1_EL },
         { "2", OPTION_VAL_2_EL },
         { "3", OPTION_VAL_3_EL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_EL,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_EL,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_EL,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_EL,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_EL },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_EL },
         { "Auto", OPTION_VAL_AUTO_EL },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_EL,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_EL,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_EL },
         { "mix_smart",         OPTION_VAL_MIX_SMART_EL },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_EL },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_EL },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_EL,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_EL,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_EL,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_EL,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_EL,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_EL,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_EL },
         { "10", OPTION_VAL_10_EL },
         { "15", OPTION_VAL_15_EL },
         { "20", OPTION_VAL_20_EL },
         { "25", OPTION_VAL_25_EL },
         { "30", OPTION_VAL_30_EL },
         { "35", OPTION_VAL_35_EL },
         { "40", OPTION_VAL_40_EL },
         { "45", OPTION_VAL_45_EL },
         { "50", OPTION_VAL_50_EL },
         { "55", OPTION_VAL_55_EL },
         { "60", OPTION_VAL_60_EL },
         { "65", OPTION_VAL_65_EL },
         { "70", OPTION_VAL_70_EL },
         { "75", OPTION_VAL_75_EL },
         { "80", OPTION_VAL_80_EL },
         { "85", OPTION_VAL_85_EL },
         { "90", OPTION_VAL_90_EL },
         { "95", OPTION_VAL_95_EL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_EL,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_EL,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_EL,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_EL,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_EL },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_EL,
      NULL,
      MGBA_FORCE_GBP_INFO_0_EL,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_EL,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_EL,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_EL },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_EL },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_EL },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_EL,
      NULL,
      MGBA_FRAMESKIP_INFO_0_EL,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_EL },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_EL },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_EL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_EL,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_EL,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_EL,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_EL,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_el = {
   option_cats_el,
   option_defs_el
};

/* RETRO_LANGUAGE_EN */

#define CATEGORY_SYSTEM_LABEL_EN NULL
#define CATEGORY_SYSTEM_INFO_0_EN NULL
#define CATEGORY_VIDEO_LABEL_EN NULL
#define CATEGORY_VIDEO_INFO_0_EN "Configure DMG palette / SGB borders / colour correction / LCD ghosting effects."
#define CATEGORY_VIDEO_INFO_1_EN NULL
#define CATEGORY_AUDIO_LABEL_EN NULL
#define CATEGORY_AUDIO_INFO_0_EN NULL
#define CATEGORY_INPUT_LABEL_EN NULL
#define CATEGORY_INPUT_INFO_0_EN NULL
#define CATEGORY_PERFORMANCE_LABEL_EN NULL
#define CATEGORY_PERFORMANCE_INFO_0_EN "Configure idle loop removal / frame-skipping parameters."
#define MGBA_GB_MODEL_LABEL_EN NULL
#define MGBA_GB_MODEL_INFO_0_EN NULL
#define OPTION_VAL_AUTODETECT_EN NULL
#define OPTION_VAL_GAME_BOY_EN NULL
#define OPTION_VAL_SUPER_GAME_BOY_EN NULL
#define OPTION_VAL_GAME_BOY_COLOR_EN "Game Boy Colour"
#define OPTION_VAL_GAME_BOY_ADVANCE_EN NULL
#define MGBA_USE_BIOS_LABEL_EN NULL
#define MGBA_USE_BIOS_INFO_0_EN NULL
#define MGBA_SKIP_BIOS_LABEL_EN NULL
#define MGBA_SKIP_BIOS_INFO_0_EN NULL
#define MGBA_GB_COLORS_LABEL_EN NULL
#define MGBA_GB_COLORS_INFO_0_EN "Selects which palette is used for Game Boy games that are not Game Boy Colour or Super Game Boy compatible, or if the model is forced to Game Boy."
#define OPTION_VAL_GRAYSCALE_EN "Greyscale"
#define MGBA_GB_COLORS_PRESET_LABEL_EN NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_EN "Use the palettes for Game Boy games that have presets on the Game Boy Colour or Super Game Boy."
#define OPTION_VAL_0_EN NULL
#define OPTION_VAL_1_EN "Game Boy Colour presets only"
#define OPTION_VAL_2_EN NULL
#define OPTION_VAL_3_EN NULL
#define MGBA_SGB_BORDERS_LABEL_EN NULL
#define MGBA_SGB_BORDERS_INFO_0_EN NULL
#define MGBA_COLOR_CORRECTION_LABEL_EN "Colour Correction"
#define MGBA_COLOR_CORRECTION_INFO_0_EN "Adjusts output colours to match the display of real GBA/GBC hardware."
#define OPTION_VAL_AUTO_EN NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_EN "Inter-frame Blending"
#define MGBA_INTERFRAME_BLENDING_INFO_0_EN NULL
#define OPTION_VAL_MIX_EN NULL
#define OPTION_VAL_MIX_SMART_EN NULL
#define OPTION_VAL_LCD_GHOSTING_EN NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_EN NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_EN NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_EN NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_EN NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_EN NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_EN NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_EN NULL
#define OPTION_VAL_5_EN NULL
#define OPTION_VAL_10_EN NULL
#define OPTION_VAL_15_EN NULL
#define OPTION_VAL_20_EN NULL
#define OPTION_VAL_25_EN NULL
#define OPTION_VAL_30_EN NULL
#define OPTION_VAL_35_EN NULL
#define OPTION_VAL_40_EN NULL
#define OPTION_VAL_45_EN NULL
#define OPTION_VAL_50_EN NULL
#define OPTION_VAL_55_EN NULL
#define OPTION_VAL_60_EN NULL
#define OPTION_VAL_65_EN NULL
#define OPTION_VAL_70_EN NULL
#define OPTION_VAL_75_EN NULL
#define OPTION_VAL_80_EN NULL
#define OPTION_VAL_85_EN NULL
#define OPTION_VAL_90_EN NULL
#define OPTION_VAL_95_EN NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_EN NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_EN NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_EN NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_EN NULL
#define OPTION_VAL_SENSOR_EN NULL
#define MGBA_FORCE_GBP_LABEL_EN NULL
#define MGBA_FORCE_GBP_INFO_0_EN NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_EN NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_EN "Reduce system load by optimising so-called 'idle-loops' - sections in the code where nothing happens, but the CPU runs at full speed (like a car revving in neutral). Improves performance, and should be enabled on low-end hardware."
#define OPTION_VAL_REMOVE_KNOWN_EN NULL
#define OPTION_VAL_DETECT_AND_REMOVE_EN NULL
#define OPTION_VAL_DON_T_REMOVE_EN NULL
#define MGBA_FRAMESKIP_LABEL_EN "Frame-skip"
#define MGBA_FRAMESKIP_INFO_0_EN "Skip frames to avoid audio buffer under-run (crackling). Improves performance at the expense of visual smoothness. 'Auto' skips frames when advised by the front-end. 'Auto (Threshold)' utilises the 'Frame-skip Threshold (%)' setting. 'Fixed Interval' utilises the 'Frame-skip Interval' setting."
#define OPTION_VAL_AUTO_THRESHOLD_EN NULL
#define OPTION_VAL_FIXED_INTERVAL_EN NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_EN "Frame-skip Threshold (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_EN "When 'Frame-skip' is set to 'Auto (Threshold)', this specifies the audio buffer occupancy threshold (percentage) below which frames will be skipped. Higher values reduce the risk of crackling by causing frames to be dropped more frequently."
#define MGBA_FRAMESKIP_INTERVAL_LABEL_EN "Frame-skip Interval"
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_EN "When 'Frame-skip' is set to 'Fixed Interval', the value set here is the number of frames omitted after a frame is rendered - i.e. '0' = 60fps, '1' = 30fps, '2' = 15fps, etc."

struct retro_core_option_v2_category option_cats_en[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_EN,
      CATEGORY_SYSTEM_INFO_0_EN
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_EN,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_EN
#else
      CATEGORY_VIDEO_INFO_1_EN
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_EN,
      CATEGORY_AUDIO_INFO_0_EN
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_EN,
      CATEGORY_INPUT_INFO_0_EN
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_EN,
      CATEGORY_PERFORMANCE_INFO_0_EN
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_en[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_EN,
      NULL,
      MGBA_GB_MODEL_INFO_0_EN,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_EN },
         { "Game Boy",         OPTION_VAL_GAME_BOY_EN },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_EN },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_EN },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_EN },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_EN,
      NULL,
      MGBA_USE_BIOS_INFO_0_EN,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_EN,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_EN,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_EN,
      NULL,
      MGBA_GB_COLORS_INFO_0_EN,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_EN },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_EN,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_EN,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_EN },
         { "1", OPTION_VAL_1_EN },
         { "2", OPTION_VAL_2_EN },
         { "3", OPTION_VAL_3_EN },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_EN,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_EN,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_EN,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_EN,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_EN },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_EN },
         { "Auto", OPTION_VAL_AUTO_EN },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_EN,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_EN,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_EN },
         { "mix_smart",         OPTION_VAL_MIX_SMART_EN },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_EN },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_EN },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_EN,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_EN,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_EN,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_EN,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_EN,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_EN,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_EN },
         { "10", OPTION_VAL_10_EN },
         { "15", OPTION_VAL_15_EN },
         { "20", OPTION_VAL_20_EN },
         { "25", OPTION_VAL_25_EN },
         { "30", OPTION_VAL_30_EN },
         { "35", OPTION_VAL_35_EN },
         { "40", OPTION_VAL_40_EN },
         { "45", OPTION_VAL_45_EN },
         { "50", OPTION_VAL_50_EN },
         { "55", OPTION_VAL_55_EN },
         { "60", OPTION_VAL_60_EN },
         { "65", OPTION_VAL_65_EN },
         { "70", OPTION_VAL_70_EN },
         { "75", OPTION_VAL_75_EN },
         { "80", OPTION_VAL_80_EN },
         { "85", OPTION_VAL_85_EN },
         { "90", OPTION_VAL_90_EN },
         { "95", OPTION_VAL_95_EN },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_EN,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_EN,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_EN,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_EN,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_EN },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_EN,
      NULL,
      MGBA_FORCE_GBP_INFO_0_EN,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_EN,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_EN,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_EN },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_EN },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_EN },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_EN,
      NULL,
      MGBA_FRAMESKIP_INFO_0_EN,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_EN },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_EN },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_EN },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_EN,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_EN,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_EN,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_EN,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_en = {
   option_cats_en,
   option_defs_en
};

/* RETRO_LANGUAGE_EO */

#define CATEGORY_SYSTEM_LABEL_EO NULL
#define CATEGORY_SYSTEM_INFO_0_EO NULL
#define CATEGORY_VIDEO_LABEL_EO "Video Driver"
#define CATEGORY_VIDEO_INFO_0_EO NULL
#define CATEGORY_VIDEO_INFO_1_EO NULL
#define CATEGORY_AUDIO_LABEL_EO "Audio Driver"
#define CATEGORY_AUDIO_INFO_0_EO NULL
#define CATEGORY_INPUT_LABEL_EO NULL
#define CATEGORY_INPUT_INFO_0_EO NULL
#define CATEGORY_PERFORMANCE_LABEL_EO NULL
#define CATEGORY_PERFORMANCE_INFO_0_EO NULL
#define MGBA_GB_MODEL_LABEL_EO NULL
#define MGBA_GB_MODEL_INFO_0_EO NULL
#define OPTION_VAL_AUTODETECT_EO NULL
#define OPTION_VAL_GAME_BOY_EO NULL
#define OPTION_VAL_SUPER_GAME_BOY_EO NULL
#define OPTION_VAL_GAME_BOY_COLOR_EO NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_EO NULL
#define MGBA_USE_BIOS_LABEL_EO NULL
#define MGBA_USE_BIOS_INFO_0_EO NULL
#define MGBA_SKIP_BIOS_LABEL_EO NULL
#define MGBA_SKIP_BIOS_INFO_0_EO NULL
#define MGBA_GB_COLORS_LABEL_EO NULL
#define MGBA_GB_COLORS_INFO_0_EO NULL
#define OPTION_VAL_GRAYSCALE_EO NULL
#define MGBA_GB_COLORS_PRESET_LABEL_EO NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_EO NULL
#define OPTION_VAL_0_EO NULL
#define OPTION_VAL_1_EO NULL
#define OPTION_VAL_2_EO NULL
#define OPTION_VAL_3_EO NULL
#define MGBA_SGB_BORDERS_LABEL_EO NULL
#define MGBA_SGB_BORDERS_INFO_0_EO NULL
#define MGBA_COLOR_CORRECTION_LABEL_EO NULL
#define MGBA_COLOR_CORRECTION_INFO_0_EO NULL
#define OPTION_VAL_AUTO_EO NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_EO NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_EO NULL
#define OPTION_VAL_MIX_EO NULL
#define OPTION_VAL_MIX_SMART_EO NULL
#define OPTION_VAL_LCD_GHOSTING_EO NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_EO NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_EO NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_EO NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_EO NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_EO NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_EO NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_EO NULL
#define OPTION_VAL_5_EO NULL
#define OPTION_VAL_10_EO NULL
#define OPTION_VAL_15_EO NULL
#define OPTION_VAL_20_EO NULL
#define OPTION_VAL_25_EO NULL
#define OPTION_VAL_30_EO NULL
#define OPTION_VAL_35_EO NULL
#define OPTION_VAL_40_EO NULL
#define OPTION_VAL_45_EO NULL
#define OPTION_VAL_50_EO NULL
#define OPTION_VAL_55_EO NULL
#define OPTION_VAL_60_EO NULL
#define OPTION_VAL_65_EO NULL
#define OPTION_VAL_70_EO NULL
#define OPTION_VAL_75_EO NULL
#define OPTION_VAL_80_EO NULL
#define OPTION_VAL_85_EO NULL
#define OPTION_VAL_90_EO NULL
#define OPTION_VAL_95_EO NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_EO NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_EO NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_EO NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_EO NULL
#define OPTION_VAL_SENSOR_EO NULL
#define MGBA_FORCE_GBP_LABEL_EO NULL
#define MGBA_FORCE_GBP_INFO_0_EO NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_EO NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_EO NULL
#define OPTION_VAL_REMOVE_KNOWN_EO NULL
#define OPTION_VAL_DETECT_AND_REMOVE_EO NULL
#define OPTION_VAL_DON_T_REMOVE_EO NULL
#define MGBA_FRAMESKIP_LABEL_EO NULL
#define MGBA_FRAMESKIP_INFO_0_EO NULL
#define OPTION_VAL_AUTO_THRESHOLD_EO NULL
#define OPTION_VAL_FIXED_INTERVAL_EO NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_EO NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_EO NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_EO NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_EO NULL

struct retro_core_option_v2_category option_cats_eo[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_EO,
      CATEGORY_SYSTEM_INFO_0_EO
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_EO,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_EO
#else
      CATEGORY_VIDEO_INFO_1_EO
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_EO,
      CATEGORY_AUDIO_INFO_0_EO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_EO,
      CATEGORY_INPUT_INFO_0_EO
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_EO,
      CATEGORY_PERFORMANCE_INFO_0_EO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_eo[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_EO,
      NULL,
      MGBA_GB_MODEL_INFO_0_EO,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_EO },
         { "Game Boy",         OPTION_VAL_GAME_BOY_EO },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_EO },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_EO },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_EO },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_EO,
      NULL,
      MGBA_USE_BIOS_INFO_0_EO,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_EO,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_EO,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_EO,
      NULL,
      MGBA_GB_COLORS_INFO_0_EO,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_EO },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_EO,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_EO,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_EO },
         { "1", OPTION_VAL_1_EO },
         { "2", OPTION_VAL_2_EO },
         { "3", OPTION_VAL_3_EO },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_EO,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_EO,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_EO,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_EO,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_EO },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_EO },
         { "Auto", OPTION_VAL_AUTO_EO },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_EO,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_EO,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_EO },
         { "mix_smart",         OPTION_VAL_MIX_SMART_EO },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_EO },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_EO },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_EO,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_EO,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_EO,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_EO,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_EO,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_EO,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_EO },
         { "10", OPTION_VAL_10_EO },
         { "15", OPTION_VAL_15_EO },
         { "20", OPTION_VAL_20_EO },
         { "25", OPTION_VAL_25_EO },
         { "30", OPTION_VAL_30_EO },
         { "35", OPTION_VAL_35_EO },
         { "40", OPTION_VAL_40_EO },
         { "45", OPTION_VAL_45_EO },
         { "50", OPTION_VAL_50_EO },
         { "55", OPTION_VAL_55_EO },
         { "60", OPTION_VAL_60_EO },
         { "65", OPTION_VAL_65_EO },
         { "70", OPTION_VAL_70_EO },
         { "75", OPTION_VAL_75_EO },
         { "80", OPTION_VAL_80_EO },
         { "85", OPTION_VAL_85_EO },
         { "90", OPTION_VAL_90_EO },
         { "95", OPTION_VAL_95_EO },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_EO,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_EO,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_EO,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_EO,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_EO },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_EO,
      NULL,
      MGBA_FORCE_GBP_INFO_0_EO,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_EO,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_EO,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_EO },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_EO },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_EO },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_EO,
      NULL,
      MGBA_FRAMESKIP_INFO_0_EO,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_EO },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_EO },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_EO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_EO,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_EO,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_EO,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_EO,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_eo = {
   option_cats_eo,
   option_defs_eo
};

/* RETRO_LANGUAGE_ES */

#define CATEGORY_SYSTEM_LABEL_ES "Sistema"
#define CATEGORY_SYSTEM_INFO_0_ES "Cambia los ajustes del hardware base y de la BIOS."
#define CATEGORY_VIDEO_LABEL_ES "Vídeo"
#define CATEGORY_VIDEO_INFO_0_ES "Cambia la paleta de los modelos DMG, los bordes de SGB, la corrección de color y los efectos de imagen fantasma («ghosting») de la pantalla LCD."
#define CATEGORY_VIDEO_INFO_1_ES "Cambia la paleta de los modelos DMG y los bordes de SGB."
#define CATEGORY_AUDIO_LABEL_ES NULL
#define CATEGORY_AUDIO_INFO_0_ES "Cambia los filtros de audio."
#define CATEGORY_INPUT_LABEL_ES "Entrada y dispositivos auxiliares"
#define CATEGORY_INPUT_INFO_0_ES "Cambia los ajustes de los mandos, de la entrada de los sensores y de la vibración."
#define CATEGORY_PERFORMANCE_LABEL_ES "Rendimiento"
#define CATEGORY_PERFORMANCE_INFO_0_ES "Cambia los ajustes de los bucles de inactividad y de la omisión de fotogramas."
#define MGBA_GB_MODEL_LABEL_ES "Modelo de Game Boy (es necesario reiniciar)"
#define MGBA_GB_MODEL_INFO_0_ES "Ejecuta el contenido cargado utilizando un modelo de Game Boy específico. La opción «Detección automática» seleccionará el modelo más adecuado para cada juego."
#define OPTION_VAL_AUTODETECT_ES "Detección automática"
#define OPTION_VAL_GAME_BOY_ES NULL
#define OPTION_VAL_SUPER_GAME_BOY_ES NULL
#define OPTION_VAL_GAME_BOY_COLOR_ES NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_ES NULL
#define MGBA_USE_BIOS_LABEL_ES "Utilizar BIOS en caso de encontrarla (es necesario reiniciar)"
#define MGBA_USE_BIOS_INFO_0_ES "Si se encuentran en el directorio de sistema de RetroArch, se utilizarán los archivos de la BIOS y el cargador de arranque oficiales para emular el hardware."
#define MGBA_SKIP_BIOS_LABEL_ES "Omitir introducción de la BIOS (es necesario reiniciar)"
#define MGBA_SKIP_BIOS_INFO_0_ES "Al utilizar una BIOS y un cargador de arranque oficiales, omitirá la animación del logotipo al arrancar. Esta opción será ignorada si «Utilizar BIOS en caso de encontrarla» está desactivada."
#define MGBA_GB_COLORS_LABEL_ES "Paleta predeterminada de Game Boy"
#define MGBA_GB_COLORS_INFO_0_ES "Selecciona la paleta que se utilizará con aquellos juegos de Game Boy que no sean compatibles con Game Boy Color/Super Game Boy o al forzar el modelo a Game Boy."
#define OPTION_VAL_GRAYSCALE_ES "Escala de grises"
#define MGBA_GB_COLORS_PRESET_LABEL_ES "Paletas del hardware de Game Boy (es necesario reiniciar)"
#define MGBA_GB_COLORS_PRESET_INFO_0_ES "Aplica paletas específicas a aquellos juegos de Game Boy para los que la Game Boy Color o el Super Game Boy tengan un preajuste asignado."
#define OPTION_VAL_0_ES "Preajuste predeterminado de Game Boy"
#define OPTION_VAL_1_ES "Solo preajustes de Game Boy Color"
#define OPTION_VAL_2_ES "Solo preajustes de Super Game Boy"
#define OPTION_VAL_3_ES "Usar cualquier preajuste disponible"
#define MGBA_SGB_BORDERS_LABEL_ES "Utilizar bordes de Super Game Boy (es necesario reiniciar)"
#define MGBA_SGB_BORDERS_INFO_0_ES "Muestra los bordes de Super Game Boy al ejecutar juegos compatibles con este sistema."
#define MGBA_COLOR_CORRECTION_LABEL_ES "Corrección de color"
#define MGBA_COLOR_CORRECTION_INFO_0_ES "Ajusta los colores de la salida de imagen para que esta coincida con la que mostraría un hardware real de GBA/GBC."
#define OPTION_VAL_AUTO_ES "Selección automática"
#define MGBA_INTERFRAME_BLENDING_LABEL_ES "Fusión entre fotogramas"
#define MGBA_INTERFRAME_BLENDING_INFO_0_ES "Simula el efecto de imagen fantasma («ghosting») de la pantalla LCD. «Sencilla» mezcla la mitad de los fotogramas anterior y siguiente. «Inteligente» intentará detectar parpadeos en la pantalla y solo hará una mezcla de mitades de fotogramas en los píxeles afectados. «Imagen fantasma de LCD» simula los tiempos de respuesta naturales de una pantalla LCD combinando varios fotogramas almacenados en el búfer. Las fusiones «Sencilla» o «Inteligente» son necesarias para aquellos juegos que necesiten este efecto para mostrar efectos de transparencias (Wave Race, Chikyuu Kaihou Gun ZAS, F-Zero, la saga Boktai...)."
#define OPTION_VAL_MIX_ES "Sencilla"
#define OPTION_VAL_MIX_SMART_ES "Inteligente"
#define OPTION_VAL_LCD_GHOSTING_ES "Imagen fantasma («ghosting») de LCD (preciso)"
#define OPTION_VAL_LCD_GHOSTING_FAST_ES "Imagen fantasma («ghosting») de LCD (rápido)"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_ES "Filtro de audio"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_ES "Filtro de paso bajo"
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_ES "Activa un filtro de paso bajo para reducir la estridencia del audio generado."
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_ES "Nivel del filtro de audio"
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_ES "Nivel del filtro"
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_ES "Especifica el corte de frecuencias en el filtro de paso bajo de audio. Un valor elevado aumentará la fuerza percibida del filtro, ya que se atenuará un rango mayor del espectro de frecuencias agudas."
#define OPTION_VAL_5_ES "5 %"
#define OPTION_VAL_10_ES "10 %"
#define OPTION_VAL_15_ES "15 %"
#define OPTION_VAL_20_ES "20 %"
#define OPTION_VAL_25_ES "25 %"
#define OPTION_VAL_30_ES "30 %"
#define OPTION_VAL_35_ES "35 %"
#define OPTION_VAL_40_ES "40 %"
#define OPTION_VAL_45_ES "45 %"
#define OPTION_VAL_50_ES "50 %"
#define OPTION_VAL_55_ES "55 %"
#define OPTION_VAL_60_ES "60 %"
#define OPTION_VAL_65_ES "65 %"
#define OPTION_VAL_70_ES "70 %"
#define OPTION_VAL_75_ES "75 %"
#define OPTION_VAL_80_ES "80 %"
#define OPTION_VAL_85_ES "85 %"
#define OPTION_VAL_90_ES "90 %"
#define OPTION_VAL_95_ES "95 %"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_ES "Permitir entradas direccionales opuestas"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_ES "Esta opción permitirá pulsar, alternar rápidamente o mantener las direcciones izquierda y derecha (o arriba y abajo) al mismo tiempo. Podría provocar fallos de movimiento."
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_ES "Nivel del sensor solar"
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_ES "Ajusta la intensidad de la luz solar ambiental. Para juegos que contenían un sensor solar en sus cartuchos, p. ej.: la saga Boktai."
#define OPTION_VAL_SENSOR_ES "Utilizar dispositivo sensor si está disponible"
#define MGBA_FORCE_GBP_LABEL_ES "Vibración de Game Boy Player (es necesario reiniciar)"
#define MGBA_FORCE_GBP_INFO_0_ES "Permite que los juegos compatibles con el logotipo de arranque de Game Boy Player hagan vibrar el mando. Debido al método que utilizó Nintendo, puede provocar fallos gráficos, como parpadeos o retrasos de señal en algunos de estos juegos."
#define MGBA_IDLE_OPTIMIZATION_LABEL_ES "Eliminar bucle de inactividad"
#define MGBA_IDLE_OPTIMIZATION_INFO_0_ES "Minimiza la carga del sistema optimizando los llamados bucles de inactividad: secciones de código en las que no ocurre nada, pero la CPU se ejecuta a máxima velocidad (como cuando un vehículo es revolucionado sin tener la marcha puesta). Mejora el rendimiento y debería activarse en hardware de bajas prestaciones."
#define OPTION_VAL_REMOVE_KNOWN_ES "Eliminar bucles conocidos"
#define OPTION_VAL_DETECT_AND_REMOVE_ES "Detectar y eliminar"
#define OPTION_VAL_DON_T_REMOVE_ES "No eliminar"
#define MGBA_FRAMESKIP_LABEL_ES "Omisión de fotogramas"
#define MGBA_FRAMESKIP_INFO_0_ES "Omite fotogramas para no saturar el búfer de audio (chasquidos en el sonido). Mejora el rendimiento a costa de perder fluidez visual. «Selección automática» omite fotogramas según lo aconseje el front-end. «Selección automática (umbral)» utiliza el valor configurado en Umbral de omisión de fotogramas (%). «Intervalos fijos» utiliza el ajuste Intervalo de omisión de fotogramas."
#define OPTION_VAL_AUTO_THRESHOLD_ES "Selección automática (umbral)"
#define OPTION_VAL_FIXED_INTERVAL_ES "Intervalos fijos"
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_ES "Umbral de omisión de fotogramas (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_ES "Cuando la omisión de fotogramas esté configurada como «Selección automática (umbral)», este ajuste especifica el umbral de ocupación del búfer de audio (en porcentaje) por el que se omitirán fotogramas si el valor es inferior. Un valor más elevado reduce el riesgo de chasquidos omitiendo fotogramas con una mayor frecuencia."
#define MGBA_FRAMESKIP_INTERVAL_LABEL_ES "Intervalo de omisión de fotogramas"
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_ES "Cuando la omisión de fotogramas esté configurada como «Intervalos fijos», el valor que se asigne aquí será el número de fotogramas omitidos una vez se haya renderizado un fotograma. Por ejemplo: «0» = 60 FPS, «1» = 30 FPS, «2» = 15 FPS, etcétera."

struct retro_core_option_v2_category option_cats_es[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_ES,
      CATEGORY_SYSTEM_INFO_0_ES
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_ES,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_ES
#else
      CATEGORY_VIDEO_INFO_1_ES
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_ES,
      CATEGORY_AUDIO_INFO_0_ES
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_ES,
      CATEGORY_INPUT_INFO_0_ES
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_ES,
      CATEGORY_PERFORMANCE_INFO_0_ES
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_es[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_ES,
      NULL,
      MGBA_GB_MODEL_INFO_0_ES,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_ES },
         { "Game Boy",         OPTION_VAL_GAME_BOY_ES },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_ES },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_ES },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_ES },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_ES,
      NULL,
      MGBA_USE_BIOS_INFO_0_ES,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_ES,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_ES,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_ES,
      NULL,
      MGBA_GB_COLORS_INFO_0_ES,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_ES },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_ES,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_ES,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_ES },
         { "1", OPTION_VAL_1_ES },
         { "2", OPTION_VAL_2_ES },
         { "3", OPTION_VAL_3_ES },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_ES,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_ES,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_ES,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_ES,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_ES },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_ES },
         { "Auto", OPTION_VAL_AUTO_ES },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_ES,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_ES,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_ES },
         { "mix_smart",         OPTION_VAL_MIX_SMART_ES },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_ES },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_ES },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_ES,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_ES,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_ES,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_ES,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_ES,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_ES,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_ES },
         { "10", OPTION_VAL_10_ES },
         { "15", OPTION_VAL_15_ES },
         { "20", OPTION_VAL_20_ES },
         { "25", OPTION_VAL_25_ES },
         { "30", OPTION_VAL_30_ES },
         { "35", OPTION_VAL_35_ES },
         { "40", OPTION_VAL_40_ES },
         { "45", OPTION_VAL_45_ES },
         { "50", OPTION_VAL_50_ES },
         { "55", OPTION_VAL_55_ES },
         { "60", OPTION_VAL_60_ES },
         { "65", OPTION_VAL_65_ES },
         { "70", OPTION_VAL_70_ES },
         { "75", OPTION_VAL_75_ES },
         { "80", OPTION_VAL_80_ES },
         { "85", OPTION_VAL_85_ES },
         { "90", OPTION_VAL_90_ES },
         { "95", OPTION_VAL_95_ES },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_ES,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_ES,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_ES,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_ES,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_ES },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_ES,
      NULL,
      MGBA_FORCE_GBP_INFO_0_ES,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_ES,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_ES,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_ES },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_ES },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_ES },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_ES,
      NULL,
      MGBA_FRAMESKIP_INFO_0_ES,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_ES },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_ES },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_ES },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_ES,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_ES,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_ES,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_ES,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_es = {
   option_cats_es,
   option_defs_es
};

/* RETRO_LANGUAGE_FA */

#define CATEGORY_SYSTEM_LABEL_FA "سیستم"
#define CATEGORY_SYSTEM_INFO_0_FA NULL
#define CATEGORY_VIDEO_LABEL_FA "ویدیو"
#define CATEGORY_VIDEO_INFO_0_FA NULL
#define CATEGORY_VIDEO_INFO_1_FA NULL
#define CATEGORY_AUDIO_LABEL_FA "صدا"
#define CATEGORY_AUDIO_INFO_0_FA NULL
#define CATEGORY_INPUT_LABEL_FA NULL
#define CATEGORY_INPUT_INFO_0_FA NULL
#define CATEGORY_PERFORMANCE_LABEL_FA "عملکرد"
#define CATEGORY_PERFORMANCE_INFO_0_FA NULL
#define MGBA_GB_MODEL_LABEL_FA NULL
#define MGBA_GB_MODEL_INFO_0_FA NULL
#define OPTION_VAL_AUTODETECT_FA NULL
#define OPTION_VAL_GAME_BOY_FA NULL
#define OPTION_VAL_SUPER_GAME_BOY_FA "سوپر گیم بوی"
#define OPTION_VAL_GAME_BOY_COLOR_FA NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_FA NULL
#define MGBA_USE_BIOS_LABEL_FA NULL
#define MGBA_USE_BIOS_INFO_0_FA NULL
#define MGBA_SKIP_BIOS_LABEL_FA NULL
#define MGBA_SKIP_BIOS_INFO_0_FA NULL
#define MGBA_GB_COLORS_LABEL_FA NULL
#define MGBA_GB_COLORS_INFO_0_FA NULL
#define OPTION_VAL_GRAYSCALE_FA NULL
#define MGBA_GB_COLORS_PRESET_LABEL_FA NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_FA NULL
#define OPTION_VAL_0_FA NULL
#define OPTION_VAL_1_FA NULL
#define OPTION_VAL_2_FA NULL
#define OPTION_VAL_3_FA NULL
#define MGBA_SGB_BORDERS_LABEL_FA NULL
#define MGBA_SGB_BORDERS_INFO_0_FA NULL
#define MGBA_COLOR_CORRECTION_LABEL_FA NULL
#define MGBA_COLOR_CORRECTION_INFO_0_FA NULL
#define OPTION_VAL_AUTO_FA "خودکار"
#define MGBA_INTERFRAME_BLENDING_LABEL_FA NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_FA NULL
#define OPTION_VAL_MIX_FA NULL
#define OPTION_VAL_MIX_SMART_FA NULL
#define OPTION_VAL_LCD_GHOSTING_FA NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_FA NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_FA "پالایهٔ صدا"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_FA NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_FA NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_FA NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_FA NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_FA "بسامد قطع پالایهٔ پایین‌گذر را مشخص می‌کند. افزایش مقدار باعث افزایش «قدرت» پالایه می‌شود چرا که دامنهٔ وسیع‌تری از بسامدهای بالای روی طیف تضعیف می‌شود."
#define OPTION_VAL_5_FA NULL
#define OPTION_VAL_10_FA NULL
#define OPTION_VAL_15_FA NULL
#define OPTION_VAL_20_FA NULL
#define OPTION_VAL_25_FA NULL
#define OPTION_VAL_30_FA NULL
#define OPTION_VAL_35_FA NULL
#define OPTION_VAL_40_FA NULL
#define OPTION_VAL_45_FA NULL
#define OPTION_VAL_50_FA NULL
#define OPTION_VAL_55_FA NULL
#define OPTION_VAL_60_FA NULL
#define OPTION_VAL_65_FA NULL
#define OPTION_VAL_70_FA NULL
#define OPTION_VAL_75_FA NULL
#define OPTION_VAL_80_FA NULL
#define OPTION_VAL_85_FA NULL
#define OPTION_VAL_90_FA NULL
#define OPTION_VAL_95_FA NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_FA NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_FA NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_FA NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_FA NULL
#define OPTION_VAL_SENSOR_FA NULL
#define MGBA_FORCE_GBP_LABEL_FA NULL
#define MGBA_FORCE_GBP_INFO_0_FA NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_FA NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_FA NULL
#define OPTION_VAL_REMOVE_KNOWN_FA NULL
#define OPTION_VAL_DETECT_AND_REMOVE_FA NULL
#define OPTION_VAL_DON_T_REMOVE_FA NULL
#define MGBA_FRAMESKIP_LABEL_FA "پرش فریم"
#define MGBA_FRAMESKIP_INFO_0_FA NULL
#define OPTION_VAL_AUTO_THRESHOLD_FA NULL
#define OPTION_VAL_FIXED_INTERVAL_FA NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_FA "آستانهٔ پرش فریم (٪)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_FA NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_FA NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_FA NULL

struct retro_core_option_v2_category option_cats_fa[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_FA,
      CATEGORY_SYSTEM_INFO_0_FA
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_FA,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_FA
#else
      CATEGORY_VIDEO_INFO_1_FA
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_FA,
      CATEGORY_AUDIO_INFO_0_FA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FA,
      CATEGORY_INPUT_INFO_0_FA
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_FA,
      CATEGORY_PERFORMANCE_INFO_0_FA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fa[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_FA,
      NULL,
      MGBA_GB_MODEL_INFO_0_FA,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_FA },
         { "Game Boy",         OPTION_VAL_GAME_BOY_FA },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_FA },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_FA },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_FA },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_FA,
      NULL,
      MGBA_USE_BIOS_INFO_0_FA,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_FA,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_FA,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_FA,
      NULL,
      MGBA_GB_COLORS_INFO_0_FA,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_FA },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_FA,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_FA,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_FA },
         { "1", OPTION_VAL_1_FA },
         { "2", OPTION_VAL_2_FA },
         { "3", OPTION_VAL_3_FA },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_FA,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_FA,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_FA,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_FA,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_FA },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_FA },
         { "Auto", OPTION_VAL_AUTO_FA },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_FA,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_FA,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_FA },
         { "mix_smart",         OPTION_VAL_MIX_SMART_FA },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_FA },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_FA },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_FA,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_FA,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_FA,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_FA,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_FA,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_FA,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_FA },
         { "10", OPTION_VAL_10_FA },
         { "15", OPTION_VAL_15_FA },
         { "20", OPTION_VAL_20_FA },
         { "25", OPTION_VAL_25_FA },
         { "30", OPTION_VAL_30_FA },
         { "35", OPTION_VAL_35_FA },
         { "40", OPTION_VAL_40_FA },
         { "45", OPTION_VAL_45_FA },
         { "50", OPTION_VAL_50_FA },
         { "55", OPTION_VAL_55_FA },
         { "60", OPTION_VAL_60_FA },
         { "65", OPTION_VAL_65_FA },
         { "70", OPTION_VAL_70_FA },
         { "75", OPTION_VAL_75_FA },
         { "80", OPTION_VAL_80_FA },
         { "85", OPTION_VAL_85_FA },
         { "90", OPTION_VAL_90_FA },
         { "95", OPTION_VAL_95_FA },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_FA,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_FA,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_FA,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_FA,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_FA },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_FA,
      NULL,
      MGBA_FORCE_GBP_INFO_0_FA,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_FA,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_FA,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_FA },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_FA },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_FA },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_FA,
      NULL,
      MGBA_FRAMESKIP_INFO_0_FA,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_FA },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_FA },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_FA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_FA,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_FA,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_FA,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_FA,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fa = {
   option_cats_fa,
   option_defs_fa
};

/* RETRO_LANGUAGE_FI */

#define CATEGORY_SYSTEM_LABEL_FI "Järjestelmä"
#define CATEGORY_SYSTEM_INFO_0_FI "Määritä peruslaitteiston valinta / BIOS-parametrit."
#define CATEGORY_VIDEO_LABEL_FI NULL
#define CATEGORY_VIDEO_INFO_0_FI "Määritä DMG paletti / SGB rajat / väri korjaus / LCD ghosting-efektit."
#define CATEGORY_VIDEO_INFO_1_FI "Määritä DMG paletti / SGB rajat."
#define CATEGORY_AUDIO_LABEL_FI "Ääni"
#define CATEGORY_AUDIO_INFO_0_FI "Määritä äänen suodatus."
#define CATEGORY_INPUT_LABEL_FI "Syöte- ja lisälaitteet"
#define CATEGORY_INPUT_INFO_0_FI "Määritä ohjaimen / anturin syötteen ja tärinän asetukset."
#define CATEGORY_PERFORMANCE_LABEL_FI "Suorituskyky"
#define CATEGORY_PERFORMANCE_INFO_0_FI "Määritä joutosilmukan poisto / kuvanohitus parametrit."
#define MGBA_GB_MODEL_LABEL_FI "Game Boy malli (Uudelleenkäynnistys)"
#define MGBA_GB_MODEL_INFO_0_FI "Suorittaa ladattua sisältöä tietyllä Game Boy -mallilla. 'Havaitse automaattisesti' valitsee sopivimman mallin nykyiselle pelille."
#define OPTION_VAL_AUTODETECT_FI "Havaitse automaattisesti"
#define OPTION_VAL_GAME_BOY_FI NULL
#define OPTION_VAL_SUPER_GAME_BOY_FI NULL
#define OPTION_VAL_GAME_BOY_COLOR_FI NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_FI NULL
#define MGBA_USE_BIOS_LABEL_FI "Käytä BIOS-tiedostoa, mikäli se on läsnä (Uudelleenkäynnistys)"
#define MGBA_USE_BIOS_INFO_0_FI "Käytä virallista BIOS/bootloader -ohjelmaa emuloidulle laitteelle, mikäli ne löytyvät RetroArchin järjestelmäkansiosta."
#define MGBA_SKIP_BIOS_LABEL_FI "Ohita BIOS-alkulataus (Uudelleenkäynnistys)"
#define MGBA_SKIP_BIOS_INFO_0_FI "Kun käytät virallista BIOS/bootloaderia, jätä käynnistyslogo-animaatio väliin. Tämä asetus ohitetaan, kun 'Käytä BIOS-tiedostoa, mikäli se on läsnä\" on pois päältä."
#define MGBA_GB_COLORS_LABEL_FI "Game Boy:n oletus paletti"
#define MGBA_GB_COLORS_INFO_0_FI "Valitsee mitä palettia käytetään Game Boy peleillä, jotka eivät ole Game Boy Color tai Super Game Boy yhteensopivia, tai jos malliksi on pakotettu Game Boy."
#define OPTION_VAL_GRAYSCALE_FI "Harmaasävy"
#define MGBA_GB_COLORS_PRESET_LABEL_FI "Game Boy laitteiston esiasetetut paletit (Uudelleenkäynnistys)"
#define MGBA_GB_COLORS_PRESET_INFO_0_FI "Käytä Game Boy peleillä paletteja, joilla on esiasetukset Game Boy Color:illa tai Super Game Boy:lla."
#define OPTION_VAL_0_FI "Oletus Game Boy esiasetus"
#define OPTION_VAL_1_FI "Vain Game Boy Color esiasetukset"
#define OPTION_VAL_2_FI "Vain Super Game Boy esiasetukset"
#define OPTION_VAL_3_FI "Kaikki käytettävissä olevat esiasetukset"
#define MGBA_SGB_BORDERS_LABEL_FI "Käytä Super Game Boy -kehyksiä (Uudelleenkäynnistys)"
#define MGBA_SGB_BORDERS_INFO_0_FI "Näytä Super Game Boy kehykset, kun ajetaan Super Game Boy tehostettuja pelejä."
#define MGBA_COLOR_CORRECTION_LABEL_FI "Värinkorjaus"
#define MGBA_COLOR_CORRECTION_INFO_0_FI "Säätää ulostulon värejä vastaamaan todellisen GBA/GBC-laitteen näyttöä."
#define OPTION_VAL_AUTO_FI "Automaattinen"
#define MGBA_INTERFRAME_BLENDING_LABEL_FI "Rajakuvien yhdistäminen"
#define MGBA_INTERFRAME_BLENDING_INFO_0_FI "Simuloi LCD-näytön \"ghosting\"-efektiä. \"Yksinkertainen\" suorittaa 50:50 sekoituksen nykyisistä ja aikaisemmista kuvista. \"Älykäs\" yrittää havaita näytön välkkymistä, ja suorittaa 50:50 miksausta vain vaikuttuneissa pikseleissä. \"LCD-ghosting\" jäljittelee luonnollisia LCD-vasteaikoja yhdistämällä useita puskuroituja kuvia. \"Yksinkertainen\" tai \"Älykäs\" yhdistäminen on tarpeen, kun pelaat pelejä, jotka hyödyntävät vahvasti LCD-ghostingia läpinäkyvyys tehosteisiin (Wave Race, Chikyuu Kaihou Gun ZAS, F-Zero, Boktai sarja...)."
#define OPTION_VAL_MIX_FI "Yksinkertainen"
#define OPTION_VAL_MIX_SMART_FI "Älykäs"
#define OPTION_VAL_LCD_GHOSTING_FI "LCD-ghosting (Tarkka)"
#define OPTION_VAL_LCD_GHOSTING_FAST_FI "LCD-ghosting (Nopea)"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_FI "Äänisuodatin"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_FI "Alipäästösuodatin"
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_FI "Ota käyttöön alipäästösuodatin vähentääksesi luodun äänen \"karkeutta\"."
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_FI "Äänen suodatuksen taso"
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_FI "Suodatustaso"
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_FI "Määritä alipäästösuodattimen katkaisu taajuus. Korkeampi arvo nostaa suodattimen \"vahvuutta\", koska suurempi osuus korkeamman taajuuden spektristä on vaimennettu."
#define OPTION_VAL_5_FI "5 %"
#define OPTION_VAL_10_FI "10 %"
#define OPTION_VAL_15_FI "15 %"
#define OPTION_VAL_20_FI "20 %"
#define OPTION_VAL_25_FI "25 %"
#define OPTION_VAL_30_FI "30 %"
#define OPTION_VAL_35_FI "35 %"
#define OPTION_VAL_40_FI "40 %"
#define OPTION_VAL_45_FI "45 %"
#define OPTION_VAL_50_FI "50 %"
#define OPTION_VAL_55_FI "55 %"
#define OPTION_VAL_60_FI "60 %"
#define OPTION_VAL_65_FI "65 %"
#define OPTION_VAL_70_FI "70 %"
#define OPTION_VAL_75_FI "75 %"
#define OPTION_VAL_80_FI "80 %"
#define OPTION_VAL_85_FI "85 %"
#define OPTION_VAL_90_FI "90 %"
#define OPTION_VAL_95_FI "95 %"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_FI "Salli vastakkaisten suuntien syöte"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_FI "Tämän käyttöönotto sallii painamaan / nopeasti vaihtelemaan / pitämään sekä vasemmalle että oikealle (tai ylös ja alas) samanaikaisesti. Tämä voi aiheuttaa liikkeisiin perustuvia virheitä."
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_FI "Aurinkoanturin taso"
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_FI "Asettaa ympäristön auringonvalon voimakkuuden. Voidaan käyttää peleissä, jotka sisälsivät aurinkoanturin kaseteissaan, esim. Boktai-sarjassa."
#define OPTION_VAL_SENSOR_FI "Käytä laitteen anturia, mikäli saatavana"
#define MGBA_FORCE_GBP_LABEL_FI "Game Boy Player tärinä (Uudelleenkäynnistys)"
#define MGBA_FORCE_GBP_INFO_0_FI "Tämän käyttöönotto mahdollistaa Game Boy Player:in kanssa yhteensopivien pelien käyttää tärinää. Siitä miten Nintendo päätti tämän ominaisuuden pitäisi toimia, se saattaa aiheuttaa virheitä, kuten vilkkumista tai viivettä joissakin näistä peleistä."
#define MGBA_IDLE_OPTIMIZATION_LABEL_FI "Joutosilmukan poisto"
#define MGBA_IDLE_OPTIMIZATION_INFO_0_FI "Vähentää järjestelmän kuormitusta optimoimalla niin kutsuttuja \"joutosilmukkoja\" - osioita koodissa, jossa mitään ei tapahdu, mutta prosessori toimii täydellä nopeudella (kuten auto kaasuttelee vapaalla). Parantaa suorituskykyä, ja pitäisi ottaa käyttöön heikkotehoisissa laitteissa."
#define OPTION_VAL_REMOVE_KNOWN_FI "Poista tunnetut"
#define OPTION_VAL_DETECT_AND_REMOVE_FI "Tunnista ja poista"
#define OPTION_VAL_DON_T_REMOVE_FI "Älä poista"
#define MGBA_FRAMESKIP_LABEL_FI "Kuvanohitus"
#define MGBA_FRAMESKIP_INFO_0_FI "Ohita kuvia välttääksesi äänipuskurin alle ajon (säröily). Parantaa suorituskykyä visuaalisen tasaisuuden kustannuksella. \"Automaatiinen\" ohittaa kuvat käyttöliittymän ohjeistuksen mukaan. \"Automaattinen (Kynnysarvo)\" käyttää \"Kuvienohituksen arvo (%)\"-asetusta. \"Kiinteä aikaväli\" käyttää \"Kiinteä aikaväli\"-asetusta."
#define OPTION_VAL_AUTO_THRESHOLD_FI "Automaattinen (Kynnysarvo)"
#define OPTION_VAL_FIXED_INTERVAL_FI "Kiinteä aikaväli"
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_FI "Kuvienohituksen arvo (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_FI "Kun \"Kuvanohitus\" on asetettu \"Automaattinen (Kynnysarvo)\", määrittää äänipuskurin kynnysarvo (prosentteina), jonka alapuolella kuvat ohitetaan. Korkeammat arvot vähentävät säröilyn riskiä siten, että kuvia poistetaan useammin."
#define MGBA_FRAMESKIP_INTERVAL_LABEL_FI "Kuvienohituksen aikaväli"
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_FI "Kun \"Kuvanohitus\" on asetettu \"Kiinteä aikaväli\", tässä asetettu arvo on ruutujen lukumäärä, jotka jätetään pois kehyksen renderöinnin jälkeen, esim. \"0\" = 60fps, \"1\" = 30fps, \"2\" = 15fps jne."

struct retro_core_option_v2_category option_cats_fi[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_FI,
      CATEGORY_SYSTEM_INFO_0_FI
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_FI,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_FI
#else
      CATEGORY_VIDEO_INFO_1_FI
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_FI,
      CATEGORY_AUDIO_INFO_0_FI
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FI,
      CATEGORY_INPUT_INFO_0_FI
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_FI,
      CATEGORY_PERFORMANCE_INFO_0_FI
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fi[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_FI,
      NULL,
      MGBA_GB_MODEL_INFO_0_FI,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_FI },
         { "Game Boy",         OPTION_VAL_GAME_BOY_FI },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_FI },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_FI },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_FI },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_FI,
      NULL,
      MGBA_USE_BIOS_INFO_0_FI,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_FI,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_FI,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_FI,
      NULL,
      MGBA_GB_COLORS_INFO_0_FI,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_FI },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_FI,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_FI,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_FI },
         { "1", OPTION_VAL_1_FI },
         { "2", OPTION_VAL_2_FI },
         { "3", OPTION_VAL_3_FI },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_FI,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_FI,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_FI,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_FI,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_FI },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_FI },
         { "Auto", OPTION_VAL_AUTO_FI },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_FI,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_FI,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_FI },
         { "mix_smart",         OPTION_VAL_MIX_SMART_FI },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_FI },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_FI },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_FI,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_FI,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_FI,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_FI,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_FI,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_FI,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_FI },
         { "10", OPTION_VAL_10_FI },
         { "15", OPTION_VAL_15_FI },
         { "20", OPTION_VAL_20_FI },
         { "25", OPTION_VAL_25_FI },
         { "30", OPTION_VAL_30_FI },
         { "35", OPTION_VAL_35_FI },
         { "40", OPTION_VAL_40_FI },
         { "45", OPTION_VAL_45_FI },
         { "50", OPTION_VAL_50_FI },
         { "55", OPTION_VAL_55_FI },
         { "60", OPTION_VAL_60_FI },
         { "65", OPTION_VAL_65_FI },
         { "70", OPTION_VAL_70_FI },
         { "75", OPTION_VAL_75_FI },
         { "80", OPTION_VAL_80_FI },
         { "85", OPTION_VAL_85_FI },
         { "90", OPTION_VAL_90_FI },
         { "95", OPTION_VAL_95_FI },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_FI,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_FI,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_FI,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_FI,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_FI },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_FI,
      NULL,
      MGBA_FORCE_GBP_INFO_0_FI,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_FI,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_FI,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_FI },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_FI },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_FI },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_FI,
      NULL,
      MGBA_FRAMESKIP_INFO_0_FI,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_FI },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_FI },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_FI },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_FI,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_FI,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_FI,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_FI,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fi = {
   option_cats_fi,
   option_defs_fi
};

/* RETRO_LANGUAGE_FR */

#define CATEGORY_SYSTEM_LABEL_FR "Système"
#define CATEGORY_SYSTEM_INFO_0_FR "Configurer les paramètres de la sélection du matériel de base/du BIOS."
#define CATEGORY_VIDEO_LABEL_FR "Vidéo"
#define CATEGORY_VIDEO_INFO_0_FR "Configurer la palette DMG/les bordures SGB/la correction des couleurs/les effets de rémanence LCD."
#define CATEGORY_VIDEO_INFO_1_FR "Configurer la palette DMG/les bordures SGB."
#define CATEGORY_AUDIO_LABEL_FR NULL
#define CATEGORY_AUDIO_INFO_0_FR "Configurer le filtrage audio."
#define CATEGORY_INPUT_LABEL_FR "Périphériques d'entrées & auxiliaires"
#define CATEGORY_INPUT_INFO_0_FR "Configurer les réglages d'entrées manettes/capteurs et de vibration."
#define CATEGORY_PERFORMANCE_LABEL_FR "Performances"
#define CATEGORY_PERFORMANCE_INFO_0_FR "Configurer les réglages de suppression de boucle inactive/de saut d'images."
#define MGBA_GB_MODEL_LABEL_FR "Modèle de Game Boy (Redémarrage requis)"
#define MGBA_GB_MODEL_INFO_0_FR "Exécute du contenu chargé avec un modèle de Game Boy émulée spécifique. 'Détection automatique' sélectionnera le modèle le plus approprié pour le jeu en cours."
#define OPTION_VAL_AUTODETECT_FR "Détection automatique"
#define OPTION_VAL_GAME_BOY_FR NULL
#define OPTION_VAL_SUPER_GAME_BOY_FR NULL
#define OPTION_VAL_GAME_BOY_COLOR_FR NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_FR NULL
#define MGBA_USE_BIOS_LABEL_FR "Utiliser le fichier BIOS si trouvé (Redémarrage requis)"
#define MGBA_USE_BIOS_INFO_0_FR "Utiliser le BIOS/bootloader officiel pour le matériel émulé, s'il est présent dans le dossier system de RetroArch."
#define MGBA_SKIP_BIOS_LABEL_FR "Ignorer l'intro du BIOS (Redémarrage requis)"
#define MGBA_SKIP_BIOS_INFO_0_FR "Lors de l'utilisation d'un BIOS/bootloader officiel, sauter l'animation du logo de démarrage. Ce réglage est ignoré lorsque l'option 'Utiliser le fichier BIOS si trouvé' est désactivée."
#define MGBA_GB_COLORS_LABEL_FR "Palette Game Boy par défaut"
#define MGBA_GB_COLORS_INFO_0_FR "Sélectionne quelle palette est utilisée pour les jeux de Game Boy qui ne sont pas compatibles Game Boy Color ou Super Game Boy, ou si le modèle est forcé sur Game Boy."
#define OPTION_VAL_GRAYSCALE_FR "Niveaux de gris"
#define MGBA_GB_COLORS_PRESET_LABEL_FR "Palettes de Game Boy prédéfinies par le matériel (Redémarrage requis)"
#define MGBA_GB_COLORS_PRESET_INFO_0_FR "Utiliser les palettes pour les jeux de Game Boy qui ont des préréglages sur la Game Boy Color ou le Super Game Boy."
#define OPTION_VAL_0_FR "Préréglage Game Boy par défaut"
#define OPTION_VAL_1_FR "Préréglages de Game Boy Color uniquement"
#define OPTION_VAL_2_FR "Préréglages de Super Game Boy uniquement"
#define OPTION_VAL_3_FR "Tous les préréglages disponibles"
#define MGBA_SGB_BORDERS_LABEL_FR "Utiliser les bordures de Super Game Boy (Redémarrage requis)"
#define MGBA_SGB_BORDERS_INFO_0_FR "Afficher les bordures Super Game Boy lors de l'exécution de jeux améliorés pour le Super Game Boy."
#define MGBA_COLOR_CORRECTION_LABEL_FR "Correction colorimétrique"
#define MGBA_COLOR_CORRECTION_INFO_0_FR "Ajuste les couleurs de sortie pour correspondre à l'écran du matériel GBA/GBC réel."
#define OPTION_VAL_AUTO_FR NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_FR "Mélange d'inter-trames"
#define MGBA_INTERFRAME_BLENDING_INFO_0_FR "Simule les effets de rémanence LCD, 'Simple' effectue un mélange à 50/50 des images actuelles et précédentes. 'Intelligent' tente de détecter le scintillement de l'écran, et n'effectue un mélange à 50/50 que sur les pixels affectés. 'Rémanence LCD' imite le temps de réponse naturel du LCD en combinant plusieurs images mises en mémoire tampon. Un mélange 'Simple' ou 'Intelligent' est nécessaire lorsque vous jouez à des jeux qui exploitent agressivement la rémanence LCD pour des effets de transparence (Wave Race, Chikyuu Kaihou Gun ZAS, F-Zero, la série Boktai...)."
#define OPTION_VAL_MIX_FR NULL
#define OPTION_VAL_MIX_SMART_FR "Intelligent"
#define OPTION_VAL_LCD_GHOSTING_FR "Rémanence LCD (réaliste)"
#define OPTION_VAL_LCD_GHOSTING_FAST_FR "Rémanence LCD (rapide)"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_FR "Filtre audio"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_FR "Filtre passe-bas"
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_FR "Active un filtre audio passe-bas pour réduire la 'dureté' de l'audio généré."
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_FR "Niveau du filtre audio"
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_FR "Niveau du filtre"
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_FR "Spécifie la fréquence de coupure du filtre passe-bas audio. Une valeur plus élevée accroît la 'force' perçue du filtre, car une gamme plus large du spectre des hautes fréquences est atténuée."
#define OPTION_VAL_5_FR NULL
#define OPTION_VAL_10_FR NULL
#define OPTION_VAL_15_FR NULL
#define OPTION_VAL_20_FR NULL
#define OPTION_VAL_25_FR NULL
#define OPTION_VAL_30_FR NULL
#define OPTION_VAL_35_FR NULL
#define OPTION_VAL_40_FR NULL
#define OPTION_VAL_45_FR NULL
#define OPTION_VAL_50_FR NULL
#define OPTION_VAL_55_FR NULL
#define OPTION_VAL_60_FR NULL
#define OPTION_VAL_65_FR NULL
#define OPTION_VAL_70_FR NULL
#define OPTION_VAL_75_FR NULL
#define OPTION_VAL_80_FR NULL
#define OPTION_VAL_85_FR NULL
#define OPTION_VAL_90_FR NULL
#define OPTION_VAL_95_FR NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_FR "Autoriser les entrées directionnelles opposées"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_FR "L'activation de cette option permettra d'appuyer/d'alterner rapidement/de maintenir les directions gauche et droite (ou haut et bas) en même temps. Cela peut causer des bugs liés au mouvement."
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_FR "Niveau du capteur solaire"
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_FR "Définit l'intensité ambiante de la lumière du soleil. Peut être utilisée par des jeux qui incluaient un capteur solaire dans leurs cartouches, par exemple : la série Boktai."
#define OPTION_VAL_SENSOR_FR "Utiliser le capteur de l'appareil si disponible"
#define MGBA_FORCE_GBP_LABEL_FR "Vibration du Game Boy Player (Redémarrage requis)"
#define MGBA_FORCE_GBP_INFO_0_FR "Activer cette option permettra aux jeux compatibles avec le logo de démarrage du Game Boy Player de faire vibrer la manette. En raison de la façon dont Nintendo a décidé que cette fonctionnalité devrait marcher, cela peut causer des bugs tels que scintillement ou latence dans certains de ces jeux."
#define MGBA_IDLE_OPTIMIZATION_LABEL_FR "Suppression de la boucle inactive"
#define MGBA_IDLE_OPTIMIZATION_INFO_0_FR "Réduire la charge du système en optimisant ce que l'on appelle les 'boucles inactives' — sections dans le code où rien ne se passe, mais où le processeur fonctionne à pleine vitesse (comme une voiture révoquée en neutre). Améliore les performances et devrait être activé sur du matériel de bas de gamme."
#define OPTION_VAL_REMOVE_KNOWN_FR "Supprimer celles connues"
#define OPTION_VAL_DETECT_AND_REMOVE_FR "Détecter et supprimer"
#define OPTION_VAL_DON_T_REMOVE_FR "Ne pas supprimer"
#define MGBA_FRAMESKIP_LABEL_FR "Saut d'images"
#define MGBA_FRAMESKIP_INFO_0_FR "Sauter des images pour éviter que le tampon audio ne soit sous-exécuté (crépitements). Améliore les performances au détriment de la fluidité visuelle. 'Auto' saute des images lorsque l'interface le conseille. 'Auto (seuil)' utilise le paramètre 'Seuil de saut d'images (%)'. 'Intervalle fixe' utilise le paramètre 'Intervalle de saut d'images'."
#define OPTION_VAL_AUTO_THRESHOLD_FR "Auto (seuil)"
#define OPTION_VAL_FIXED_INTERVAL_FR "Intervalle fixe"
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_FR "Seuil de saut d'images (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_FR "Lorsque 'Saut d'images' est réglé sur 'Auto (seuil)', spécifie le seuil d'occupation du tampon audio (pourcentage) en dessous duquel des images seront sautées. Des valeurs plus élevées réduisent le risque de crépitements en faisant sauter des images plus fréquemment."
#define MGBA_FRAMESKIP_INTERVAL_LABEL_FR "Intervalle de saut d'images"
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_FR "Lorsque 'Saut d'images' est défini sur 'Intervalle fixe', la valeur définie ici est le nombre d'images omises après le rendu d'une image - par exemple '0' = 60i/s, '1' = 30i/s, '2' = 15i/s, etc."

struct retro_core_option_v2_category option_cats_fr[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_FR,
      CATEGORY_SYSTEM_INFO_0_FR
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_FR,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_FR
#else
      CATEGORY_VIDEO_INFO_1_FR
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_FR,
      CATEGORY_AUDIO_INFO_0_FR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FR,
      CATEGORY_INPUT_INFO_0_FR
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_FR,
      CATEGORY_PERFORMANCE_INFO_0_FR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fr[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_FR,
      NULL,
      MGBA_GB_MODEL_INFO_0_FR,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_FR },
         { "Game Boy",         OPTION_VAL_GAME_BOY_FR },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_FR },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_FR },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_FR },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_FR,
      NULL,
      MGBA_USE_BIOS_INFO_0_FR,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_FR,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_FR,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_FR,
      NULL,
      MGBA_GB_COLORS_INFO_0_FR,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_FR },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_FR,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_FR,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_FR },
         { "1", OPTION_VAL_1_FR },
         { "2", OPTION_VAL_2_FR },
         { "3", OPTION_VAL_3_FR },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_FR,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_FR,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_FR,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_FR,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_FR },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_FR },
         { "Auto", OPTION_VAL_AUTO_FR },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_FR,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_FR,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_FR },
         { "mix_smart",         OPTION_VAL_MIX_SMART_FR },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_FR },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_FR },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_FR,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_FR,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_FR,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_FR,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_FR,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_FR,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_FR },
         { "10", OPTION_VAL_10_FR },
         { "15", OPTION_VAL_15_FR },
         { "20", OPTION_VAL_20_FR },
         { "25", OPTION_VAL_25_FR },
         { "30", OPTION_VAL_30_FR },
         { "35", OPTION_VAL_35_FR },
         { "40", OPTION_VAL_40_FR },
         { "45", OPTION_VAL_45_FR },
         { "50", OPTION_VAL_50_FR },
         { "55", OPTION_VAL_55_FR },
         { "60", OPTION_VAL_60_FR },
         { "65", OPTION_VAL_65_FR },
         { "70", OPTION_VAL_70_FR },
         { "75", OPTION_VAL_75_FR },
         { "80", OPTION_VAL_80_FR },
         { "85", OPTION_VAL_85_FR },
         { "90", OPTION_VAL_90_FR },
         { "95", OPTION_VAL_95_FR },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_FR,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_FR,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_FR,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_FR,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_FR },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_FR,
      NULL,
      MGBA_FORCE_GBP_INFO_0_FR,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_FR,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_FR,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_FR },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_FR },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_FR },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_FR,
      NULL,
      MGBA_FRAMESKIP_INFO_0_FR,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_FR },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_FR },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_FR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_FR,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_FR,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_FR,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_FR,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fr = {
   option_cats_fr,
   option_defs_fr
};

/* RETRO_LANGUAGE_GL */

#define CATEGORY_SYSTEM_LABEL_GL NULL
#define CATEGORY_SYSTEM_INFO_0_GL NULL
#define CATEGORY_VIDEO_LABEL_GL "Vídeo"
#define CATEGORY_VIDEO_INFO_0_GL NULL
#define CATEGORY_VIDEO_INFO_1_GL NULL
#define CATEGORY_AUDIO_LABEL_GL "Son"
#define CATEGORY_AUDIO_INFO_0_GL NULL
#define CATEGORY_INPUT_LABEL_GL NULL
#define CATEGORY_INPUT_INFO_0_GL NULL
#define CATEGORY_PERFORMANCE_LABEL_GL NULL
#define CATEGORY_PERFORMANCE_INFO_0_GL NULL
#define MGBA_GB_MODEL_LABEL_GL NULL
#define MGBA_GB_MODEL_INFO_0_GL NULL
#define OPTION_VAL_AUTODETECT_GL NULL
#define OPTION_VAL_GAME_BOY_GL NULL
#define OPTION_VAL_SUPER_GAME_BOY_GL NULL
#define OPTION_VAL_GAME_BOY_COLOR_GL NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_GL NULL
#define MGBA_USE_BIOS_LABEL_GL NULL
#define MGBA_USE_BIOS_INFO_0_GL NULL
#define MGBA_SKIP_BIOS_LABEL_GL NULL
#define MGBA_SKIP_BIOS_INFO_0_GL NULL
#define MGBA_GB_COLORS_LABEL_GL NULL
#define MGBA_GB_COLORS_INFO_0_GL NULL
#define OPTION_VAL_GRAYSCALE_GL NULL
#define MGBA_GB_COLORS_PRESET_LABEL_GL NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_GL NULL
#define OPTION_VAL_0_GL NULL
#define OPTION_VAL_1_GL NULL
#define OPTION_VAL_2_GL NULL
#define OPTION_VAL_3_GL NULL
#define MGBA_SGB_BORDERS_LABEL_GL NULL
#define MGBA_SGB_BORDERS_INFO_0_GL NULL
#define MGBA_COLOR_CORRECTION_LABEL_GL NULL
#define MGBA_COLOR_CORRECTION_INFO_0_GL NULL
#define OPTION_VAL_AUTO_GL NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_GL NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_GL NULL
#define OPTION_VAL_MIX_GL NULL
#define OPTION_VAL_MIX_SMART_GL NULL
#define OPTION_VAL_LCD_GHOSTING_GL NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_GL NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_GL NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_GL NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_GL NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_GL NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_GL NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_GL NULL
#define OPTION_VAL_5_GL NULL
#define OPTION_VAL_10_GL NULL
#define OPTION_VAL_15_GL NULL
#define OPTION_VAL_20_GL NULL
#define OPTION_VAL_25_GL NULL
#define OPTION_VAL_30_GL NULL
#define OPTION_VAL_35_GL NULL
#define OPTION_VAL_40_GL NULL
#define OPTION_VAL_45_GL NULL
#define OPTION_VAL_50_GL NULL
#define OPTION_VAL_55_GL NULL
#define OPTION_VAL_60_GL NULL
#define OPTION_VAL_65_GL NULL
#define OPTION_VAL_70_GL NULL
#define OPTION_VAL_75_GL NULL
#define OPTION_VAL_80_GL NULL
#define OPTION_VAL_85_GL NULL
#define OPTION_VAL_90_GL NULL
#define OPTION_VAL_95_GL NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_GL NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_GL NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_GL NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_GL NULL
#define OPTION_VAL_SENSOR_GL NULL
#define MGBA_FORCE_GBP_LABEL_GL NULL
#define MGBA_FORCE_GBP_INFO_0_GL NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_GL NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_GL NULL
#define OPTION_VAL_REMOVE_KNOWN_GL NULL
#define OPTION_VAL_DETECT_AND_REMOVE_GL NULL
#define OPTION_VAL_DON_T_REMOVE_GL NULL
#define MGBA_FRAMESKIP_LABEL_GL NULL
#define MGBA_FRAMESKIP_INFO_0_GL NULL
#define OPTION_VAL_AUTO_THRESHOLD_GL NULL
#define OPTION_VAL_FIXED_INTERVAL_GL NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_GL NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_GL NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_GL NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_GL NULL

struct retro_core_option_v2_category option_cats_gl[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_GL,
      CATEGORY_SYSTEM_INFO_0_GL
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_GL,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_GL
#else
      CATEGORY_VIDEO_INFO_1_GL
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_GL,
      CATEGORY_AUDIO_INFO_0_GL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_GL,
      CATEGORY_INPUT_INFO_0_GL
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_GL,
      CATEGORY_PERFORMANCE_INFO_0_GL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_gl[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_GL,
      NULL,
      MGBA_GB_MODEL_INFO_0_GL,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_GL },
         { "Game Boy",         OPTION_VAL_GAME_BOY_GL },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_GL },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_GL },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_GL },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_GL,
      NULL,
      MGBA_USE_BIOS_INFO_0_GL,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_GL,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_GL,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_GL,
      NULL,
      MGBA_GB_COLORS_INFO_0_GL,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_GL },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_GL,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_GL,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_GL },
         { "1", OPTION_VAL_1_GL },
         { "2", OPTION_VAL_2_GL },
         { "3", OPTION_VAL_3_GL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_GL,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_GL,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_GL,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_GL,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_GL },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_GL },
         { "Auto", OPTION_VAL_AUTO_GL },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_GL,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_GL,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_GL },
         { "mix_smart",         OPTION_VAL_MIX_SMART_GL },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_GL },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_GL },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_GL,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_GL,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_GL,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_GL,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_GL,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_GL,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_GL },
         { "10", OPTION_VAL_10_GL },
         { "15", OPTION_VAL_15_GL },
         { "20", OPTION_VAL_20_GL },
         { "25", OPTION_VAL_25_GL },
         { "30", OPTION_VAL_30_GL },
         { "35", OPTION_VAL_35_GL },
         { "40", OPTION_VAL_40_GL },
         { "45", OPTION_VAL_45_GL },
         { "50", OPTION_VAL_50_GL },
         { "55", OPTION_VAL_55_GL },
         { "60", OPTION_VAL_60_GL },
         { "65", OPTION_VAL_65_GL },
         { "70", OPTION_VAL_70_GL },
         { "75", OPTION_VAL_75_GL },
         { "80", OPTION_VAL_80_GL },
         { "85", OPTION_VAL_85_GL },
         { "90", OPTION_VAL_90_GL },
         { "95", OPTION_VAL_95_GL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_GL,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_GL,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_GL,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_GL,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_GL },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_GL,
      NULL,
      MGBA_FORCE_GBP_INFO_0_GL,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_GL,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_GL,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_GL },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_GL },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_GL },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_GL,
      NULL,
      MGBA_FRAMESKIP_INFO_0_GL,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_GL },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_GL },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_GL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_GL,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_GL,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_GL,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_GL,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_gl = {
   option_cats_gl,
   option_defs_gl
};

/* RETRO_LANGUAGE_HE */

#define CATEGORY_SYSTEM_LABEL_HE NULL
#define CATEGORY_SYSTEM_INFO_0_HE NULL
#define CATEGORY_VIDEO_LABEL_HE "וידאו"
#define CATEGORY_VIDEO_INFO_0_HE NULL
#define CATEGORY_VIDEO_INFO_1_HE NULL
#define CATEGORY_AUDIO_LABEL_HE "שמע"
#define CATEGORY_AUDIO_INFO_0_HE NULL
#define CATEGORY_INPUT_LABEL_HE NULL
#define CATEGORY_INPUT_INFO_0_HE NULL
#define CATEGORY_PERFORMANCE_LABEL_HE NULL
#define CATEGORY_PERFORMANCE_INFO_0_HE NULL
#define MGBA_GB_MODEL_LABEL_HE NULL
#define MGBA_GB_MODEL_INFO_0_HE NULL
#define OPTION_VAL_AUTODETECT_HE NULL
#define OPTION_VAL_GAME_BOY_HE NULL
#define OPTION_VAL_SUPER_GAME_BOY_HE NULL
#define OPTION_VAL_GAME_BOY_COLOR_HE NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_HE NULL
#define MGBA_USE_BIOS_LABEL_HE NULL
#define MGBA_USE_BIOS_INFO_0_HE NULL
#define MGBA_SKIP_BIOS_LABEL_HE NULL
#define MGBA_SKIP_BIOS_INFO_0_HE NULL
#define MGBA_GB_COLORS_LABEL_HE NULL
#define MGBA_GB_COLORS_INFO_0_HE NULL
#define OPTION_VAL_GRAYSCALE_HE NULL
#define MGBA_GB_COLORS_PRESET_LABEL_HE NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_HE NULL
#define OPTION_VAL_0_HE NULL
#define OPTION_VAL_1_HE NULL
#define OPTION_VAL_2_HE NULL
#define OPTION_VAL_3_HE NULL
#define MGBA_SGB_BORDERS_LABEL_HE NULL
#define MGBA_SGB_BORDERS_INFO_0_HE NULL
#define MGBA_COLOR_CORRECTION_LABEL_HE NULL
#define MGBA_COLOR_CORRECTION_INFO_0_HE NULL
#define OPTION_VAL_AUTO_HE NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_HE NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_HE NULL
#define OPTION_VAL_MIX_HE NULL
#define OPTION_VAL_MIX_SMART_HE NULL
#define OPTION_VAL_LCD_GHOSTING_HE NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_HE NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_HE NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_HE NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_HE NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_HE NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_HE NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_HE NULL
#define OPTION_VAL_5_HE NULL
#define OPTION_VAL_10_HE NULL
#define OPTION_VAL_15_HE NULL
#define OPTION_VAL_20_HE NULL
#define OPTION_VAL_25_HE NULL
#define OPTION_VAL_30_HE NULL
#define OPTION_VAL_35_HE NULL
#define OPTION_VAL_40_HE NULL
#define OPTION_VAL_45_HE NULL
#define OPTION_VAL_50_HE NULL
#define OPTION_VAL_55_HE NULL
#define OPTION_VAL_60_HE NULL
#define OPTION_VAL_65_HE NULL
#define OPTION_VAL_70_HE NULL
#define OPTION_VAL_75_HE NULL
#define OPTION_VAL_80_HE NULL
#define OPTION_VAL_85_HE NULL
#define OPTION_VAL_90_HE NULL
#define OPTION_VAL_95_HE NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_HE NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_HE NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_HE NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_HE NULL
#define OPTION_VAL_SENSOR_HE NULL
#define MGBA_FORCE_GBP_LABEL_HE NULL
#define MGBA_FORCE_GBP_INFO_0_HE NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_HE NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_HE NULL
#define OPTION_VAL_REMOVE_KNOWN_HE NULL
#define OPTION_VAL_DETECT_AND_REMOVE_HE NULL
#define OPTION_VAL_DON_T_REMOVE_HE NULL
#define MGBA_FRAMESKIP_LABEL_HE NULL
#define MGBA_FRAMESKIP_INFO_0_HE NULL
#define OPTION_VAL_AUTO_THRESHOLD_HE NULL
#define OPTION_VAL_FIXED_INTERVAL_HE NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_HE NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_HE NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_HE NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_HE NULL

struct retro_core_option_v2_category option_cats_he[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_HE,
      CATEGORY_SYSTEM_INFO_0_HE
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_HE,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_HE
#else
      CATEGORY_VIDEO_INFO_1_HE
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_HE,
      CATEGORY_AUDIO_INFO_0_HE
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_HE,
      CATEGORY_INPUT_INFO_0_HE
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_HE,
      CATEGORY_PERFORMANCE_INFO_0_HE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_he[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_HE,
      NULL,
      MGBA_GB_MODEL_INFO_0_HE,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_HE },
         { "Game Boy",         OPTION_VAL_GAME_BOY_HE },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_HE },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_HE },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_HE },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_HE,
      NULL,
      MGBA_USE_BIOS_INFO_0_HE,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_HE,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_HE,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_HE,
      NULL,
      MGBA_GB_COLORS_INFO_0_HE,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_HE },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_HE,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_HE,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_HE },
         { "1", OPTION_VAL_1_HE },
         { "2", OPTION_VAL_2_HE },
         { "3", OPTION_VAL_3_HE },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_HE,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_HE,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_HE,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_HE,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_HE },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_HE },
         { "Auto", OPTION_VAL_AUTO_HE },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_HE,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_HE,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_HE },
         { "mix_smart",         OPTION_VAL_MIX_SMART_HE },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_HE },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_HE },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_HE,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_HE,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_HE,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_HE,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_HE,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_HE,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_HE },
         { "10", OPTION_VAL_10_HE },
         { "15", OPTION_VAL_15_HE },
         { "20", OPTION_VAL_20_HE },
         { "25", OPTION_VAL_25_HE },
         { "30", OPTION_VAL_30_HE },
         { "35", OPTION_VAL_35_HE },
         { "40", OPTION_VAL_40_HE },
         { "45", OPTION_VAL_45_HE },
         { "50", OPTION_VAL_50_HE },
         { "55", OPTION_VAL_55_HE },
         { "60", OPTION_VAL_60_HE },
         { "65", OPTION_VAL_65_HE },
         { "70", OPTION_VAL_70_HE },
         { "75", OPTION_VAL_75_HE },
         { "80", OPTION_VAL_80_HE },
         { "85", OPTION_VAL_85_HE },
         { "90", OPTION_VAL_90_HE },
         { "95", OPTION_VAL_95_HE },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_HE,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_HE,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_HE,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_HE,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_HE },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_HE,
      NULL,
      MGBA_FORCE_GBP_INFO_0_HE,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_HE,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_HE,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_HE },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_HE },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_HE },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_HE,
      NULL,
      MGBA_FRAMESKIP_INFO_0_HE,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_HE },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_HE },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_HE },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_HE,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_HE,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_HE,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_HE,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_he = {
   option_cats_he,
   option_defs_he
};

/* RETRO_LANGUAGE_HR */

#define CATEGORY_SYSTEM_LABEL_HR NULL
#define CATEGORY_SYSTEM_INFO_0_HR NULL
#define CATEGORY_VIDEO_LABEL_HR NULL
#define CATEGORY_VIDEO_INFO_0_HR NULL
#define CATEGORY_VIDEO_INFO_1_HR NULL
#define CATEGORY_AUDIO_LABEL_HR NULL
#define CATEGORY_AUDIO_INFO_0_HR NULL
#define CATEGORY_INPUT_LABEL_HR NULL
#define CATEGORY_INPUT_INFO_0_HR NULL
#define CATEGORY_PERFORMANCE_LABEL_HR NULL
#define CATEGORY_PERFORMANCE_INFO_0_HR NULL
#define MGBA_GB_MODEL_LABEL_HR NULL
#define MGBA_GB_MODEL_INFO_0_HR NULL
#define OPTION_VAL_AUTODETECT_HR NULL
#define OPTION_VAL_GAME_BOY_HR NULL
#define OPTION_VAL_SUPER_GAME_BOY_HR NULL
#define OPTION_VAL_GAME_BOY_COLOR_HR NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_HR NULL
#define MGBA_USE_BIOS_LABEL_HR NULL
#define MGBA_USE_BIOS_INFO_0_HR NULL
#define MGBA_SKIP_BIOS_LABEL_HR NULL
#define MGBA_SKIP_BIOS_INFO_0_HR NULL
#define MGBA_GB_COLORS_LABEL_HR NULL
#define MGBA_GB_COLORS_INFO_0_HR NULL
#define OPTION_VAL_GRAYSCALE_HR NULL
#define MGBA_GB_COLORS_PRESET_LABEL_HR NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_HR NULL
#define OPTION_VAL_0_HR NULL
#define OPTION_VAL_1_HR NULL
#define OPTION_VAL_2_HR NULL
#define OPTION_VAL_3_HR NULL
#define MGBA_SGB_BORDERS_LABEL_HR NULL
#define MGBA_SGB_BORDERS_INFO_0_HR NULL
#define MGBA_COLOR_CORRECTION_LABEL_HR NULL
#define MGBA_COLOR_CORRECTION_INFO_0_HR NULL
#define OPTION_VAL_AUTO_HR NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_HR NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_HR NULL
#define OPTION_VAL_MIX_HR NULL
#define OPTION_VAL_MIX_SMART_HR NULL
#define OPTION_VAL_LCD_GHOSTING_HR NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_HR NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_HR NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_HR NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_HR NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_HR NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_HR NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_HR NULL
#define OPTION_VAL_5_HR NULL
#define OPTION_VAL_10_HR NULL
#define OPTION_VAL_15_HR NULL
#define OPTION_VAL_20_HR NULL
#define OPTION_VAL_25_HR NULL
#define OPTION_VAL_30_HR NULL
#define OPTION_VAL_35_HR NULL
#define OPTION_VAL_40_HR NULL
#define OPTION_VAL_45_HR NULL
#define OPTION_VAL_50_HR NULL
#define OPTION_VAL_55_HR NULL
#define OPTION_VAL_60_HR NULL
#define OPTION_VAL_65_HR NULL
#define OPTION_VAL_70_HR NULL
#define OPTION_VAL_75_HR NULL
#define OPTION_VAL_80_HR NULL
#define OPTION_VAL_85_HR NULL
#define OPTION_VAL_90_HR NULL
#define OPTION_VAL_95_HR NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_HR NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_HR NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_HR NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_HR NULL
#define OPTION_VAL_SENSOR_HR NULL
#define MGBA_FORCE_GBP_LABEL_HR NULL
#define MGBA_FORCE_GBP_INFO_0_HR NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_HR NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_HR NULL
#define OPTION_VAL_REMOVE_KNOWN_HR NULL
#define OPTION_VAL_DETECT_AND_REMOVE_HR NULL
#define OPTION_VAL_DON_T_REMOVE_HR NULL
#define MGBA_FRAMESKIP_LABEL_HR NULL
#define MGBA_FRAMESKIP_INFO_0_HR NULL
#define OPTION_VAL_AUTO_THRESHOLD_HR NULL
#define OPTION_VAL_FIXED_INTERVAL_HR NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_HR NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_HR NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_HR NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_HR NULL

struct retro_core_option_v2_category option_cats_hr[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_HR,
      CATEGORY_SYSTEM_INFO_0_HR
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_HR,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_HR
#else
      CATEGORY_VIDEO_INFO_1_HR
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_HR,
      CATEGORY_AUDIO_INFO_0_HR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_HR,
      CATEGORY_INPUT_INFO_0_HR
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_HR,
      CATEGORY_PERFORMANCE_INFO_0_HR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hr[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_HR,
      NULL,
      MGBA_GB_MODEL_INFO_0_HR,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_HR },
         { "Game Boy",         OPTION_VAL_GAME_BOY_HR },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_HR },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_HR },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_HR },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_HR,
      NULL,
      MGBA_USE_BIOS_INFO_0_HR,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_HR,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_HR,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_HR,
      NULL,
      MGBA_GB_COLORS_INFO_0_HR,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_HR },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_HR,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_HR,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_HR },
         { "1", OPTION_VAL_1_HR },
         { "2", OPTION_VAL_2_HR },
         { "3", OPTION_VAL_3_HR },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_HR,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_HR,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_HR,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_HR,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_HR },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_HR },
         { "Auto", OPTION_VAL_AUTO_HR },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_HR,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_HR,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_HR },
         { "mix_smart",         OPTION_VAL_MIX_SMART_HR },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_HR },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_HR },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_HR,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_HR,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_HR,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_HR,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_HR,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_HR,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_HR },
         { "10", OPTION_VAL_10_HR },
         { "15", OPTION_VAL_15_HR },
         { "20", OPTION_VAL_20_HR },
         { "25", OPTION_VAL_25_HR },
         { "30", OPTION_VAL_30_HR },
         { "35", OPTION_VAL_35_HR },
         { "40", OPTION_VAL_40_HR },
         { "45", OPTION_VAL_45_HR },
         { "50", OPTION_VAL_50_HR },
         { "55", OPTION_VAL_55_HR },
         { "60", OPTION_VAL_60_HR },
         { "65", OPTION_VAL_65_HR },
         { "70", OPTION_VAL_70_HR },
         { "75", OPTION_VAL_75_HR },
         { "80", OPTION_VAL_80_HR },
         { "85", OPTION_VAL_85_HR },
         { "90", OPTION_VAL_90_HR },
         { "95", OPTION_VAL_95_HR },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_HR,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_HR,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_HR,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_HR,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_HR },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_HR,
      NULL,
      MGBA_FORCE_GBP_INFO_0_HR,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_HR,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_HR,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_HR },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_HR },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_HR },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_HR,
      NULL,
      MGBA_FRAMESKIP_INFO_0_HR,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_HR },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_HR },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_HR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_HR,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_HR,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_HR,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_HR,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hr = {
   option_cats_hr,
   option_defs_hr
};

/* RETRO_LANGUAGE_HU */

#define CATEGORY_SYSTEM_LABEL_HU "Rendszer"
#define CATEGORY_SYSTEM_INFO_0_HU "A hardveralap kiválasztása / BIOS paraméterek."
#define CATEGORY_VIDEO_LABEL_HU "Kép"
#define CATEGORY_VIDEO_INFO_0_HU "DMG paletta / SGB keret / színkorrekció / LCD szellemkép effektek beállítása."
#define CATEGORY_VIDEO_INFO_1_HU "DMG paletta / SGB keretek beállítása."
#define CATEGORY_AUDIO_LABEL_HU "Hang"
#define CATEGORY_AUDIO_INFO_0_HU "Hangszűrés beállítása."
#define CATEGORY_INPUT_LABEL_HU "Bemenet és kiegészítő eszközök"
#define CATEGORY_INPUT_INFO_0_HU "A kontroller/érzékelő bemenetének és a kontroller rezgésének beállításai."
#define CATEGORY_PERFORMANCE_LABEL_HU "Teljesítmény"
#define CATEGORY_PERFORMANCE_INFO_0_HU "Az üresjárati hurok eltávolítás / képkockakihagyás paraméterei."
#define MGBA_GB_MODEL_LABEL_HU "Game Boy modell (újraindítás)"
#define MGBA_GB_MODEL_INFO_0_HU "A tartalom futtatása meghatározott Game Boy változattal. Az automatikus felismerés az aktuális játékhoz legmegfelelőbbet választja ki."
#define OPTION_VAL_AUTODETECT_HU "Automatikus felismerés"
#define OPTION_VAL_GAME_BOY_HU NULL
#define OPTION_VAL_SUPER_GAME_BOY_HU NULL
#define OPTION_VAL_GAME_BOY_COLOR_HU NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_HU NULL
#define MGBA_USE_BIOS_LABEL_HU "BIOS fájl használata, ha megtalálható (újraindítás)"
#define MGBA_USE_BIOS_INFO_0_HU "A hivatalos BIOS/bootbetöltő használata az emulált hardverhez, ha megtalálható a RetroArch rendszerkönyvtárában."
#define MGBA_SKIP_BIOS_LABEL_HU "BIOS intro kihagyása (újraindítás)"
#define MGBA_SKIP_BIOS_INFO_0_HU "Hivatalos BIOS/bootbetöltő használatakor az indítási logo animáció átugrása. Ennek a beállításnak nincs hatása, ha a BIOS fájl használata ki van kapcsolva."
#define MGBA_GB_COLORS_LABEL_HU "Alapértelmezett Game Boy színpaletta"
#define MGBA_GB_COLORS_INFO_0_HU "A Game Boy játékokhoz használt paletta, ha a játék nem Game Boy Color vagy Super Game Boy kompatibilis, vagy ha a modell Game Boy-ra van állítva."
#define OPTION_VAL_GRAYSCALE_HU "Szürkeárnyalatos"
#define MGBA_GB_COLORS_PRESET_LABEL_HU "Hardveres Game Boy paletták (újraindítás)"
#define MGBA_GB_COLORS_PRESET_INFO_0_HU "Azokhoz a Game Boy játékokhoz, amelyeknek van előre tárolt beállítása a Game Boy Color-on vagy a Super Game Boy-on, használja azt."
#define OPTION_VAL_0_HU "Alapértelmezett Game Boy színpaletta"
#define OPTION_VAL_1_HU "Csak a Game Boy Color beállítások"
#define OPTION_VAL_2_HU "Csak a Super Game Boy beállítások"
#define OPTION_VAL_3_HU "Bármely elérhető beállítás"
#define MGBA_SGB_BORDERS_LABEL_HU "Super Game Boy keretek használata (újraindítás)"
#define MGBA_SGB_BORDERS_INFO_0_HU "A Super Game Boy keretek megjelenítése Super Game Boy-on többet tudó játékoknál."
#define MGBA_COLOR_CORRECTION_LABEL_HU "Színkorrekció"
#define MGBA_COLOR_CORRECTION_INFO_0_HU "A kimenő színek hozzáigazítása a valódi GBA / GBC hardverhez."
#define OPTION_VAL_AUTO_HU "Automatikus"
#define MGBA_INTERFRAME_BLENDING_LABEL_HU "Képkockák vegyítése"
#define MGBA_INTERFRAME_BLENDING_INFO_0_HU "Az LCD szellemkép szimulálása. \"Egyszerű\" állapotban a jelenlegi és az előző képkockát 50:50 arányban keveri. Az \"Intelligens\" állás detektálja a villódzást, és csak az érintett pixeleket keveri 50:50 arányban. \"LCD szellemkép\" állásban az LCD természetes válaszidejét utánozza több képkocka kombinálásával. Az \"Egyszerű\" vagy \"Intelligens\" beállítás szükséges azokhoz a játékokhoz, amelyek az LCD szellemképet használják átlátszósági effektekhez (Wave Race, Chikyuu Kaihou Gun ZAS, F-Zero, a Boktai sorozat...)."
#define OPTION_VAL_MIX_HU "Egyszerű"
#define OPTION_VAL_MIX_SMART_HU "Intelligens"
#define OPTION_VAL_LCD_GHOSTING_HU "LCD szellemkép (pontos)"
#define OPTION_VAL_LCD_GHOSTING_FAST_HU "LCD szellemkép (gyors)"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_HU "Hangszűrő"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_HU "Aluláteresztő szűrő"
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_HU "Aluláteresztő hangszűrő engedélyezése a generált hang \"nyersességének\" tompításához."
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_HU "Hangszűrő szintje"
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_HU "Szűrési szint"
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_HU "Az aluláteresztő hangszűrő vágási frekvenciája. Nagyobb érték \"erősebb\" szűrésként hallatszik, mivel a magastartomány szélesebb sávja halkul el."
#define OPTION_VAL_5_HU NULL
#define OPTION_VAL_10_HU NULL
#define OPTION_VAL_15_HU NULL
#define OPTION_VAL_20_HU NULL
#define OPTION_VAL_25_HU NULL
#define OPTION_VAL_30_HU NULL
#define OPTION_VAL_35_HU NULL
#define OPTION_VAL_40_HU NULL
#define OPTION_VAL_45_HU NULL
#define OPTION_VAL_50_HU NULL
#define OPTION_VAL_55_HU NULL
#define OPTION_VAL_60_HU NULL
#define OPTION_VAL_65_HU NULL
#define OPTION_VAL_70_HU NULL
#define OPTION_VAL_75_HU NULL
#define OPTION_VAL_80_HU NULL
#define OPTION_VAL_85_HU NULL
#define OPTION_VAL_90_HU NULL
#define OPTION_VAL_95_HU NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_HU "Ellentétes irányok engedélyezése"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_HU "A jobb és bal (vagy fel és le) irányok egyidejű/gyorsan váltakozó lenyomásának vagy nyomva tartásának engedélyezése. Hibákat okozhat a mozgatásban."
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_HU "Fényszenzor szintje"
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_HU "A környező napfény intenzitásának állítása. Olyan játékok használják, amelyek tartalmaznak fényérzékelőt a cartridge-ben, mint pl. a Boktai sorozat."
#define OPTION_VAL_SENSOR_HU "Az eszköz szenzorának használata, ha elérhető"
#define MGBA_FORCE_GBP_LABEL_HU "Game Boy Player rezgés (újraindítás)"
#define MGBA_FORCE_GBP_INFO_0_HU "A Game Boy Player indító logóval ellátott kompatibilis játékok rezgethetik a kontrollert. Mivel a Nintendo úgy döntött, hogy ez a feature úgy működjön, ahogy, így aztán hibákat, villódzást vagy késleltetést okozhat néhány ilyen játékban."
#define MGBA_IDLE_OPTIMIZATION_LABEL_HU "Üresjárati hurkok eltávolítása"
#define MGBA_IDLE_OPTIMIZATION_INFO_0_HU "A rendszer terhelésének csökkentése az üresjárati hurkok optimalizálásával - ezekben nem történik semmi, de a CPU teljes sebességgel fut (mint amikor üresben pörgetik egy autó motorját). Javítja a teljesítményt, gyenge hardveren legyen bekapcsolva."
#define OPTION_VAL_REMOVE_KNOWN_HU "Az ismertek eltávolítása"
#define OPTION_VAL_DETECT_AND_REMOVE_HU "Érzékelés és eltávolítás"
#define OPTION_VAL_DON_T_REMOVE_HU "Nincs eltávolítás"
#define MGBA_FRAMESKIP_LABEL_HU "Képkocka kihagyás"
#define MGBA_FRAMESKIP_INFO_0_HU "A hangbuffer kiürülése (recsegés) elkerülésére képkockák eldobása. Javít a teljesítményen a vizuális folyamatosság kárára. Az \"Automatikus\" beállítás akkor dob képkockát, ha a frontend azt javasolja. Az \"Automatikus (határérték)\" a \"Képkocka kihagyás határértéke (%)\" beállítást használja. A \"Fix időköz\" a képkockadobás időközének beállítását használja."
#define OPTION_VAL_AUTO_THRESHOLD_HU "Automatikus (határérték)"
#define OPTION_VAL_FIXED_INTERVAL_HU "Fix időköz"
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_HU "Képkocka kihagyás határértéke (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_HU "Ha a \"Képkocka kihagyás\" \"Automatikus (határérték)\" értékre van állítva, ez határozza meg a hangpuffer telítettségi határát (százalékban), amely alatt képkockákat dob el. Nagyobb érték csökkenti a recsegés kockázatát azáltal, hogy gyakrabban dob el képkockát."
#define MGBA_FRAMESKIP_INTERVAL_LABEL_HU "Képkockadobás időköze"
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_HU "A fix időközű képkockadobásnál ez az érték állítja be az egy előállított képkocka után eldobott képkockák számát. Pl: 0 = 60 fps, 1 = 30 fps, 2 = 15 fps, stb."

struct retro_core_option_v2_category option_cats_hu[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_HU,
      CATEGORY_SYSTEM_INFO_0_HU
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_HU,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_HU
#else
      CATEGORY_VIDEO_INFO_1_HU
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_HU,
      CATEGORY_AUDIO_INFO_0_HU
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_HU,
      CATEGORY_INPUT_INFO_0_HU
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_HU,
      CATEGORY_PERFORMANCE_INFO_0_HU
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hu[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_HU,
      NULL,
      MGBA_GB_MODEL_INFO_0_HU,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_HU },
         { "Game Boy",         OPTION_VAL_GAME_BOY_HU },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_HU },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_HU },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_HU },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_HU,
      NULL,
      MGBA_USE_BIOS_INFO_0_HU,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_HU,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_HU,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_HU,
      NULL,
      MGBA_GB_COLORS_INFO_0_HU,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_HU },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_HU,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_HU,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_HU },
         { "1", OPTION_VAL_1_HU },
         { "2", OPTION_VAL_2_HU },
         { "3", OPTION_VAL_3_HU },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_HU,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_HU,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_HU,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_HU,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_HU },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_HU },
         { "Auto", OPTION_VAL_AUTO_HU },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_HU,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_HU,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_HU },
         { "mix_smart",         OPTION_VAL_MIX_SMART_HU },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_HU },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_HU },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_HU,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_HU,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_HU,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_HU,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_HU,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_HU,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_HU },
         { "10", OPTION_VAL_10_HU },
         { "15", OPTION_VAL_15_HU },
         { "20", OPTION_VAL_20_HU },
         { "25", OPTION_VAL_25_HU },
         { "30", OPTION_VAL_30_HU },
         { "35", OPTION_VAL_35_HU },
         { "40", OPTION_VAL_40_HU },
         { "45", OPTION_VAL_45_HU },
         { "50", OPTION_VAL_50_HU },
         { "55", OPTION_VAL_55_HU },
         { "60", OPTION_VAL_60_HU },
         { "65", OPTION_VAL_65_HU },
         { "70", OPTION_VAL_70_HU },
         { "75", OPTION_VAL_75_HU },
         { "80", OPTION_VAL_80_HU },
         { "85", OPTION_VAL_85_HU },
         { "90", OPTION_VAL_90_HU },
         { "95", OPTION_VAL_95_HU },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_HU,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_HU,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_HU,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_HU,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_HU },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_HU,
      NULL,
      MGBA_FORCE_GBP_INFO_0_HU,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_HU,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_HU,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_HU },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_HU },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_HU },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_HU,
      NULL,
      MGBA_FRAMESKIP_INFO_0_HU,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_HU },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_HU },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_HU },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_HU,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_HU,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_HU,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_HU,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hu = {
   option_cats_hu,
   option_defs_hu
};

/* RETRO_LANGUAGE_ID */

#define CATEGORY_SYSTEM_LABEL_ID "Sistem"
#define CATEGORY_SYSTEM_INFO_0_ID NULL
#define CATEGORY_VIDEO_LABEL_ID NULL
#define CATEGORY_VIDEO_INFO_0_ID NULL
#define CATEGORY_VIDEO_INFO_1_ID NULL
#define CATEGORY_AUDIO_LABEL_ID "Suara"
#define CATEGORY_AUDIO_INFO_0_ID NULL
#define CATEGORY_INPUT_LABEL_ID NULL
#define CATEGORY_INPUT_INFO_0_ID NULL
#define CATEGORY_PERFORMANCE_LABEL_ID "Kinerja"
#define CATEGORY_PERFORMANCE_INFO_0_ID NULL
#define MGBA_GB_MODEL_LABEL_ID "Model Game Boy (mulai ulang)"
#define MGBA_GB_MODEL_INFO_0_ID NULL
#define OPTION_VAL_AUTODETECT_ID NULL
#define OPTION_VAL_GAME_BOY_ID NULL
#define OPTION_VAL_SUPER_GAME_BOY_ID NULL
#define OPTION_VAL_GAME_BOY_COLOR_ID NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_ID NULL
#define MGBA_USE_BIOS_LABEL_ID NULL
#define MGBA_USE_BIOS_INFO_0_ID NULL
#define MGBA_SKIP_BIOS_LABEL_ID NULL
#define MGBA_SKIP_BIOS_INFO_0_ID NULL
#define MGBA_GB_COLORS_LABEL_ID NULL
#define MGBA_GB_COLORS_INFO_0_ID NULL
#define OPTION_VAL_GRAYSCALE_ID NULL
#define MGBA_GB_COLORS_PRESET_LABEL_ID "Palet Game Boy Praatur Perangkat Keras (mulai ulang)"
#define MGBA_GB_COLORS_PRESET_INFO_0_ID NULL
#define OPTION_VAL_0_ID NULL
#define OPTION_VAL_1_ID NULL
#define OPTION_VAL_2_ID NULL
#define OPTION_VAL_3_ID NULL
#define MGBA_SGB_BORDERS_LABEL_ID NULL
#define MGBA_SGB_BORDERS_INFO_0_ID NULL
#define MGBA_COLOR_CORRECTION_LABEL_ID NULL
#define MGBA_COLOR_CORRECTION_INFO_0_ID NULL
#define OPTION_VAL_AUTO_ID "Otomatis"
#define MGBA_INTERFRAME_BLENDING_LABEL_ID NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_ID NULL
#define OPTION_VAL_MIX_ID NULL
#define OPTION_VAL_MIX_SMART_ID NULL
#define OPTION_VAL_LCD_GHOSTING_ID NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_ID NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_ID NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_ID NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_ID NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_ID NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_ID NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_ID NULL
#define OPTION_VAL_5_ID NULL
#define OPTION_VAL_10_ID NULL
#define OPTION_VAL_15_ID NULL
#define OPTION_VAL_20_ID NULL
#define OPTION_VAL_25_ID NULL
#define OPTION_VAL_30_ID NULL
#define OPTION_VAL_35_ID NULL
#define OPTION_VAL_40_ID NULL
#define OPTION_VAL_45_ID NULL
#define OPTION_VAL_50_ID NULL
#define OPTION_VAL_55_ID NULL
#define OPTION_VAL_60_ID NULL
#define OPTION_VAL_65_ID NULL
#define OPTION_VAL_70_ID NULL
#define OPTION_VAL_75_ID NULL
#define OPTION_VAL_80_ID NULL
#define OPTION_VAL_85_ID NULL
#define OPTION_VAL_90_ID NULL
#define OPTION_VAL_95_ID NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_ID NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_ID NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_ID NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_ID NULL
#define OPTION_VAL_SENSOR_ID NULL
#define MGBA_FORCE_GBP_LABEL_ID "Getaran Game Boy Player (mulai ulang)"
#define MGBA_FORCE_GBP_INFO_0_ID NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_ID NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_ID NULL
#define OPTION_VAL_REMOVE_KNOWN_ID NULL
#define OPTION_VAL_DETECT_AND_REMOVE_ID NULL
#define OPTION_VAL_DON_T_REMOVE_ID NULL
#define MGBA_FRAMESKIP_LABEL_ID NULL
#define MGBA_FRAMESKIP_INFO_0_ID NULL
#define OPTION_VAL_AUTO_THRESHOLD_ID NULL
#define OPTION_VAL_FIXED_INTERVAL_ID NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_ID NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_ID NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_ID NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_ID NULL

struct retro_core_option_v2_category option_cats_id[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_ID,
      CATEGORY_SYSTEM_INFO_0_ID
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_ID,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_ID
#else
      CATEGORY_VIDEO_INFO_1_ID
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_ID,
      CATEGORY_AUDIO_INFO_0_ID
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_ID,
      CATEGORY_INPUT_INFO_0_ID
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_ID,
      CATEGORY_PERFORMANCE_INFO_0_ID
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_id[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_ID,
      NULL,
      MGBA_GB_MODEL_INFO_0_ID,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_ID },
         { "Game Boy",         OPTION_VAL_GAME_BOY_ID },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_ID },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_ID },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_ID },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_ID,
      NULL,
      MGBA_USE_BIOS_INFO_0_ID,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_ID,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_ID,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_ID,
      NULL,
      MGBA_GB_COLORS_INFO_0_ID,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_ID },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_ID,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_ID,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_ID },
         { "1", OPTION_VAL_1_ID },
         { "2", OPTION_VAL_2_ID },
         { "3", OPTION_VAL_3_ID },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_ID,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_ID,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_ID,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_ID,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_ID },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_ID },
         { "Auto", OPTION_VAL_AUTO_ID },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_ID,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_ID,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_ID },
         { "mix_smart",         OPTION_VAL_MIX_SMART_ID },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_ID },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_ID },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_ID,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_ID,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_ID,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_ID,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_ID,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_ID,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_ID },
         { "10", OPTION_VAL_10_ID },
         { "15", OPTION_VAL_15_ID },
         { "20", OPTION_VAL_20_ID },
         { "25", OPTION_VAL_25_ID },
         { "30", OPTION_VAL_30_ID },
         { "35", OPTION_VAL_35_ID },
         { "40", OPTION_VAL_40_ID },
         { "45", OPTION_VAL_45_ID },
         { "50", OPTION_VAL_50_ID },
         { "55", OPTION_VAL_55_ID },
         { "60", OPTION_VAL_60_ID },
         { "65", OPTION_VAL_65_ID },
         { "70", OPTION_VAL_70_ID },
         { "75", OPTION_VAL_75_ID },
         { "80", OPTION_VAL_80_ID },
         { "85", OPTION_VAL_85_ID },
         { "90", OPTION_VAL_90_ID },
         { "95", OPTION_VAL_95_ID },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_ID,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_ID,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_ID,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_ID,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_ID },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_ID,
      NULL,
      MGBA_FORCE_GBP_INFO_0_ID,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_ID,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_ID,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_ID },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_ID },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_ID },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_ID,
      NULL,
      MGBA_FRAMESKIP_INFO_0_ID,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_ID },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_ID },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_ID },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_ID,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_ID,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_ID,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_ID,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_id = {
   option_cats_id,
   option_defs_id
};

/* RETRO_LANGUAGE_IT */

#define CATEGORY_SYSTEM_LABEL_IT "Sistema"
#define CATEGORY_SYSTEM_INFO_0_IT "Configura i parametri di selezione hardware base / BIOS."
#define CATEGORY_VIDEO_LABEL_IT NULL
#define CATEGORY_VIDEO_INFO_0_IT "Configura i bordi della tavolozza DMG / SGB / correzione del colore / effetti fantasma LCD."
#define CATEGORY_VIDEO_INFO_1_IT "Configura i bordi della tavolozza DMG / SGB."
#define CATEGORY_AUDIO_LABEL_IT NULL
#define CATEGORY_AUDIO_INFO_0_IT "Configura il filtro audio."
#define CATEGORY_INPUT_LABEL_IT "Dispositivi Di Ingresso E Ausiliari"
#define CATEGORY_INPUT_INFO_0_IT "Configurare le impostazioni del controller / sensore di ingresso e della vibrazione del controller."
#define CATEGORY_PERFORMANCE_LABEL_IT "Prestazioni"
#define CATEGORY_PERFORMANCE_INFO_0_IT "Configura i parametri di rimozione del ciclo inattivo / frameskipping."
#define MGBA_GB_MODEL_LABEL_IT "Modello Game Boy (richiede riavvio)"
#define MGBA_GB_MODEL_INFO_0_IT "Esegue il contenuto caricato con un modello specifico di Game Boy. 'Rivela Automaticamente' selezionerà il modello più appropriato per il gioco attuale."
#define OPTION_VAL_AUTODETECT_IT "Rivela Automaticamente"
#define OPTION_VAL_GAME_BOY_IT NULL
#define OPTION_VAL_SUPER_GAME_BOY_IT NULL
#define OPTION_VAL_GAME_BOY_COLOR_IT NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_IT NULL
#define MGBA_USE_BIOS_LABEL_IT "Usa il File BIOS se Presente (richiede riavvio)"
#define MGBA_USE_BIOS_INFO_0_IT "Usa il BIOS/bootloader ufficiale per hardware emulato, se presente nella cartella di sistema di RetroArch."
#define MGBA_SKIP_BIOS_LABEL_IT "Salta Intro BIOS (richiede riavvio)"
#define MGBA_SKIP_BIOS_INFO_0_IT "Salta il filmato del logo di avvio se si usa un BIOS/bootloader ufficiale. Questa impostazione è ignorata se 'Usa il file BIOS se presente' è disabilitato."
#define MGBA_GB_COLORS_LABEL_IT "Tavolozza Game Boy Predefinita"
#define MGBA_GB_COLORS_INFO_0_IT "Seleziona quale tavolozza è utilizzata per i giochi Game Boy che non sono compatibili con Game Boy Color o Super Game Boy, o se il modello è costretto a Game Boy."
#define OPTION_VAL_GRAYSCALE_IT "Scala di grigi"
#define MGBA_GB_COLORS_PRESET_LABEL_IT "Tavolozze del Game Boy predefinite per l'hardware (Riavvio richiesto)"
#define MGBA_GB_COLORS_PRESET_INFO_0_IT "Usa le tavolozze per i giochi di Game Boy che hanno preset sul Game Boy Color o Super Game Boy."
#define OPTION_VAL_0_IT "Predefinito Game Boy"
#define OPTION_VAL_1_IT "Solo preimpostazioni di Game Boy Color"
#define OPTION_VAL_2_IT "Solo preimpostazioni di Super Game Boy"
#define OPTION_VAL_3_IT "Qualsiasi preset disponibile"
#define MGBA_SGB_BORDERS_LABEL_IT "Utilizza i Bordi Super Game Boy (richiede riavvio)"
#define MGBA_SGB_BORDERS_INFO_0_IT "Visualizza i bordi del Super Game Boy quando apri un gioco potenziato dal Super Game Boy."
#define MGBA_COLOR_CORRECTION_LABEL_IT "Correzione Colore"
#define MGBA_COLOR_CORRECTION_INFO_0_IT "Regola i colori per corrispondere lo schermo di GBA/GBC reali."
#define OPTION_VAL_AUTO_IT NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_IT "Combinazione Interframe"
#define MGBA_INTERFRAME_BLENDING_INFO_0_IT "Simula gli effetti fantasma LCD. 'Semplice' esegue un mix di 50:50 dei fotogrammi attuali e precedenti. 'Smart' tenta di rilevare lo sfarfallio dello schermo, ed esegue solo un mix di 50:50 sui pixel interessati. 'LCD Ghosting' imita i tempi naturali di risposta LCD combinando più frame tamponati. 'Semplice' o 'Smart' miscela è necessario quando si gioca a giochi che sfruttano aggressivamente il fantasma LCD per gli effetti di trasparenza (Wave Race, Chikyuu Kaihou Gun ZAS, F-Zero, la serie Boktai..)."
#define OPTION_VAL_MIX_IT "Semplice"
#define OPTION_VAL_MIX_SMART_IT "Intelligente"
#define OPTION_VAL_LCD_GHOSTING_IT "Ghosting LCD (preciso)"
#define OPTION_VAL_LCD_GHOSTING_FAST_IT "Ghosting LCD (veloce)"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_IT "Filtro Audio"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_IT "Filtro Passaggio-basso"
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_IT "Abilita un filtro audio passaggio-basso per ridurre la 'durezza' dell'audio generato."
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_IT "Livello Filtro Audio"
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_IT "Livello Filtro"
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_IT "Specifica la frequenza di cut-off del filtro audio passa-basso. Un valore più elevato aumenta la 'forza' percepita del filtro, poiché una gamma più ampia dello spettro ad alta frequenza è attenuata."
#define OPTION_VAL_5_IT NULL
#define OPTION_VAL_10_IT NULL
#define OPTION_VAL_15_IT NULL
#define OPTION_VAL_20_IT NULL
#define OPTION_VAL_25_IT NULL
#define OPTION_VAL_30_IT NULL
#define OPTION_VAL_35_IT NULL
#define OPTION_VAL_40_IT NULL
#define OPTION_VAL_45_IT NULL
#define OPTION_VAL_50_IT NULL
#define OPTION_VAL_55_IT NULL
#define OPTION_VAL_60_IT NULL
#define OPTION_VAL_65_IT NULL
#define OPTION_VAL_70_IT NULL
#define OPTION_VAL_75_IT NULL
#define OPTION_VAL_80_IT NULL
#define OPTION_VAL_85_IT NULL
#define OPTION_VAL_90_IT NULL
#define OPTION_VAL_95_IT NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_IT "Permetti Input Direzionali Opposti"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_IT "Attivando questa funzionalità ti permette di premere / alternare velocemente / tenere premuti entrambe le direzioni destra e sinistra (oppure su e giù) allo stesso momento. Potrebbe causare dei glitch di movimento."
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_IT "Livello Sensore Solare"
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_IT "Imposta l'intensità solare dell'ambiente. Può essere usato dai giochi che includono un sensore solare nelle loro cartucce, es.: la serie Boktai."
#define OPTION_VAL_SENSOR_IT "Usa sensore dispositivo se disponibile"
#define MGBA_FORCE_GBP_LABEL_IT "Vibrazione Game Boy Player (Riavvio)"
#define MGBA_FORCE_GBP_INFO_0_IT "Abilitando questa opzione i giochi saranno compatibili con il logo di avvio del Game Boy Player per far vibrare il controller. A causa di come Nintendo ha deciso che questa funzione dovrebbe funzionare, può causare problemi come tremolio o ritardo in alcuni di questi giochi."
#define MGBA_IDLE_OPTIMIZATION_LABEL_IT "Rimozione Idle Loop"
#define MGBA_IDLE_OPTIMIZATION_INFO_0_IT "Riduce il carico del sistema ottimizzando gli 'idle-loops' - sezione del codice dove non accade nulla, ma la CPU lavora a velocità massima. Migliora le prestazioni, è consigliato abilitarlo su hardware di bassa fascia."
#define OPTION_VAL_REMOVE_KNOWN_IT "Rimuovi Conosciuti"
#define OPTION_VAL_DETECT_AND_REMOVE_IT "Rileva e Rimuovi"
#define OPTION_VAL_DON_T_REMOVE_IT "Non Rimuovere"
#define MGBA_FRAMESKIP_LABEL_IT "Salta Frame"
#define MGBA_FRAMESKIP_INFO_0_IT "Salta dei frame per migliorare le prestazioni a costo della fluidità dell'immagine. Il valore impostato qui è il numero dei frame rimosso dopo che un frame sia stato renderizzato - ovvero '0' = 60fps, '1' = 30fps, '2' = 15fps, ecc."
#define OPTION_VAL_AUTO_THRESHOLD_IT "Auto (Soglia)"
#define OPTION_VAL_FIXED_INTERVAL_IT "Intervallo Fisso"
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_IT "Soglia salto fotogrammi (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_IT "Quando 'Salto fotogrammi' è impostato a 'Auto (Soglia)', specifica la soglia di occupazione del buffer audio (percentuale) al di sotto della quale i quadri saranno saltati. Valori più elevati riducono il rischio di rompere causando un calo più frequente dei fotogrammi."
#define MGBA_FRAMESKIP_INTERVAL_LABEL_IT "Intervallo Salto Fotogrammi"
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_IT "Quando 'Salto fotogrammi' è impostato a 'Intervallo Fisso', il valore impostato qui è il numero di fotogrammi omessi dopo che un fotogramma è renderizzato - i.. '0' = 60fps, '1' = 30fps, '2' = 15fps, ecc."

struct retro_core_option_v2_category option_cats_it[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_IT,
      CATEGORY_SYSTEM_INFO_0_IT
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_IT,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_IT
#else
      CATEGORY_VIDEO_INFO_1_IT
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_IT,
      CATEGORY_AUDIO_INFO_0_IT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_IT,
      CATEGORY_INPUT_INFO_0_IT
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_IT,
      CATEGORY_PERFORMANCE_INFO_0_IT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_it[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_IT,
      NULL,
      MGBA_GB_MODEL_INFO_0_IT,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_IT },
         { "Game Boy",         OPTION_VAL_GAME_BOY_IT },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_IT },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_IT },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_IT },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_IT,
      NULL,
      MGBA_USE_BIOS_INFO_0_IT,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_IT,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_IT,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_IT,
      NULL,
      MGBA_GB_COLORS_INFO_0_IT,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_IT },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_IT,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_IT,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_IT },
         { "1", OPTION_VAL_1_IT },
         { "2", OPTION_VAL_2_IT },
         { "3", OPTION_VAL_3_IT },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_IT,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_IT,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_IT,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_IT,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_IT },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_IT },
         { "Auto", OPTION_VAL_AUTO_IT },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_IT,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_IT,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_IT },
         { "mix_smart",         OPTION_VAL_MIX_SMART_IT },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_IT },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_IT },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_IT,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_IT,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_IT,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_IT,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_IT,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_IT,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_IT },
         { "10", OPTION_VAL_10_IT },
         { "15", OPTION_VAL_15_IT },
         { "20", OPTION_VAL_20_IT },
         { "25", OPTION_VAL_25_IT },
         { "30", OPTION_VAL_30_IT },
         { "35", OPTION_VAL_35_IT },
         { "40", OPTION_VAL_40_IT },
         { "45", OPTION_VAL_45_IT },
         { "50", OPTION_VAL_50_IT },
         { "55", OPTION_VAL_55_IT },
         { "60", OPTION_VAL_60_IT },
         { "65", OPTION_VAL_65_IT },
         { "70", OPTION_VAL_70_IT },
         { "75", OPTION_VAL_75_IT },
         { "80", OPTION_VAL_80_IT },
         { "85", OPTION_VAL_85_IT },
         { "90", OPTION_VAL_90_IT },
         { "95", OPTION_VAL_95_IT },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_IT,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_IT,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_IT,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_IT,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_IT },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_IT,
      NULL,
      MGBA_FORCE_GBP_INFO_0_IT,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_IT,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_IT,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_IT },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_IT },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_IT },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_IT,
      NULL,
      MGBA_FRAMESKIP_INFO_0_IT,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_IT },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_IT },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_IT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_IT,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_IT,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_IT,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_IT,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_it = {
   option_cats_it,
   option_defs_it
};

/* RETRO_LANGUAGE_JA */

#define CATEGORY_SYSTEM_LABEL_JA "システム"
#define CATEGORY_SYSTEM_INFO_0_JA "ベースハードウェアの選択 / BIOSパラメータの設定。"
#define CATEGORY_VIDEO_LABEL_JA "ビデオのドライバ"
#define CATEGORY_VIDEO_INFO_0_JA "DMGパレット / SGBボーダー / カラーコレクション / 液晶残像効果を設定する。"
#define CATEGORY_VIDEO_INFO_1_JA "DMGパレット / SGBボーダーを設定する。"
#define CATEGORY_AUDIO_LABEL_JA "オーディオのドライバ"
#define CATEGORY_AUDIO_INFO_0_JA "オーディオのフィルタリングを設定する。"
#define CATEGORY_INPUT_LABEL_JA "入力・補助デバイス"
#define CATEGORY_INPUT_INFO_0_JA "コントローラー / センサー入力とコントローラー振動の設定をする。"
#define CATEGORY_PERFORMANCE_LABEL_JA "パフォーマンス"
#define CATEGORY_PERFORMANCE_INFO_0_JA "アイドルループ除去 / フレームスキップのパラメータを設定する。"
#define MGBA_GB_MODEL_LABEL_JA "ゲームボーイモデル (再起動)"
#define MGBA_GB_MODEL_INFO_0_JA "特定のゲームボーイモデルで読み込まれたコンテンツを実行します。「自動検出」は現在のゲームに最も適したモデルを選択します。"
#define OPTION_VAL_AUTODETECT_JA "自動検出"
#define OPTION_VAL_GAME_BOY_JA "ゲームボーイ"
#define OPTION_VAL_SUPER_GAME_BOY_JA "スーパーゲームボーイ"
#define OPTION_VAL_GAME_BOY_COLOR_JA "ゲームボーイカラー"
#define OPTION_VAL_GAME_BOY_ADVANCE_JA "ゲームボーイアドバンス"
#define MGBA_USE_BIOS_LABEL_JA "BIOS ファイルが見つかった場合使用する (再起動)"
#define MGBA_USE_BIOS_INFO_0_JA "RetroArch のシステムディレクトリにある場合、エミュレートされたハードウェアの公式 BIOS / ブートローダを使用します。"
#define MGBA_SKIP_BIOS_LABEL_JA "BIOS イントロをスキップ (再起動)"
#define MGBA_SKIP_BIOS_INFO_0_JA "公式の BIOS / ブートローダーを使用する場合は、起動ロゴのアニメーションをスキップします。「 BIOS ファイルが見つかった場合使用する」が無効の場合はこの設定は無視されます。"
#define MGBA_GB_COLORS_LABEL_JA "デフォルトのゲームボーイパレット"
#define MGBA_GB_COLORS_INFO_0_JA NULL
#define OPTION_VAL_GRAYSCALE_JA "グレースケール"
#define MGBA_GB_COLORS_PRESET_LABEL_JA "ハードウェアプリセットのゲームボーイパレット (再起動)"
#define MGBA_GB_COLORS_PRESET_INFO_0_JA NULL
#define OPTION_VAL_0_JA "デフォルトのゲームボーイプリセット"
#define OPTION_VAL_1_JA "ゲームボーイカラープリセットのみ"
#define OPTION_VAL_2_JA "スーパーゲームボーイのプリセットのみ"
#define OPTION_VAL_3_JA "利用可能なプリセット"
#define MGBA_SGB_BORDERS_LABEL_JA "スーパーゲームボーイのピクチャーフレームを使用 (再起動)"
#define MGBA_SGB_BORDERS_INFO_0_JA "スーパーゲームボーイで強化されたゲームを実行するときにスーパーゲームボーイのピクチャーフレームを表示します。"
#define MGBA_COLOR_CORRECTION_LABEL_JA "カラーコレクション"
#define MGBA_COLOR_CORRECTION_INFO_0_JA "実際の GBA / GBC ハードウェアの表示に合わせて出力色を調整します。"
#define OPTION_VAL_AUTO_JA "自動"
#define MGBA_INTERFRAME_BLENDING_LABEL_JA NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_JA NULL
#define OPTION_VAL_MIX_JA "シンプル"
#define OPTION_VAL_MIX_SMART_JA "スマート"
#define OPTION_VAL_LCD_GHOSTING_JA "液晶残像 (精密)"
#define OPTION_VAL_LCD_GHOSTING_FAST_JA "液晶残像 (高速)"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_JA "オーディオフィルタ"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_JA "ローパスフィルタ"
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_JA NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_JA "オーディオフィルタレベル"
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_JA "フィルタレベル"
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_JA "ローパスオーディオフィルターのカットオフ周波数を指定します。 値を大きくすると、高周波数スペクトルの広い範囲が減衰するため、フィルタの知覚された「強さ」が増加します。"
#define OPTION_VAL_5_JA NULL
#define OPTION_VAL_10_JA NULL
#define OPTION_VAL_15_JA NULL
#define OPTION_VAL_20_JA NULL
#define OPTION_VAL_25_JA NULL
#define OPTION_VAL_30_JA NULL
#define OPTION_VAL_35_JA NULL
#define OPTION_VAL_40_JA NULL
#define OPTION_VAL_45_JA NULL
#define OPTION_VAL_50_JA NULL
#define OPTION_VAL_55_JA NULL
#define OPTION_VAL_60_JA NULL
#define OPTION_VAL_65_JA NULL
#define OPTION_VAL_70_JA NULL
#define OPTION_VAL_75_JA NULL
#define OPTION_VAL_80_JA NULL
#define OPTION_VAL_85_JA NULL
#define OPTION_VAL_90_JA NULL
#define OPTION_VAL_95_JA NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_JA "対向方向入力を許可する"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_JA "有効にすると、左右 (または上下) 方向の同時押し / 高速交互押し / 長押しが可能になります。動作に不具合が生じる場合があります。"
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_JA "太陽センサーレベル"
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_JA NULL
#define OPTION_VAL_SENSOR_JA "利用可能な場合は端末センサーを使用する"
#define MGBA_FORCE_GBP_LABEL_JA "ゲームボーイプレーヤー振動 (再起動)"
#define MGBA_FORCE_GBP_INFO_0_JA "この機能を有効にすると、ゲームボーイプレーヤーの起動ロゴがある対応ゲームで、コントローラーが振動するようになります。この機能は、任天堂の判断により、一部のゲームでちらつきやラグなどの不具合が発生する場合があります。"
#define MGBA_IDLE_OPTIMIZATION_LABEL_JA "アイドルループの削除"
#define MGBA_IDLE_OPTIMIZATION_INFO_0_JA NULL
#define OPTION_VAL_REMOVE_KNOWN_JA NULL
#define OPTION_VAL_DETECT_AND_REMOVE_JA "検出と削除"
#define OPTION_VAL_DON_T_REMOVE_JA "削除しない"
#define MGBA_FRAMESKIP_LABEL_JA "フレームスキップ"
#define MGBA_FRAMESKIP_INFO_0_JA NULL
#define OPTION_VAL_AUTO_THRESHOLD_JA NULL
#define OPTION_VAL_FIXED_INTERVAL_JA NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_JA "フレームスキップ閾値 (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_JA NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_JA NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_JA NULL

struct retro_core_option_v2_category option_cats_ja[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_JA,
      CATEGORY_SYSTEM_INFO_0_JA
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_JA,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_JA
#else
      CATEGORY_VIDEO_INFO_1_JA
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_JA,
      CATEGORY_AUDIO_INFO_0_JA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_JA,
      CATEGORY_INPUT_INFO_0_JA
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_JA,
      CATEGORY_PERFORMANCE_INFO_0_JA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ja[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_JA,
      NULL,
      MGBA_GB_MODEL_INFO_0_JA,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_JA },
         { "Game Boy",         OPTION_VAL_GAME_BOY_JA },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_JA },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_JA },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_JA },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_JA,
      NULL,
      MGBA_USE_BIOS_INFO_0_JA,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_JA,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_JA,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_JA,
      NULL,
      MGBA_GB_COLORS_INFO_0_JA,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_JA },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_JA,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_JA,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_JA },
         { "1", OPTION_VAL_1_JA },
         { "2", OPTION_VAL_2_JA },
         { "3", OPTION_VAL_3_JA },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_JA,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_JA,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_JA,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_JA,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_JA },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_JA },
         { "Auto", OPTION_VAL_AUTO_JA },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_JA,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_JA,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_JA },
         { "mix_smart",         OPTION_VAL_MIX_SMART_JA },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_JA },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_JA },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_JA,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_JA,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_JA,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_JA,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_JA,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_JA,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_JA },
         { "10", OPTION_VAL_10_JA },
         { "15", OPTION_VAL_15_JA },
         { "20", OPTION_VAL_20_JA },
         { "25", OPTION_VAL_25_JA },
         { "30", OPTION_VAL_30_JA },
         { "35", OPTION_VAL_35_JA },
         { "40", OPTION_VAL_40_JA },
         { "45", OPTION_VAL_45_JA },
         { "50", OPTION_VAL_50_JA },
         { "55", OPTION_VAL_55_JA },
         { "60", OPTION_VAL_60_JA },
         { "65", OPTION_VAL_65_JA },
         { "70", OPTION_VAL_70_JA },
         { "75", OPTION_VAL_75_JA },
         { "80", OPTION_VAL_80_JA },
         { "85", OPTION_VAL_85_JA },
         { "90", OPTION_VAL_90_JA },
         { "95", OPTION_VAL_95_JA },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_JA,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_JA,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_JA,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_JA,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_JA },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_JA,
      NULL,
      MGBA_FORCE_GBP_INFO_0_JA,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_JA,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_JA,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_JA },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_JA },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_JA },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_JA,
      NULL,
      MGBA_FRAMESKIP_INFO_0_JA,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_JA },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_JA },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_JA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_JA,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_JA,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_JA,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_JA,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ja = {
   option_cats_ja,
   option_defs_ja
};

/* RETRO_LANGUAGE_KO */

#define CATEGORY_SYSTEM_LABEL_KO "시스템"
#define CATEGORY_SYSTEM_INFO_0_KO "기본 하드웨어 / BIOS 등을 설정합니다."
#define CATEGORY_VIDEO_LABEL_KO "비디오"
#define CATEGORY_VIDEO_INFO_0_KO "DMG 팔레트 / SGB 보더 / 색상 보정 / LCD 고스팅 효과 등을 설정합니다."
#define CATEGORY_VIDEO_INFO_1_KO "DMG 팔레트 / SGB 보더를 설정합니다."
#define CATEGORY_AUDIO_LABEL_KO "오디오"
#define CATEGORY_AUDIO_INFO_0_KO "오디오 필터를 설정합니다."
#define CATEGORY_INPUT_LABEL_KO "입력 및 보조 장치"
#define CATEGORY_INPUT_INFO_0_KO "컨트롤러 / 센서 입력 / 진동 등을 설정합니다."
#define CATEGORY_PERFORMANCE_LABEL_KO "성능"
#define CATEGORY_PERFORMANCE_INFO_0_KO "유휴 루프 제거 / 프레임 스킵 등을 설정합니다."
#define MGBA_GB_MODEL_LABEL_KO "Game Boy 모델 (재시작 필요)"
#define MGBA_GB_MODEL_INFO_0_KO "불러온 컨텐츠를 실행할 Game Boy 모델을 선택합니다. '자동 감지'는 현재 게임에 가장 적절한 모델을 자동으로 선택합니다."
#define OPTION_VAL_AUTODETECT_KO "자동 감지"
#define OPTION_VAL_GAME_BOY_KO NULL
#define OPTION_VAL_SUPER_GAME_BOY_KO NULL
#define OPTION_VAL_GAME_BOY_COLOR_KO NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_KO NULL
#define MGBA_USE_BIOS_LABEL_KO "존재할 경우 BIOS 파일 사용 (재시작 필요)"
#define MGBA_USE_BIOS_INFO_0_KO "RetroArch의 시스템 디렉토리에 존재할 경우, 에뮬레이트하는 하드웨어의 공식 BIOS/부트로더를 사용합니다."
#define MGBA_SKIP_BIOS_LABEL_KO "BIOS 인트로 건너뛰기 (재시작 필요)"
#define MGBA_SKIP_BIOS_INFO_0_KO "공식 BIOS/부트로더를 사용할 때, 시작 로고 애니메이션을 건너뜁니다. 이 설정은 '존재할 경우 BIOS 파일 사용'이 비활성화되어있을 경우 무시됩니다."
#define MGBA_GB_COLORS_LABEL_KO "기본 Game Boy 팔레트"
#define MGBA_GB_COLORS_INFO_0_KO "Game Boy Color 또는 Super Game Boy와 호환되지 않는 Game Boy 게임을 구동하거나, 게임을 강제로 Game Boy 모델로 구동할 경우 사용할 팔레트를 선택합니다."
#define OPTION_VAL_GRAYSCALE_KO "흑백"
#define MGBA_GB_COLORS_PRESET_LABEL_KO "하드웨어 프리셋 Game Boy 팔레트 (재시작 필요)"
#define MGBA_GB_COLORS_PRESET_INFO_0_KO "Game Boy 게임에 Game Boy Color 또는 Super Game Boy에서 사용되는 팔레트가 있는 경우 해당 팔레트를 사용합니다."
#define OPTION_VAL_0_KO "기본 Game Boy 프리셋"
#define OPTION_VAL_1_KO "Game Boy Color 프리셋만"
#define OPTION_VAL_2_KO "Super Game Boy 프리셋만"
#define OPTION_VAL_3_KO "모든 프리셋 사용"
#define MGBA_SGB_BORDERS_LABEL_KO "Super Game Boy 보더 사용 (재시작 필요)"
#define MGBA_SGB_BORDERS_INFO_0_KO "Super Game Boy 향상이 지원되는 게임을 구동할 때 Super Game Boy 보더를 표시합니다."
#define MGBA_COLOR_CORRECTION_LABEL_KO "색상 보정"
#define MGBA_COLOR_CORRECTION_INFO_0_KO "출력되는 색상을 실제 GBA/GBC 하드웨어의 디스플레이와 비슷하게 조정합니다."
#define OPTION_VAL_AUTO_KO "자동"
#define MGBA_INTERFRAME_BLENDING_LABEL_KO "프레임 간 혼합"
#define MGBA_INTERFRAME_BLENDING_INFO_0_KO "LCD 고스팅 효과를 흉내냅니다. '단순'은 현재 프레임과 이전 프레임을 50:50 비율로 혼합합니다. '스마트'는 화면 깜빡임을 감지하여 영향을 받는 픽셀만 50:50 비율로 혼합합니다. 'LCD 고스팅' 옵션은 LCD 반응 시간에 따라 여러 프레임을 혼합합니다. LCD 고스팅을 이용해 투명 효과를 구현하는 게임(Wave Race, Chikyuu Kaihou Gun ZAS, F-Zero, Boktai 시리즈 등)을 플레이하려면 '단순' 또는 '스마트' 혼합을 사용해야 합니다."
#define OPTION_VAL_MIX_KO "단순"
#define OPTION_VAL_MIX_SMART_KO "스마트"
#define OPTION_VAL_LCD_GHOSTING_KO "LCD 고스팅 (정확하게)"
#define OPTION_VAL_LCD_GHOSTING_FAST_KO "LCD 고스팅 (빠르게)"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_KO "오디오 필터"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_KO "로우패스 필터"
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_KO "오디오에 로우패스 필터를 적용하여 '거친' 소리를 줄입니다."
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_KO "오디오 필터 수준"
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_KO "필터 수준"
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_KO "로우패스 오디오 필터의 컷오프 주파수를 지정합니다. 높은 값은 더 넓은 범위의 고주파음을 차단하여 필터의 '강도'를 높입니다."
#define OPTION_VAL_5_KO NULL
#define OPTION_VAL_10_KO NULL
#define OPTION_VAL_15_KO NULL
#define OPTION_VAL_20_KO NULL
#define OPTION_VAL_25_KO NULL
#define OPTION_VAL_30_KO NULL
#define OPTION_VAL_35_KO NULL
#define OPTION_VAL_40_KO NULL
#define OPTION_VAL_45_KO NULL
#define OPTION_VAL_50_KO NULL
#define OPTION_VAL_55_KO NULL
#define OPTION_VAL_60_KO NULL
#define OPTION_VAL_65_KO NULL
#define OPTION_VAL_70_KO NULL
#define OPTION_VAL_75_KO NULL
#define OPTION_VAL_80_KO NULL
#define OPTION_VAL_85_KO NULL
#define OPTION_VAL_90_KO NULL
#define OPTION_VAL_95_KO NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_KO "반대 방향 동시 입력 허용"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_KO "이 옵션을 활성화하면 왼쪽과 오른쪽 (또는 위쪽과 아래쪽) 방향 입력을 동시에 누르거나 빠르게 번갈아 누르는 것을 허용합니다. 이는 움직임 관련 버그를 일으킬 수 있습니다."
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_KO "태양광 센서 수준"
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_KO "태양광 센서의 강도를 설정합니다. 카트리지에 태양광 센서를 장착한 일부 게임(예: Boktai 시리즈)에서 사용할 수 있습니다."
#define OPTION_VAL_SENSOR_KO "가능한 경우 장치 센서 사용"
#define MGBA_FORCE_GBP_LABEL_KO "Game Boy Player 진동 (재시작 필요)"
#define MGBA_FORCE_GBP_INFO_0_KO "사용할 경우 Game Boy Player 로고를 표시하는 호환 게임에서 컨트롤러 진동을 사용합니다. Nintendo의 진동 구현 방식 때문에 일부 게임에서는 화면 깜빡임 또는 지연이 발생할 수 있습니다."
#define MGBA_IDLE_OPTIMIZATION_LABEL_KO "유휴 루프 제거"
#define MGBA_IDLE_OPTIMIZATION_INFO_0_KO "아무런 작업도 하지 않지만 CPU를 100% 사용하는 일명 '유휴 루프'를 최적화하여 시스템 부하를 감소시킵니다. 성능을 향상시키며, 저사양 환경에서는 활성화되어야 합니다."
#define OPTION_VAL_REMOVE_KNOWN_KO "알려진 경우만 제거"
#define OPTION_VAL_DETECT_AND_REMOVE_KO "자동 감지하여 제거"
#define OPTION_VAL_DON_T_REMOVE_KO "제거 안 함"
#define MGBA_FRAMESKIP_LABEL_KO "프레임 스킵"
#define MGBA_FRAMESKIP_INFO_0_KO "오디오 버퍼 언더런(소리깨짐) 을 줄이기 위해 프레임 건너뛰기를 합니다. 시각적인 부드러움을 포기하는 대신 성능이 향상됩니다. '자동'은 프론트엔드의 추천값으로 실행되고 '자동 (임계값)'은 '프레임 건너뛰기 임계값(%)' 설정을 이용해 실행됩니다. '고정 간격'은 '프레임 스킵 간격' 설정을 이용합니다."
#define OPTION_VAL_AUTO_THRESHOLD_KO "자동 (임계값)"
#define OPTION_VAL_FIXED_INTERVAL_KO "고정 간격"
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_KO "프레임 스킵 임계값 (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_KO "'프레임 건너뛰기'가 '자동 (임계값)'일 경우 건너뛸 프레임에 대한 오디오 버퍼 점유 임계점 (퍼센트) 을 설정하게됩니다. 값이 높을 수록 프레임은 떨어지고 그 대신 소리 깨짐 현상은 줄어들게 됩니다."
#define MGBA_FRAMESKIP_INTERVAL_LABEL_KO "프레임 스킵 간격"
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_KO "'프레임 건너뛰기'가 '고정 간격'일 경우, 프레임을 표시한 뒤 여기에 지정한 수만큼 다음 프레임을 건너뜁니다. 예: '0' = 60fps, '1' = 30fps, '2' = 15fps..."

struct retro_core_option_v2_category option_cats_ko[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_KO,
      CATEGORY_SYSTEM_INFO_0_KO
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_KO,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_KO
#else
      CATEGORY_VIDEO_INFO_1_KO
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_KO,
      CATEGORY_AUDIO_INFO_0_KO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_KO,
      CATEGORY_INPUT_INFO_0_KO
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_KO,
      CATEGORY_PERFORMANCE_INFO_0_KO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ko[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_KO,
      NULL,
      MGBA_GB_MODEL_INFO_0_KO,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_KO },
         { "Game Boy",         OPTION_VAL_GAME_BOY_KO },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_KO },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_KO },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_KO },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_KO,
      NULL,
      MGBA_USE_BIOS_INFO_0_KO,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_KO,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_KO,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_KO,
      NULL,
      MGBA_GB_COLORS_INFO_0_KO,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_KO },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_KO,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_KO,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_KO },
         { "1", OPTION_VAL_1_KO },
         { "2", OPTION_VAL_2_KO },
         { "3", OPTION_VAL_3_KO },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_KO,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_KO,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_KO,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_KO,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_KO },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_KO },
         { "Auto", OPTION_VAL_AUTO_KO },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_KO,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_KO,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_KO },
         { "mix_smart",         OPTION_VAL_MIX_SMART_KO },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_KO },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_KO },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_KO,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_KO,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_KO,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_KO,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_KO,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_KO,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_KO },
         { "10", OPTION_VAL_10_KO },
         { "15", OPTION_VAL_15_KO },
         { "20", OPTION_VAL_20_KO },
         { "25", OPTION_VAL_25_KO },
         { "30", OPTION_VAL_30_KO },
         { "35", OPTION_VAL_35_KO },
         { "40", OPTION_VAL_40_KO },
         { "45", OPTION_VAL_45_KO },
         { "50", OPTION_VAL_50_KO },
         { "55", OPTION_VAL_55_KO },
         { "60", OPTION_VAL_60_KO },
         { "65", OPTION_VAL_65_KO },
         { "70", OPTION_VAL_70_KO },
         { "75", OPTION_VAL_75_KO },
         { "80", OPTION_VAL_80_KO },
         { "85", OPTION_VAL_85_KO },
         { "90", OPTION_VAL_90_KO },
         { "95", OPTION_VAL_95_KO },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_KO,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_KO,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_KO,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_KO,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_KO },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_KO,
      NULL,
      MGBA_FORCE_GBP_INFO_0_KO,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_KO,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_KO,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_KO },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_KO },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_KO },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_KO,
      NULL,
      MGBA_FRAMESKIP_INFO_0_KO,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_KO },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_KO },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_KO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_KO,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_KO,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_KO,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_KO,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ko = {
   option_cats_ko,
   option_defs_ko
};

/* RETRO_LANGUAGE_MT */

#define CATEGORY_SYSTEM_LABEL_MT NULL
#define CATEGORY_SYSTEM_INFO_0_MT NULL
#define CATEGORY_VIDEO_LABEL_MT NULL
#define CATEGORY_VIDEO_INFO_0_MT NULL
#define CATEGORY_VIDEO_INFO_1_MT NULL
#define CATEGORY_AUDIO_LABEL_MT NULL
#define CATEGORY_AUDIO_INFO_0_MT NULL
#define CATEGORY_INPUT_LABEL_MT NULL
#define CATEGORY_INPUT_INFO_0_MT NULL
#define CATEGORY_PERFORMANCE_LABEL_MT NULL
#define CATEGORY_PERFORMANCE_INFO_0_MT NULL
#define MGBA_GB_MODEL_LABEL_MT NULL
#define MGBA_GB_MODEL_INFO_0_MT NULL
#define OPTION_VAL_AUTODETECT_MT NULL
#define OPTION_VAL_GAME_BOY_MT NULL
#define OPTION_VAL_SUPER_GAME_BOY_MT NULL
#define OPTION_VAL_GAME_BOY_COLOR_MT NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_MT NULL
#define MGBA_USE_BIOS_LABEL_MT NULL
#define MGBA_USE_BIOS_INFO_0_MT NULL
#define MGBA_SKIP_BIOS_LABEL_MT NULL
#define MGBA_SKIP_BIOS_INFO_0_MT NULL
#define MGBA_GB_COLORS_LABEL_MT NULL
#define MGBA_GB_COLORS_INFO_0_MT NULL
#define OPTION_VAL_GRAYSCALE_MT NULL
#define MGBA_GB_COLORS_PRESET_LABEL_MT NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_MT NULL
#define OPTION_VAL_0_MT NULL
#define OPTION_VAL_1_MT NULL
#define OPTION_VAL_2_MT NULL
#define OPTION_VAL_3_MT NULL
#define MGBA_SGB_BORDERS_LABEL_MT NULL
#define MGBA_SGB_BORDERS_INFO_0_MT NULL
#define MGBA_COLOR_CORRECTION_LABEL_MT NULL
#define MGBA_COLOR_CORRECTION_INFO_0_MT NULL
#define OPTION_VAL_AUTO_MT NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_MT NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_MT NULL
#define OPTION_VAL_MIX_MT NULL
#define OPTION_VAL_MIX_SMART_MT NULL
#define OPTION_VAL_LCD_GHOSTING_MT NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_MT NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_MT NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_MT NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_MT NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_MT NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_MT NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_MT NULL
#define OPTION_VAL_5_MT NULL
#define OPTION_VAL_10_MT NULL
#define OPTION_VAL_15_MT NULL
#define OPTION_VAL_20_MT NULL
#define OPTION_VAL_25_MT NULL
#define OPTION_VAL_30_MT NULL
#define OPTION_VAL_35_MT NULL
#define OPTION_VAL_40_MT NULL
#define OPTION_VAL_45_MT NULL
#define OPTION_VAL_50_MT NULL
#define OPTION_VAL_55_MT NULL
#define OPTION_VAL_60_MT NULL
#define OPTION_VAL_65_MT NULL
#define OPTION_VAL_70_MT NULL
#define OPTION_VAL_75_MT NULL
#define OPTION_VAL_80_MT NULL
#define OPTION_VAL_85_MT NULL
#define OPTION_VAL_90_MT NULL
#define OPTION_VAL_95_MT NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_MT NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_MT NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_MT NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_MT NULL
#define OPTION_VAL_SENSOR_MT NULL
#define MGBA_FORCE_GBP_LABEL_MT NULL
#define MGBA_FORCE_GBP_INFO_0_MT NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_MT NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_MT NULL
#define OPTION_VAL_REMOVE_KNOWN_MT NULL
#define OPTION_VAL_DETECT_AND_REMOVE_MT NULL
#define OPTION_VAL_DON_T_REMOVE_MT NULL
#define MGBA_FRAMESKIP_LABEL_MT NULL
#define MGBA_FRAMESKIP_INFO_0_MT NULL
#define OPTION_VAL_AUTO_THRESHOLD_MT NULL
#define OPTION_VAL_FIXED_INTERVAL_MT NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_MT NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_MT NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_MT NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_MT NULL

struct retro_core_option_v2_category option_cats_mt[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_MT,
      CATEGORY_SYSTEM_INFO_0_MT
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_MT,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_MT
#else
      CATEGORY_VIDEO_INFO_1_MT
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_MT,
      CATEGORY_AUDIO_INFO_0_MT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_MT,
      CATEGORY_INPUT_INFO_0_MT
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_MT,
      CATEGORY_PERFORMANCE_INFO_0_MT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_mt[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_MT,
      NULL,
      MGBA_GB_MODEL_INFO_0_MT,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_MT },
         { "Game Boy",         OPTION_VAL_GAME_BOY_MT },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_MT },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_MT },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_MT },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_MT,
      NULL,
      MGBA_USE_BIOS_INFO_0_MT,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_MT,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_MT,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_MT,
      NULL,
      MGBA_GB_COLORS_INFO_0_MT,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_MT },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_MT,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_MT,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_MT },
         { "1", OPTION_VAL_1_MT },
         { "2", OPTION_VAL_2_MT },
         { "3", OPTION_VAL_3_MT },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_MT,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_MT,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_MT,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_MT,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_MT },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_MT },
         { "Auto", OPTION_VAL_AUTO_MT },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_MT,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_MT,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_MT },
         { "mix_smart",         OPTION_VAL_MIX_SMART_MT },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_MT },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_MT },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_MT,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_MT,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_MT,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_MT,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_MT,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_MT,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_MT },
         { "10", OPTION_VAL_10_MT },
         { "15", OPTION_VAL_15_MT },
         { "20", OPTION_VAL_20_MT },
         { "25", OPTION_VAL_25_MT },
         { "30", OPTION_VAL_30_MT },
         { "35", OPTION_VAL_35_MT },
         { "40", OPTION_VAL_40_MT },
         { "45", OPTION_VAL_45_MT },
         { "50", OPTION_VAL_50_MT },
         { "55", OPTION_VAL_55_MT },
         { "60", OPTION_VAL_60_MT },
         { "65", OPTION_VAL_65_MT },
         { "70", OPTION_VAL_70_MT },
         { "75", OPTION_VAL_75_MT },
         { "80", OPTION_VAL_80_MT },
         { "85", OPTION_VAL_85_MT },
         { "90", OPTION_VAL_90_MT },
         { "95", OPTION_VAL_95_MT },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_MT,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_MT,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_MT,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_MT,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_MT },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_MT,
      NULL,
      MGBA_FORCE_GBP_INFO_0_MT,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_MT,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_MT,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_MT },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_MT },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_MT },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_MT,
      NULL,
      MGBA_FRAMESKIP_INFO_0_MT,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_MT },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_MT },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_MT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_MT,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_MT,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_MT,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_MT,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_mt = {
   option_cats_mt,
   option_defs_mt
};

/* RETRO_LANGUAGE_NL */

#define CATEGORY_SYSTEM_LABEL_NL "Systeem"
#define CATEGORY_SYSTEM_INFO_0_NL NULL
#define CATEGORY_VIDEO_LABEL_NL NULL
#define CATEGORY_VIDEO_INFO_0_NL "Configureer DMG palet / SGB randen / kleur correctie / LCD ghosting effecten."
#define CATEGORY_VIDEO_INFO_1_NL "Configureer DMG palet / SGB randen."
#define CATEGORY_AUDIO_LABEL_NL "Geluid"
#define CATEGORY_AUDIO_INFO_0_NL NULL
#define CATEGORY_INPUT_LABEL_NL NULL
#define CATEGORY_INPUT_INFO_0_NL NULL
#define CATEGORY_PERFORMANCE_LABEL_NL NULL
#define CATEGORY_PERFORMANCE_INFO_0_NL NULL
#define MGBA_GB_MODEL_LABEL_NL NULL
#define MGBA_GB_MODEL_INFO_0_NL NULL
#define OPTION_VAL_AUTODETECT_NL "Autodetecteren"
#define OPTION_VAL_GAME_BOY_NL NULL
#define OPTION_VAL_SUPER_GAME_BOY_NL NULL
#define OPTION_VAL_GAME_BOY_COLOR_NL NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_NL NULL
#define MGBA_USE_BIOS_LABEL_NL NULL
#define MGBA_USE_BIOS_INFO_0_NL NULL
#define MGBA_SKIP_BIOS_LABEL_NL NULL
#define MGBA_SKIP_BIOS_INFO_0_NL NULL
#define MGBA_GB_COLORS_LABEL_NL NULL
#define MGBA_GB_COLORS_INFO_0_NL NULL
#define OPTION_VAL_GRAYSCALE_NL NULL
#define MGBA_GB_COLORS_PRESET_LABEL_NL NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_NL NULL
#define OPTION_VAL_0_NL NULL
#define OPTION_VAL_1_NL NULL
#define OPTION_VAL_2_NL NULL
#define OPTION_VAL_3_NL NULL
#define MGBA_SGB_BORDERS_LABEL_NL NULL
#define MGBA_SGB_BORDERS_INFO_0_NL NULL
#define MGBA_COLOR_CORRECTION_LABEL_NL NULL
#define MGBA_COLOR_CORRECTION_INFO_0_NL NULL
#define OPTION_VAL_AUTO_NL "Automatisch"
#define MGBA_INTERFRAME_BLENDING_LABEL_NL NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_NL NULL
#define OPTION_VAL_MIX_NL NULL
#define OPTION_VAL_MIX_SMART_NL NULL
#define OPTION_VAL_LCD_GHOSTING_NL NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_NL NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_NL NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_NL NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_NL NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_NL NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_NL NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_NL NULL
#define OPTION_VAL_5_NL NULL
#define OPTION_VAL_10_NL NULL
#define OPTION_VAL_15_NL NULL
#define OPTION_VAL_20_NL NULL
#define OPTION_VAL_25_NL NULL
#define OPTION_VAL_30_NL NULL
#define OPTION_VAL_35_NL NULL
#define OPTION_VAL_40_NL NULL
#define OPTION_VAL_45_NL NULL
#define OPTION_VAL_50_NL NULL
#define OPTION_VAL_55_NL NULL
#define OPTION_VAL_60_NL NULL
#define OPTION_VAL_65_NL NULL
#define OPTION_VAL_70_NL NULL
#define OPTION_VAL_75_NL NULL
#define OPTION_VAL_80_NL NULL
#define OPTION_VAL_85_NL NULL
#define OPTION_VAL_90_NL NULL
#define OPTION_VAL_95_NL NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_NL NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_NL NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_NL NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_NL NULL
#define OPTION_VAL_SENSOR_NL NULL
#define MGBA_FORCE_GBP_LABEL_NL NULL
#define MGBA_FORCE_GBP_INFO_0_NL NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_NL NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_NL NULL
#define OPTION_VAL_REMOVE_KNOWN_NL NULL
#define OPTION_VAL_DETECT_AND_REMOVE_NL NULL
#define OPTION_VAL_DON_T_REMOVE_NL NULL
#define MGBA_FRAMESKIP_LABEL_NL NULL
#define MGBA_FRAMESKIP_INFO_0_NL NULL
#define OPTION_VAL_AUTO_THRESHOLD_NL NULL
#define OPTION_VAL_FIXED_INTERVAL_NL NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_NL NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_NL NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_NL NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_NL NULL

struct retro_core_option_v2_category option_cats_nl[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_NL,
      CATEGORY_SYSTEM_INFO_0_NL
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_NL,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_NL
#else
      CATEGORY_VIDEO_INFO_1_NL
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_NL,
      CATEGORY_AUDIO_INFO_0_NL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_NL,
      CATEGORY_INPUT_INFO_0_NL
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_NL,
      CATEGORY_PERFORMANCE_INFO_0_NL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_nl[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_NL,
      NULL,
      MGBA_GB_MODEL_INFO_0_NL,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_NL },
         { "Game Boy",         OPTION_VAL_GAME_BOY_NL },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_NL },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_NL },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_NL },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_NL,
      NULL,
      MGBA_USE_BIOS_INFO_0_NL,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_NL,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_NL,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_NL,
      NULL,
      MGBA_GB_COLORS_INFO_0_NL,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_NL },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_NL,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_NL,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_NL },
         { "1", OPTION_VAL_1_NL },
         { "2", OPTION_VAL_2_NL },
         { "3", OPTION_VAL_3_NL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_NL,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_NL,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_NL,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_NL,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_NL },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_NL },
         { "Auto", OPTION_VAL_AUTO_NL },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_NL,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_NL,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_NL },
         { "mix_smart",         OPTION_VAL_MIX_SMART_NL },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_NL },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_NL },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_NL,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_NL,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_NL,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_NL,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_NL,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_NL,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_NL },
         { "10", OPTION_VAL_10_NL },
         { "15", OPTION_VAL_15_NL },
         { "20", OPTION_VAL_20_NL },
         { "25", OPTION_VAL_25_NL },
         { "30", OPTION_VAL_30_NL },
         { "35", OPTION_VAL_35_NL },
         { "40", OPTION_VAL_40_NL },
         { "45", OPTION_VAL_45_NL },
         { "50", OPTION_VAL_50_NL },
         { "55", OPTION_VAL_55_NL },
         { "60", OPTION_VAL_60_NL },
         { "65", OPTION_VAL_65_NL },
         { "70", OPTION_VAL_70_NL },
         { "75", OPTION_VAL_75_NL },
         { "80", OPTION_VAL_80_NL },
         { "85", OPTION_VAL_85_NL },
         { "90", OPTION_VAL_90_NL },
         { "95", OPTION_VAL_95_NL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_NL,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_NL,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_NL,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_NL,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_NL },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_NL,
      NULL,
      MGBA_FORCE_GBP_INFO_0_NL,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_NL,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_NL,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_NL },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_NL },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_NL },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_NL,
      NULL,
      MGBA_FRAMESKIP_INFO_0_NL,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_NL },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_NL },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_NL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_NL,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_NL,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_NL,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_NL,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_nl = {
   option_cats_nl,
   option_defs_nl
};

/* RETRO_LANGUAGE_NO */

#define CATEGORY_SYSTEM_LABEL_NO NULL
#define CATEGORY_SYSTEM_INFO_0_NO NULL
#define CATEGORY_VIDEO_LABEL_NO NULL
#define CATEGORY_VIDEO_INFO_0_NO NULL
#define CATEGORY_VIDEO_INFO_1_NO NULL
#define CATEGORY_AUDIO_LABEL_NO "Lyd"
#define CATEGORY_AUDIO_INFO_0_NO NULL
#define CATEGORY_INPUT_LABEL_NO NULL
#define CATEGORY_INPUT_INFO_0_NO NULL
#define CATEGORY_PERFORMANCE_LABEL_NO NULL
#define CATEGORY_PERFORMANCE_INFO_0_NO NULL
#define MGBA_GB_MODEL_LABEL_NO NULL
#define MGBA_GB_MODEL_INFO_0_NO NULL
#define OPTION_VAL_AUTODETECT_NO NULL
#define OPTION_VAL_GAME_BOY_NO NULL
#define OPTION_VAL_SUPER_GAME_BOY_NO NULL
#define OPTION_VAL_GAME_BOY_COLOR_NO NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_NO NULL
#define MGBA_USE_BIOS_LABEL_NO NULL
#define MGBA_USE_BIOS_INFO_0_NO NULL
#define MGBA_SKIP_BIOS_LABEL_NO NULL
#define MGBA_SKIP_BIOS_INFO_0_NO NULL
#define MGBA_GB_COLORS_LABEL_NO NULL
#define MGBA_GB_COLORS_INFO_0_NO NULL
#define OPTION_VAL_GRAYSCALE_NO NULL
#define MGBA_GB_COLORS_PRESET_LABEL_NO NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_NO NULL
#define OPTION_VAL_0_NO NULL
#define OPTION_VAL_1_NO NULL
#define OPTION_VAL_2_NO NULL
#define OPTION_VAL_3_NO NULL
#define MGBA_SGB_BORDERS_LABEL_NO NULL
#define MGBA_SGB_BORDERS_INFO_0_NO NULL
#define MGBA_COLOR_CORRECTION_LABEL_NO NULL
#define MGBA_COLOR_CORRECTION_INFO_0_NO NULL
#define OPTION_VAL_AUTO_NO NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_NO NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_NO NULL
#define OPTION_VAL_MIX_NO NULL
#define OPTION_VAL_MIX_SMART_NO NULL
#define OPTION_VAL_LCD_GHOSTING_NO NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_NO NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_NO NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_NO NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_NO NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_NO NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_NO NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_NO NULL
#define OPTION_VAL_5_NO NULL
#define OPTION_VAL_10_NO NULL
#define OPTION_VAL_15_NO NULL
#define OPTION_VAL_20_NO NULL
#define OPTION_VAL_25_NO NULL
#define OPTION_VAL_30_NO NULL
#define OPTION_VAL_35_NO NULL
#define OPTION_VAL_40_NO NULL
#define OPTION_VAL_45_NO NULL
#define OPTION_VAL_50_NO NULL
#define OPTION_VAL_55_NO NULL
#define OPTION_VAL_60_NO NULL
#define OPTION_VAL_65_NO NULL
#define OPTION_VAL_70_NO NULL
#define OPTION_VAL_75_NO NULL
#define OPTION_VAL_80_NO NULL
#define OPTION_VAL_85_NO NULL
#define OPTION_VAL_90_NO NULL
#define OPTION_VAL_95_NO NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_NO NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_NO NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_NO NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_NO NULL
#define OPTION_VAL_SENSOR_NO NULL
#define MGBA_FORCE_GBP_LABEL_NO NULL
#define MGBA_FORCE_GBP_INFO_0_NO NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_NO NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_NO NULL
#define OPTION_VAL_REMOVE_KNOWN_NO NULL
#define OPTION_VAL_DETECT_AND_REMOVE_NO NULL
#define OPTION_VAL_DON_T_REMOVE_NO NULL
#define MGBA_FRAMESKIP_LABEL_NO NULL
#define MGBA_FRAMESKIP_INFO_0_NO NULL
#define OPTION_VAL_AUTO_THRESHOLD_NO NULL
#define OPTION_VAL_FIXED_INTERVAL_NO NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_NO NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_NO NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_NO NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_NO NULL

struct retro_core_option_v2_category option_cats_no[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_NO,
      CATEGORY_SYSTEM_INFO_0_NO
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_NO,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_NO
#else
      CATEGORY_VIDEO_INFO_1_NO
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_NO,
      CATEGORY_AUDIO_INFO_0_NO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_NO,
      CATEGORY_INPUT_INFO_0_NO
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_NO,
      CATEGORY_PERFORMANCE_INFO_0_NO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_no[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_NO,
      NULL,
      MGBA_GB_MODEL_INFO_0_NO,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_NO },
         { "Game Boy",         OPTION_VAL_GAME_BOY_NO },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_NO },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_NO },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_NO },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_NO,
      NULL,
      MGBA_USE_BIOS_INFO_0_NO,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_NO,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_NO,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_NO,
      NULL,
      MGBA_GB_COLORS_INFO_0_NO,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_NO },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_NO,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_NO,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_NO },
         { "1", OPTION_VAL_1_NO },
         { "2", OPTION_VAL_2_NO },
         { "3", OPTION_VAL_3_NO },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_NO,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_NO,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_NO,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_NO,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_NO },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_NO },
         { "Auto", OPTION_VAL_AUTO_NO },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_NO,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_NO,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_NO },
         { "mix_smart",         OPTION_VAL_MIX_SMART_NO },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_NO },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_NO },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_NO,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_NO,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_NO,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_NO,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_NO,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_NO,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_NO },
         { "10", OPTION_VAL_10_NO },
         { "15", OPTION_VAL_15_NO },
         { "20", OPTION_VAL_20_NO },
         { "25", OPTION_VAL_25_NO },
         { "30", OPTION_VAL_30_NO },
         { "35", OPTION_VAL_35_NO },
         { "40", OPTION_VAL_40_NO },
         { "45", OPTION_VAL_45_NO },
         { "50", OPTION_VAL_50_NO },
         { "55", OPTION_VAL_55_NO },
         { "60", OPTION_VAL_60_NO },
         { "65", OPTION_VAL_65_NO },
         { "70", OPTION_VAL_70_NO },
         { "75", OPTION_VAL_75_NO },
         { "80", OPTION_VAL_80_NO },
         { "85", OPTION_VAL_85_NO },
         { "90", OPTION_VAL_90_NO },
         { "95", OPTION_VAL_95_NO },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_NO,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_NO,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_NO,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_NO,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_NO },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_NO,
      NULL,
      MGBA_FORCE_GBP_INFO_0_NO,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_NO,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_NO,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_NO },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_NO },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_NO },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_NO,
      NULL,
      MGBA_FRAMESKIP_INFO_0_NO,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_NO },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_NO },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_NO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_NO,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_NO,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_NO,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_NO,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_no = {
   option_cats_no,
   option_defs_no
};

/* RETRO_LANGUAGE_OC */

#define CATEGORY_SYSTEM_LABEL_OC NULL
#define CATEGORY_SYSTEM_INFO_0_OC NULL
#define CATEGORY_VIDEO_LABEL_OC "Vidèo"
#define CATEGORY_VIDEO_INFO_0_OC NULL
#define CATEGORY_VIDEO_INFO_1_OC NULL
#define CATEGORY_AUDIO_LABEL_OC NULL
#define CATEGORY_AUDIO_INFO_0_OC NULL
#define CATEGORY_INPUT_LABEL_OC NULL
#define CATEGORY_INPUT_INFO_0_OC NULL
#define CATEGORY_PERFORMANCE_LABEL_OC NULL
#define CATEGORY_PERFORMANCE_INFO_0_OC NULL
#define MGBA_GB_MODEL_LABEL_OC NULL
#define MGBA_GB_MODEL_INFO_0_OC NULL
#define OPTION_VAL_AUTODETECT_OC NULL
#define OPTION_VAL_GAME_BOY_OC NULL
#define OPTION_VAL_SUPER_GAME_BOY_OC NULL
#define OPTION_VAL_GAME_BOY_COLOR_OC NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_OC NULL
#define MGBA_USE_BIOS_LABEL_OC NULL
#define MGBA_USE_BIOS_INFO_0_OC NULL
#define MGBA_SKIP_BIOS_LABEL_OC NULL
#define MGBA_SKIP_BIOS_INFO_0_OC NULL
#define MGBA_GB_COLORS_LABEL_OC NULL
#define MGBA_GB_COLORS_INFO_0_OC NULL
#define OPTION_VAL_GRAYSCALE_OC NULL
#define MGBA_GB_COLORS_PRESET_LABEL_OC NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_OC NULL
#define OPTION_VAL_0_OC NULL
#define OPTION_VAL_1_OC NULL
#define OPTION_VAL_2_OC NULL
#define OPTION_VAL_3_OC NULL
#define MGBA_SGB_BORDERS_LABEL_OC NULL
#define MGBA_SGB_BORDERS_INFO_0_OC NULL
#define MGBA_COLOR_CORRECTION_LABEL_OC NULL
#define MGBA_COLOR_CORRECTION_INFO_0_OC NULL
#define OPTION_VAL_AUTO_OC NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_OC NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_OC NULL
#define OPTION_VAL_MIX_OC NULL
#define OPTION_VAL_MIX_SMART_OC NULL
#define OPTION_VAL_LCD_GHOSTING_OC NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_OC NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_OC NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_OC NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_OC NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_OC NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_OC NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_OC NULL
#define OPTION_VAL_5_OC NULL
#define OPTION_VAL_10_OC NULL
#define OPTION_VAL_15_OC NULL
#define OPTION_VAL_20_OC NULL
#define OPTION_VAL_25_OC NULL
#define OPTION_VAL_30_OC NULL
#define OPTION_VAL_35_OC NULL
#define OPTION_VAL_40_OC NULL
#define OPTION_VAL_45_OC NULL
#define OPTION_VAL_50_OC NULL
#define OPTION_VAL_55_OC NULL
#define OPTION_VAL_60_OC NULL
#define OPTION_VAL_65_OC NULL
#define OPTION_VAL_70_OC NULL
#define OPTION_VAL_75_OC NULL
#define OPTION_VAL_80_OC NULL
#define OPTION_VAL_85_OC NULL
#define OPTION_VAL_90_OC NULL
#define OPTION_VAL_95_OC NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_OC NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_OC NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_OC NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_OC NULL
#define OPTION_VAL_SENSOR_OC NULL
#define MGBA_FORCE_GBP_LABEL_OC NULL
#define MGBA_FORCE_GBP_INFO_0_OC NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_OC NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_OC NULL
#define OPTION_VAL_REMOVE_KNOWN_OC NULL
#define OPTION_VAL_DETECT_AND_REMOVE_OC NULL
#define OPTION_VAL_DON_T_REMOVE_OC NULL
#define MGBA_FRAMESKIP_LABEL_OC NULL
#define MGBA_FRAMESKIP_INFO_0_OC NULL
#define OPTION_VAL_AUTO_THRESHOLD_OC NULL
#define OPTION_VAL_FIXED_INTERVAL_OC NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_OC NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_OC NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_OC NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_OC NULL

struct retro_core_option_v2_category option_cats_oc[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_OC,
      CATEGORY_SYSTEM_INFO_0_OC
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_OC,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_OC
#else
      CATEGORY_VIDEO_INFO_1_OC
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_OC,
      CATEGORY_AUDIO_INFO_0_OC
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_OC,
      CATEGORY_INPUT_INFO_0_OC
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_OC,
      CATEGORY_PERFORMANCE_INFO_0_OC
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_oc[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_OC,
      NULL,
      MGBA_GB_MODEL_INFO_0_OC,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_OC },
         { "Game Boy",         OPTION_VAL_GAME_BOY_OC },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_OC },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_OC },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_OC },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_OC,
      NULL,
      MGBA_USE_BIOS_INFO_0_OC,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_OC,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_OC,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_OC,
      NULL,
      MGBA_GB_COLORS_INFO_0_OC,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_OC },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_OC,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_OC,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_OC },
         { "1", OPTION_VAL_1_OC },
         { "2", OPTION_VAL_2_OC },
         { "3", OPTION_VAL_3_OC },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_OC,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_OC,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_OC,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_OC,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_OC },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_OC },
         { "Auto", OPTION_VAL_AUTO_OC },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_OC,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_OC,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_OC },
         { "mix_smart",         OPTION_VAL_MIX_SMART_OC },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_OC },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_OC },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_OC,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_OC,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_OC,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_OC,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_OC,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_OC,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_OC },
         { "10", OPTION_VAL_10_OC },
         { "15", OPTION_VAL_15_OC },
         { "20", OPTION_VAL_20_OC },
         { "25", OPTION_VAL_25_OC },
         { "30", OPTION_VAL_30_OC },
         { "35", OPTION_VAL_35_OC },
         { "40", OPTION_VAL_40_OC },
         { "45", OPTION_VAL_45_OC },
         { "50", OPTION_VAL_50_OC },
         { "55", OPTION_VAL_55_OC },
         { "60", OPTION_VAL_60_OC },
         { "65", OPTION_VAL_65_OC },
         { "70", OPTION_VAL_70_OC },
         { "75", OPTION_VAL_75_OC },
         { "80", OPTION_VAL_80_OC },
         { "85", OPTION_VAL_85_OC },
         { "90", OPTION_VAL_90_OC },
         { "95", OPTION_VAL_95_OC },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_OC,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_OC,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_OC,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_OC,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_OC },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_OC,
      NULL,
      MGBA_FORCE_GBP_INFO_0_OC,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_OC,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_OC,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_OC },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_OC },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_OC },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_OC,
      NULL,
      MGBA_FRAMESKIP_INFO_0_OC,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_OC },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_OC },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_OC },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_OC,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_OC,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_OC,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_OC,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_oc = {
   option_cats_oc,
   option_defs_oc
};

/* RETRO_LANGUAGE_PL */

#define CATEGORY_SYSTEM_LABEL_PL NULL
#define CATEGORY_SYSTEM_INFO_0_PL "Skonfiguruj podstawowe ustawienia sprzętowe / parametry BIOS."
#define CATEGORY_VIDEO_LABEL_PL "Wideo"
#define CATEGORY_VIDEO_INFO_0_PL "Skonfiguruj paletę DMG / ramki SGB / korektę kolorów / efekty wizualizacji LCD."
#define CATEGORY_VIDEO_INFO_1_PL "Skonfiguruj paletę DMG / granice SGB."
#define CATEGORY_AUDIO_LABEL_PL NULL
#define CATEGORY_AUDIO_INFO_0_PL "Skonfiguruj filtrowanie audio."
#define CATEGORY_INPUT_LABEL_PL "Urządzenia wejściowe i pomocnicze"
#define CATEGORY_INPUT_INFO_0_PL "Skonfiguruj ustawienia sterownika / czujnika wejściowego i kontrolera."
#define CATEGORY_PERFORMANCE_LABEL_PL "Wydajność"
#define CATEGORY_PERFORMANCE_INFO_0_PL "Skonfiguruj parametry usuwania pętli bezczynności / usuwania ramek."
#define MGBA_GB_MODEL_LABEL_PL "Model Game Boy (restart)"
#define MGBA_GB_MODEL_INFO_0_PL NULL
#define OPTION_VAL_AUTODETECT_PL "Autodetekcja"
#define OPTION_VAL_GAME_BOY_PL NULL
#define OPTION_VAL_SUPER_GAME_BOY_PL NULL
#define OPTION_VAL_GAME_BOY_COLOR_PL NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_PL NULL
#define MGBA_USE_BIOS_LABEL_PL "Użyj pliku BIOS jeśli został znaleziony (Restart)"
#define MGBA_USE_BIOS_INFO_0_PL "Użyj oficjalnego BIOS/bootloadera do emulowanego sprzętu, jeśli jest obecny w katalogu systemowym RetroArch."
#define MGBA_SKIP_BIOS_LABEL_PL "Pomiń wprowadzenie BIOS (restart)"
#define MGBA_SKIP_BIOS_INFO_0_PL NULL
#define MGBA_GB_COLORS_LABEL_PL "Domyślna paleta Game Boy"
#define MGBA_GB_COLORS_INFO_0_PL NULL
#define OPTION_VAL_GRAYSCALE_PL "Odcienie szarości"
#define MGBA_GB_COLORS_PRESET_LABEL_PL "Sprzętowe predefiniowane palety Game Boy (Restart)"
#define MGBA_GB_COLORS_PRESET_INFO_0_PL "Użyj palet dla gier Game Boy, które mają presety w kolorze Game Boy Color lub Super Game Boy."
#define OPTION_VAL_0_PL "Domyślne ustawienie Game Boy"
#define OPTION_VAL_1_PL "Tylko ustawienia kolorów Game Boy Color"
#define OPTION_VAL_2_PL "Tylko ustawienia kolorów Super Game Boy"
#define OPTION_VAL_3_PL "Dowolne dostępne wstępne ustawienia"
#define MGBA_SGB_BORDERS_LABEL_PL NULL
#define MGBA_SGB_BORDERS_INFO_0_PL NULL
#define MGBA_COLOR_CORRECTION_LABEL_PL "Korekcja kolorów"
#define MGBA_COLOR_CORRECTION_INFO_0_PL "Dostosowuje kolory wyjściowe, aby dopasować wyświetlanie rzeczywistego sprzętu GBA/GBC."
#define OPTION_VAL_AUTO_PL NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_PL "Łączenie międzyramowe"
#define MGBA_INTERFRAME_BLENDING_INFO_0_PL NULL
#define OPTION_VAL_MIX_PL "Prosty"
#define OPTION_VAL_MIX_SMART_PL "Inteligentny"
#define OPTION_VAL_LCD_GHOSTING_PL "Ghosting LCD (dokładny)"
#define OPTION_VAL_LCD_GHOSTING_FAST_PL "LCD Ghosting (szybki)"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_PL "Filtr audio"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_PL "Filtr dolnoprzepustowy"
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_PL "Włącza filtr dźwiękowy o niskim współczynniku przenikania w celu zmniejszenia \"surowości\" generowanego dźwięku."
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_PL "Poziom filtra dźwięku"
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_PL "Poziom filtrów"
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_PL NULL
#define OPTION_VAL_5_PL NULL
#define OPTION_VAL_10_PL NULL
#define OPTION_VAL_15_PL NULL
#define OPTION_VAL_20_PL NULL
#define OPTION_VAL_25_PL NULL
#define OPTION_VAL_30_PL "30 %"
#define OPTION_VAL_35_PL NULL
#define OPTION_VAL_40_PL NULL
#define OPTION_VAL_45_PL NULL
#define OPTION_VAL_50_PL "50 %"
#define OPTION_VAL_55_PL NULL
#define OPTION_VAL_60_PL "60 %"
#define OPTION_VAL_65_PL NULL
#define OPTION_VAL_70_PL NULL
#define OPTION_VAL_75_PL NULL
#define OPTION_VAL_80_PL "80 %"
#define OPTION_VAL_85_PL NULL
#define OPTION_VAL_90_PL NULL
#define OPTION_VAL_95_PL NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_PL NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_PL NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_PL NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_PL NULL
#define OPTION_VAL_SENSOR_PL "Użyj czujnika urządzenia, jeśli jest dostępny"
#define MGBA_FORCE_GBP_LABEL_PL NULL
#define MGBA_FORCE_GBP_INFO_0_PL NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_PL "Usuwanie pętli bezczynności"
#define MGBA_IDLE_OPTIMIZATION_INFO_0_PL NULL
#define OPTION_VAL_REMOVE_KNOWN_PL "Usuń znaną"
#define OPTION_VAL_DETECT_AND_REMOVE_PL "Wykrywanie i usuwanie"
#define OPTION_VAL_DON_T_REMOVE_PL "Nie usuwaj"
#define MGBA_FRAMESKIP_LABEL_PL "Pomijanie klatek"
#define MGBA_FRAMESKIP_INFO_0_PL NULL
#define OPTION_VAL_AUTO_THRESHOLD_PL "Auto (próg)"
#define OPTION_VAL_FIXED_INTERVAL_PL NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_PL "Próg pominięcia ramki (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_PL NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_PL "Odstęp pomiędzy ramkami"
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_PL NULL

struct retro_core_option_v2_category option_cats_pl[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_PL,
      CATEGORY_SYSTEM_INFO_0_PL
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_PL,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_PL
#else
      CATEGORY_VIDEO_INFO_1_PL
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_PL,
      CATEGORY_AUDIO_INFO_0_PL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PL,
      CATEGORY_INPUT_INFO_0_PL
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_PL,
      CATEGORY_PERFORMANCE_INFO_0_PL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pl[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_PL,
      NULL,
      MGBA_GB_MODEL_INFO_0_PL,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_PL },
         { "Game Boy",         OPTION_VAL_GAME_BOY_PL },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_PL },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_PL },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_PL },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_PL,
      NULL,
      MGBA_USE_BIOS_INFO_0_PL,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_PL,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_PL,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_PL,
      NULL,
      MGBA_GB_COLORS_INFO_0_PL,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_PL },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_PL,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_PL,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_PL },
         { "1", OPTION_VAL_1_PL },
         { "2", OPTION_VAL_2_PL },
         { "3", OPTION_VAL_3_PL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_PL,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_PL,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_PL,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_PL,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_PL },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_PL },
         { "Auto", OPTION_VAL_AUTO_PL },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_PL,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_PL,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_PL },
         { "mix_smart",         OPTION_VAL_MIX_SMART_PL },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_PL },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_PL },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_PL,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_PL,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_PL,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_PL,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_PL,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_PL,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_PL },
         { "10", OPTION_VAL_10_PL },
         { "15", OPTION_VAL_15_PL },
         { "20", OPTION_VAL_20_PL },
         { "25", OPTION_VAL_25_PL },
         { "30", OPTION_VAL_30_PL },
         { "35", OPTION_VAL_35_PL },
         { "40", OPTION_VAL_40_PL },
         { "45", OPTION_VAL_45_PL },
         { "50", OPTION_VAL_50_PL },
         { "55", OPTION_VAL_55_PL },
         { "60", OPTION_VAL_60_PL },
         { "65", OPTION_VAL_65_PL },
         { "70", OPTION_VAL_70_PL },
         { "75", OPTION_VAL_75_PL },
         { "80", OPTION_VAL_80_PL },
         { "85", OPTION_VAL_85_PL },
         { "90", OPTION_VAL_90_PL },
         { "95", OPTION_VAL_95_PL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_PL,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_PL,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_PL,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_PL,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_PL },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_PL,
      NULL,
      MGBA_FORCE_GBP_INFO_0_PL,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_PL,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_PL,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_PL },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_PL },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_PL },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_PL,
      NULL,
      MGBA_FRAMESKIP_INFO_0_PL,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_PL },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_PL },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_PL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_PL,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_PL,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_PL,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_PL,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pl = {
   option_cats_pl,
   option_defs_pl
};

/* RETRO_LANGUAGE_PT_BR */

#define CATEGORY_SYSTEM_LABEL_PT_BR "Sistema"
#define CATEGORY_SYSTEM_INFO_0_PT_BR "Configura os parâmetros de seleção do hardware base e da BIOS."
#define CATEGORY_VIDEO_LABEL_PT_BR "Vídeo"
#define CATEGORY_VIDEO_INFO_0_PT_BR "Configura a paleta de modelos DMG, as bordas do SGB, a correção de cor e os efeitos fantasmas do LCD."
#define CATEGORY_VIDEO_INFO_1_PT_BR "Configura a paleta de modelos DMG e as bordas do SGB."
#define CATEGORY_AUDIO_LABEL_PT_BR "Áudio"
#define CATEGORY_AUDIO_INFO_0_PT_BR "Configura o filtro de áudio."
#define CATEGORY_INPUT_LABEL_PT_BR "Entrada e dispositivos auxiliares"
#define CATEGORY_INPUT_INFO_0_PT_BR "Configura os ajustes dos controles, da entrada dos sensores e da vibração dos controles."
#define CATEGORY_PERFORMANCE_LABEL_PT_BR "Desempenho"
#define CATEGORY_PERFORMANCE_INFO_0_PT_BR "Configura os ajustes dos loops de inatividade e dos pulos de quadros."
#define MGBA_GB_MODEL_LABEL_PT_BR "Modelo do Game Boy (requer reinício)"
#define MGBA_GB_MODEL_INFO_0_PT_BR "Executa o conteúdo carregado utilizando um modelo de Game Boy específico. 'Detectar automaticamente' selecionará o modelo mais apropriado para o jogo atual."
#define OPTION_VAL_AUTODETECT_PT_BR "Detectar automaticamente"
#define OPTION_VAL_GAME_BOY_PT_BR NULL
#define OPTION_VAL_SUPER_GAME_BOY_PT_BR NULL
#define OPTION_VAL_GAME_BOY_COLOR_PT_BR NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_PT_BR NULL
#define MGBA_USE_BIOS_LABEL_PT_BR "Usar arquivo de BIOS se encontrado (requer reinício)"
#define MGBA_USE_BIOS_INFO_0_PT_BR "Usa a BIOS/carregador de inicialização oficial para o hardware emulado, se estiver presente no diretório de sistema do RetroArch."
#define MGBA_SKIP_BIOS_LABEL_PT_BR "Pular introdução da BIOS (requer reinício)"
#define MGBA_SKIP_BIOS_INFO_0_PT_BR "Ao usar uma BIOS e um carregador de inicialização oficial, omitirá a animação do logotipo na inicialização. Esta configuração será ignorada caso 'Usar arquivo de BIOS se encontrado' estiver desativada."
#define MGBA_GB_COLORS_LABEL_PT_BR "Paleta padrão do Game Boy"
#define MGBA_GB_COLORS_INFO_0_PT_BR "Seleciona a paleta que será usada com jogos de Game Boy que não são compatíveis com Game Boy Color ou Super Game Boy ou ao forçar o modelo a Game Boy."
#define OPTION_VAL_GRAYSCALE_PT_BR "Nível de cinza"
#define MGBA_GB_COLORS_PRESET_LABEL_PT_BR "Paletas do hardware de Game Boy (requer reinício)"
#define MGBA_GB_COLORS_PRESET_INFO_0_PT_BR "Usa as paletas específicas nos jogos de Game Boy para os quais o Game Boy Color ou Super Game Boy tem predefinições atribuídas a eles."
#define OPTION_VAL_0_PT_BR "Predefinição padrão do Game Boy"
#define OPTION_VAL_1_PT_BR "Apenas predefinições de Game Boy Color"
#define OPTION_VAL_2_PT_BR "Apenas predefinições de Super Game Boy"
#define OPTION_VAL_3_PT_BR "Qualquer predefinição disponível"
#define MGBA_SGB_BORDERS_LABEL_PT_BR "Usar bordas do Super Game Boy (requer reinício)"
#define MGBA_SGB_BORDERS_INFO_0_PT_BR "Exibe as bordas do Super Game Boy ao jogar jogos compatíveis com esse sistema."
#define MGBA_COLOR_CORRECTION_LABEL_PT_BR "Correção de cor"
#define MGBA_COLOR_CORRECTION_INFO_0_PT_BR "Ajusta as cores de saída para coincidir com a exibição de hardware real do GBA ou GBC."
#define OPTION_VAL_AUTO_PT_BR "Automático"
#define MGBA_INTERFRAME_BLENDING_LABEL_PT_BR "Fusão entre quadros"
#define MGBA_INTERFRAME_BLENDING_INFO_0_PT_BR "Simula o efeito 'fantasma' da tela LCD. 'Simples' mistura metade dos quadros anterior e seguinte. 'Inteligente' tentará detectar a tremulação na tela e irá misturar apenas metade dos quadros nos pixels afetados. 'Efeito fantasma do LCD' simula os tempos naturais de resposta de uma tela de LCD, combinando vários quadros armazenados em buffer. As fusões 'Simples' ou 'Inteligente' são necessárias para jogos que precisam do efeito 'fantasma' para exibir transparência (Wave Race, Chikyuu Kaihou Gun ZAS, F-Zero, a saga Boktai...)."
#define OPTION_VAL_MIX_PT_BR "Simples"
#define OPTION_VAL_MIX_SMART_PT_BR "Inteligente"
#define OPTION_VAL_LCD_GHOSTING_PT_BR "Efeito fantasma do LCD (detalhado)"
#define OPTION_VAL_LCD_GHOSTING_FAST_PT_BR "Efeito fantasma do LCD (rápido)"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_PT_BR "Filtro de áudio"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_PT_BR "Filtro passa-baixo"
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_PT_BR "Ativa um filtro passa-baixo de áudio para reduzir a estridência do áudio gerado."
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_PT_BR "Nível do filtro de áudio"
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_PT_BR "Nível do filtro"
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_PT_BR "Especifica a frequência de corte do filtro de áudio passa-baixo. Um valor mais alto aumenta a 'força' percebida do filtro, uma vez que uma faixa mais ampla do espectro de alta frequência é atenuada."
#define OPTION_VAL_5_PT_BR NULL
#define OPTION_VAL_10_PT_BR NULL
#define OPTION_VAL_15_PT_BR NULL
#define OPTION_VAL_20_PT_BR NULL
#define OPTION_VAL_25_PT_BR NULL
#define OPTION_VAL_30_PT_BR NULL
#define OPTION_VAL_35_PT_BR NULL
#define OPTION_VAL_40_PT_BR NULL
#define OPTION_VAL_45_PT_BR NULL
#define OPTION_VAL_50_PT_BR NULL
#define OPTION_VAL_55_PT_BR NULL
#define OPTION_VAL_60_PT_BR NULL
#define OPTION_VAL_65_PT_BR NULL
#define OPTION_VAL_70_PT_BR NULL
#define OPTION_VAL_75_PT_BR NULL
#define OPTION_VAL_80_PT_BR NULL
#define OPTION_VAL_85_PT_BR NULL
#define OPTION_VAL_90_PT_BR NULL
#define OPTION_VAL_95_PT_BR NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_PT_BR "Permitir entradas direcionais opostas"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_PT_BR "Esta opção permitirá pressionar, alternar ou segurar rapidamente as direções esquerda e direita (ou cima e baixo) ao mesmo tempo. Pode causar falhas de movimento."
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_PT_BR "Nível do sensor solar"
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_PT_BR "Define a intensidade da luz do sol no ambiente. Pode ser usado por jogos que incluem um sensor solar em seus cartuchos, por exemplo: a série Boktai."
#define OPTION_VAL_SENSOR_PT_BR "Usa um dispositivo sensor, se disponível"
#define MGBA_FORCE_GBP_LABEL_PT_BR "Vibração do Game Boy Player (requer reinício)"
#define MGBA_FORCE_GBP_INFO_0_PT_BR "Permite que os jogos que suportam o logotipo de inicialização do Game Boy Player vibrem o controle. Devido ao método que a Nintendo utilizou, pode causar falhas gráficas como tremulações ou atrasos de sinal em alguns destes jogos."
#define MGBA_IDLE_OPTIMIZATION_LABEL_PT_BR "Remover loops de inatividade"
#define MGBA_IDLE_OPTIMIZATION_INFO_0_PT_BR "Reduz a carga do sistema através da otimização dos chamados 'loops ociosos': seções de código onde nada acontece, mas a CPU está funcionando em velocidade máxima (como quando um carro é acelerado em ponto morto). Ela melhora o desempenho e deve ser habilitada em hardware de baixo desempenho."
#define OPTION_VAL_REMOVE_KNOWN_PT_BR "Eliminar loops conhecidos"
#define OPTION_VAL_DETECT_AND_REMOVE_PT_BR "Detectar e remover"
#define OPTION_VAL_DON_T_REMOVE_PT_BR "Não eliminar"
#define MGBA_FRAMESKIP_LABEL_PT_BR "Pulo de quadro"
#define MGBA_FRAMESKIP_INFO_0_PT_BR "Ignora quadros para evitar o esvaziamento do buffer do áudio (cortes no áudio). Melhora o desempenho ao custo da suavidade visual. A opção 'Automático' ignora os quadros quando for aconselhado pela interface. A opção 'Automático (limite)' utiliza a configuração 'Limite do salto de quadros (%)'. 'Já 'Intervalo fixo', usa a configuração do 'Intervalo de pulo de quadros'."
#define OPTION_VAL_AUTO_THRESHOLD_PT_BR "Automático (limite)"
#define OPTION_VAL_FIXED_INTERVAL_PT_BR "Intervalo fixo"
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_PT_BR "Limite de pulo de quadro (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_PT_BR "Quando o 'Pulo de quadro' for definido como 'Automático (limite)', especifica o limite de ocupação do buffer de áudio (em porcentagem) abaixo do qual os quadros serão pulados. Valores maiores reduzem o risco de engasgos pois farão que os quadros sejam descartados com mais frequência."
#define MGBA_FRAMESKIP_INTERVAL_LABEL_PT_BR "Intervalo de pulo de quadros"
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_PT_BR "Quando o 'Pulo de quadro' é definido como 'Intervalo fixo', o valor atribuído aqui será o número de quadros pulados uma vez que um quadro tenha sido renderizado. Por exemplo: '0' = 60fps, '1' = 30fps, '2' = 15fps, e assim por diante."

struct retro_core_option_v2_category option_cats_pt_br[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_PT_BR,
      CATEGORY_SYSTEM_INFO_0_PT_BR
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_PT_BR,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_PT_BR
#else
      CATEGORY_VIDEO_INFO_1_PT_BR
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_PT_BR,
      CATEGORY_AUDIO_INFO_0_PT_BR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PT_BR,
      CATEGORY_INPUT_INFO_0_PT_BR
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_PT_BR,
      CATEGORY_PERFORMANCE_INFO_0_PT_BR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_br[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_PT_BR,
      NULL,
      MGBA_GB_MODEL_INFO_0_PT_BR,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_PT_BR },
         { "Game Boy",         OPTION_VAL_GAME_BOY_PT_BR },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_PT_BR },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_PT_BR },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_PT_BR },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_PT_BR,
      NULL,
      MGBA_USE_BIOS_INFO_0_PT_BR,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_PT_BR,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_PT_BR,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_PT_BR,
      NULL,
      MGBA_GB_COLORS_INFO_0_PT_BR,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_PT_BR },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_PT_BR,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_PT_BR },
         { "1", OPTION_VAL_1_PT_BR },
         { "2", OPTION_VAL_2_PT_BR },
         { "3", OPTION_VAL_3_PT_BR },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_PT_BR,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_PT_BR,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_PT_BR },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_PT_BR },
         { "Auto", OPTION_VAL_AUTO_PT_BR },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_PT_BR,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_PT_BR },
         { "mix_smart",         OPTION_VAL_MIX_SMART_PT_BR },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_PT_BR },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_PT_BR },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_PT_BR,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_PT_BR,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_PT_BR,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_PT_BR,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_PT_BR },
         { "10", OPTION_VAL_10_PT_BR },
         { "15", OPTION_VAL_15_PT_BR },
         { "20", OPTION_VAL_20_PT_BR },
         { "25", OPTION_VAL_25_PT_BR },
         { "30", OPTION_VAL_30_PT_BR },
         { "35", OPTION_VAL_35_PT_BR },
         { "40", OPTION_VAL_40_PT_BR },
         { "45", OPTION_VAL_45_PT_BR },
         { "50", OPTION_VAL_50_PT_BR },
         { "55", OPTION_VAL_55_PT_BR },
         { "60", OPTION_VAL_60_PT_BR },
         { "65", OPTION_VAL_65_PT_BR },
         { "70", OPTION_VAL_70_PT_BR },
         { "75", OPTION_VAL_75_PT_BR },
         { "80", OPTION_VAL_80_PT_BR },
         { "85", OPTION_VAL_85_PT_BR },
         { "90", OPTION_VAL_90_PT_BR },
         { "95", OPTION_VAL_95_PT_BR },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_PT_BR,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_PT_BR,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_PT_BR },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_PT_BR,
      NULL,
      MGBA_FORCE_GBP_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_PT_BR,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_PT_BR,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_PT_BR },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_PT_BR },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_PT_BR },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_PT_BR,
      NULL,
      MGBA_FRAMESKIP_INFO_0_PT_BR,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_PT_BR },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_PT_BR },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_PT_BR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_PT_BR,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_PT_BR,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_PT_BR,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_PT_BR,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_br = {
   option_cats_pt_br,
   option_defs_pt_br
};

/* RETRO_LANGUAGE_PT_PT */

#define CATEGORY_SYSTEM_LABEL_PT_PT NULL
#define CATEGORY_SYSTEM_INFO_0_PT_PT NULL
#define CATEGORY_VIDEO_LABEL_PT_PT "Vídeo"
#define CATEGORY_VIDEO_INFO_0_PT_PT NULL
#define CATEGORY_VIDEO_INFO_1_PT_PT NULL
#define CATEGORY_AUDIO_LABEL_PT_PT "Áudio"
#define CATEGORY_AUDIO_INFO_0_PT_PT NULL
#define CATEGORY_INPUT_LABEL_PT_PT NULL
#define CATEGORY_INPUT_INFO_0_PT_PT NULL
#define CATEGORY_PERFORMANCE_LABEL_PT_PT NULL
#define CATEGORY_PERFORMANCE_INFO_0_PT_PT NULL
#define MGBA_GB_MODEL_LABEL_PT_PT NULL
#define MGBA_GB_MODEL_INFO_0_PT_PT NULL
#define OPTION_VAL_AUTODETECT_PT_PT "Auto-detetar"
#define OPTION_VAL_GAME_BOY_PT_PT NULL
#define OPTION_VAL_SUPER_GAME_BOY_PT_PT NULL
#define OPTION_VAL_GAME_BOY_COLOR_PT_PT NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_PT_PT NULL
#define MGBA_USE_BIOS_LABEL_PT_PT NULL
#define MGBA_USE_BIOS_INFO_0_PT_PT NULL
#define MGBA_SKIP_BIOS_LABEL_PT_PT NULL
#define MGBA_SKIP_BIOS_INFO_0_PT_PT NULL
#define MGBA_GB_COLORS_LABEL_PT_PT NULL
#define MGBA_GB_COLORS_INFO_0_PT_PT NULL
#define OPTION_VAL_GRAYSCALE_PT_PT NULL
#define MGBA_GB_COLORS_PRESET_LABEL_PT_PT NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_PT_PT NULL
#define OPTION_VAL_0_PT_PT NULL
#define OPTION_VAL_1_PT_PT NULL
#define OPTION_VAL_2_PT_PT NULL
#define OPTION_VAL_3_PT_PT NULL
#define MGBA_SGB_BORDERS_LABEL_PT_PT NULL
#define MGBA_SGB_BORDERS_INFO_0_PT_PT NULL
#define MGBA_COLOR_CORRECTION_LABEL_PT_PT NULL
#define MGBA_COLOR_CORRECTION_INFO_0_PT_PT NULL
#define OPTION_VAL_AUTO_PT_PT "Automático"
#define MGBA_INTERFRAME_BLENDING_LABEL_PT_PT NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_PT_PT NULL
#define OPTION_VAL_MIX_PT_PT NULL
#define OPTION_VAL_MIX_SMART_PT_PT NULL
#define OPTION_VAL_LCD_GHOSTING_PT_PT NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_PT_PT NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_PT_PT "Filtro de som"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_PT_PT NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_PT_PT NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_PT_PT NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_PT_PT NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_PT_PT NULL
#define OPTION_VAL_5_PT_PT NULL
#define OPTION_VAL_10_PT_PT NULL
#define OPTION_VAL_15_PT_PT NULL
#define OPTION_VAL_20_PT_PT NULL
#define OPTION_VAL_25_PT_PT NULL
#define OPTION_VAL_30_PT_PT NULL
#define OPTION_VAL_35_PT_PT NULL
#define OPTION_VAL_40_PT_PT NULL
#define OPTION_VAL_45_PT_PT NULL
#define OPTION_VAL_50_PT_PT NULL
#define OPTION_VAL_55_PT_PT NULL
#define OPTION_VAL_60_PT_PT NULL
#define OPTION_VAL_65_PT_PT NULL
#define OPTION_VAL_70_PT_PT NULL
#define OPTION_VAL_75_PT_PT NULL
#define OPTION_VAL_80_PT_PT NULL
#define OPTION_VAL_85_PT_PT NULL
#define OPTION_VAL_90_PT_PT NULL
#define OPTION_VAL_95_PT_PT NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_PT_PT NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_PT_PT NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_PT_PT NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_PT_PT NULL
#define OPTION_VAL_SENSOR_PT_PT NULL
#define MGBA_FORCE_GBP_LABEL_PT_PT NULL
#define MGBA_FORCE_GBP_INFO_0_PT_PT NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_PT_PT NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_PT_PT NULL
#define OPTION_VAL_REMOVE_KNOWN_PT_PT NULL
#define OPTION_VAL_DETECT_AND_REMOVE_PT_PT NULL
#define OPTION_VAL_DON_T_REMOVE_PT_PT NULL
#define MGBA_FRAMESKIP_LABEL_PT_PT NULL
#define MGBA_FRAMESKIP_INFO_0_PT_PT NULL
#define OPTION_VAL_AUTO_THRESHOLD_PT_PT NULL
#define OPTION_VAL_FIXED_INTERVAL_PT_PT NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_PT_PT NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_PT_PT NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_PT_PT NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_PT_PT NULL

struct retro_core_option_v2_category option_cats_pt_pt[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_PT_PT,
      CATEGORY_SYSTEM_INFO_0_PT_PT
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_PT_PT,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_PT_PT
#else
      CATEGORY_VIDEO_INFO_1_PT_PT
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_PT_PT,
      CATEGORY_AUDIO_INFO_0_PT_PT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PT_PT,
      CATEGORY_INPUT_INFO_0_PT_PT
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_PT_PT,
      CATEGORY_PERFORMANCE_INFO_0_PT_PT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_pt[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_PT_PT,
      NULL,
      MGBA_GB_MODEL_INFO_0_PT_PT,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_PT_PT },
         { "Game Boy",         OPTION_VAL_GAME_BOY_PT_PT },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_PT_PT },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_PT_PT },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_PT_PT },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_PT_PT,
      NULL,
      MGBA_USE_BIOS_INFO_0_PT_PT,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_PT_PT,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_PT_PT,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_PT_PT,
      NULL,
      MGBA_GB_COLORS_INFO_0_PT_PT,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_PT_PT },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_PT_PT,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_PT_PT },
         { "1", OPTION_VAL_1_PT_PT },
         { "2", OPTION_VAL_2_PT_PT },
         { "3", OPTION_VAL_3_PT_PT },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_PT_PT,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_PT_PT,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_PT_PT },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_PT_PT },
         { "Auto", OPTION_VAL_AUTO_PT_PT },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_PT_PT,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_PT_PT },
         { "mix_smart",         OPTION_VAL_MIX_SMART_PT_PT },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_PT_PT },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_PT_PT },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_PT_PT,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_PT_PT,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_PT_PT,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_PT_PT,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_PT_PT },
         { "10", OPTION_VAL_10_PT_PT },
         { "15", OPTION_VAL_15_PT_PT },
         { "20", OPTION_VAL_20_PT_PT },
         { "25", OPTION_VAL_25_PT_PT },
         { "30", OPTION_VAL_30_PT_PT },
         { "35", OPTION_VAL_35_PT_PT },
         { "40", OPTION_VAL_40_PT_PT },
         { "45", OPTION_VAL_45_PT_PT },
         { "50", OPTION_VAL_50_PT_PT },
         { "55", OPTION_VAL_55_PT_PT },
         { "60", OPTION_VAL_60_PT_PT },
         { "65", OPTION_VAL_65_PT_PT },
         { "70", OPTION_VAL_70_PT_PT },
         { "75", OPTION_VAL_75_PT_PT },
         { "80", OPTION_VAL_80_PT_PT },
         { "85", OPTION_VAL_85_PT_PT },
         { "90", OPTION_VAL_90_PT_PT },
         { "95", OPTION_VAL_95_PT_PT },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_PT_PT,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_PT_PT,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_PT_PT },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_PT_PT,
      NULL,
      MGBA_FORCE_GBP_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_PT_PT,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_PT_PT,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_PT_PT },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_PT_PT },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_PT_PT },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_PT_PT,
      NULL,
      MGBA_FRAMESKIP_INFO_0_PT_PT,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_PT_PT },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_PT_PT },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_PT_PT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_PT_PT,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_PT_PT,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_PT_PT,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_PT_PT,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_pt = {
   option_cats_pt_pt,
   option_defs_pt_pt
};

/* RETRO_LANGUAGE_RO */

#define CATEGORY_SYSTEM_LABEL_RO NULL
#define CATEGORY_SYSTEM_INFO_0_RO NULL
#define CATEGORY_VIDEO_LABEL_RO NULL
#define CATEGORY_VIDEO_INFO_0_RO NULL
#define CATEGORY_VIDEO_INFO_1_RO NULL
#define CATEGORY_AUDIO_LABEL_RO NULL
#define CATEGORY_AUDIO_INFO_0_RO NULL
#define CATEGORY_INPUT_LABEL_RO NULL
#define CATEGORY_INPUT_INFO_0_RO NULL
#define CATEGORY_PERFORMANCE_LABEL_RO NULL
#define CATEGORY_PERFORMANCE_INFO_0_RO NULL
#define MGBA_GB_MODEL_LABEL_RO NULL
#define MGBA_GB_MODEL_INFO_0_RO NULL
#define OPTION_VAL_AUTODETECT_RO NULL
#define OPTION_VAL_GAME_BOY_RO NULL
#define OPTION_VAL_SUPER_GAME_BOY_RO NULL
#define OPTION_VAL_GAME_BOY_COLOR_RO NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_RO NULL
#define MGBA_USE_BIOS_LABEL_RO NULL
#define MGBA_USE_BIOS_INFO_0_RO NULL
#define MGBA_SKIP_BIOS_LABEL_RO NULL
#define MGBA_SKIP_BIOS_INFO_0_RO NULL
#define MGBA_GB_COLORS_LABEL_RO NULL
#define MGBA_GB_COLORS_INFO_0_RO NULL
#define OPTION_VAL_GRAYSCALE_RO NULL
#define MGBA_GB_COLORS_PRESET_LABEL_RO NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_RO NULL
#define OPTION_VAL_0_RO NULL
#define OPTION_VAL_1_RO NULL
#define OPTION_VAL_2_RO NULL
#define OPTION_VAL_3_RO NULL
#define MGBA_SGB_BORDERS_LABEL_RO NULL
#define MGBA_SGB_BORDERS_INFO_0_RO NULL
#define MGBA_COLOR_CORRECTION_LABEL_RO NULL
#define MGBA_COLOR_CORRECTION_INFO_0_RO NULL
#define OPTION_VAL_AUTO_RO NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_RO NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_RO NULL
#define OPTION_VAL_MIX_RO NULL
#define OPTION_VAL_MIX_SMART_RO NULL
#define OPTION_VAL_LCD_GHOSTING_RO NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_RO NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_RO NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_RO NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_RO NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_RO NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_RO NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_RO NULL
#define OPTION_VAL_5_RO NULL
#define OPTION_VAL_10_RO NULL
#define OPTION_VAL_15_RO NULL
#define OPTION_VAL_20_RO NULL
#define OPTION_VAL_25_RO NULL
#define OPTION_VAL_30_RO NULL
#define OPTION_VAL_35_RO NULL
#define OPTION_VAL_40_RO NULL
#define OPTION_VAL_45_RO NULL
#define OPTION_VAL_50_RO NULL
#define OPTION_VAL_55_RO NULL
#define OPTION_VAL_60_RO NULL
#define OPTION_VAL_65_RO NULL
#define OPTION_VAL_70_RO NULL
#define OPTION_VAL_75_RO NULL
#define OPTION_VAL_80_RO NULL
#define OPTION_VAL_85_RO NULL
#define OPTION_VAL_90_RO NULL
#define OPTION_VAL_95_RO NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_RO NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_RO NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_RO NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_RO NULL
#define OPTION_VAL_SENSOR_RO NULL
#define MGBA_FORCE_GBP_LABEL_RO NULL
#define MGBA_FORCE_GBP_INFO_0_RO NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_RO NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_RO NULL
#define OPTION_VAL_REMOVE_KNOWN_RO NULL
#define OPTION_VAL_DETECT_AND_REMOVE_RO NULL
#define OPTION_VAL_DON_T_REMOVE_RO NULL
#define MGBA_FRAMESKIP_LABEL_RO NULL
#define MGBA_FRAMESKIP_INFO_0_RO NULL
#define OPTION_VAL_AUTO_THRESHOLD_RO NULL
#define OPTION_VAL_FIXED_INTERVAL_RO NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_RO NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_RO NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_RO NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_RO NULL

struct retro_core_option_v2_category option_cats_ro[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_RO,
      CATEGORY_SYSTEM_INFO_0_RO
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_RO,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_RO
#else
      CATEGORY_VIDEO_INFO_1_RO
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_RO,
      CATEGORY_AUDIO_INFO_0_RO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_RO,
      CATEGORY_INPUT_INFO_0_RO
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_RO,
      CATEGORY_PERFORMANCE_INFO_0_RO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ro[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_RO,
      NULL,
      MGBA_GB_MODEL_INFO_0_RO,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_RO },
         { "Game Boy",         OPTION_VAL_GAME_BOY_RO },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_RO },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_RO },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_RO },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_RO,
      NULL,
      MGBA_USE_BIOS_INFO_0_RO,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_RO,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_RO,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_RO,
      NULL,
      MGBA_GB_COLORS_INFO_0_RO,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_RO },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_RO,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_RO,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_RO },
         { "1", OPTION_VAL_1_RO },
         { "2", OPTION_VAL_2_RO },
         { "3", OPTION_VAL_3_RO },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_RO,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_RO,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_RO,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_RO,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_RO },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_RO },
         { "Auto", OPTION_VAL_AUTO_RO },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_RO,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_RO,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_RO },
         { "mix_smart",         OPTION_VAL_MIX_SMART_RO },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_RO },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_RO },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_RO,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_RO,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_RO,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_RO,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_RO,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_RO,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_RO },
         { "10", OPTION_VAL_10_RO },
         { "15", OPTION_VAL_15_RO },
         { "20", OPTION_VAL_20_RO },
         { "25", OPTION_VAL_25_RO },
         { "30", OPTION_VAL_30_RO },
         { "35", OPTION_VAL_35_RO },
         { "40", OPTION_VAL_40_RO },
         { "45", OPTION_VAL_45_RO },
         { "50", OPTION_VAL_50_RO },
         { "55", OPTION_VAL_55_RO },
         { "60", OPTION_VAL_60_RO },
         { "65", OPTION_VAL_65_RO },
         { "70", OPTION_VAL_70_RO },
         { "75", OPTION_VAL_75_RO },
         { "80", OPTION_VAL_80_RO },
         { "85", OPTION_VAL_85_RO },
         { "90", OPTION_VAL_90_RO },
         { "95", OPTION_VAL_95_RO },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_RO,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_RO,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_RO,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_RO,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_RO },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_RO,
      NULL,
      MGBA_FORCE_GBP_INFO_0_RO,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_RO,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_RO,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_RO },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_RO },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_RO },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_RO,
      NULL,
      MGBA_FRAMESKIP_INFO_0_RO,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_RO },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_RO },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_RO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_RO,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_RO,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_RO,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_RO,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ro = {
   option_cats_ro,
   option_defs_ro
};

/* RETRO_LANGUAGE_RU */

#define CATEGORY_SYSTEM_LABEL_RU "Системные"
#define CATEGORY_SYSTEM_INFO_0_RU "Выбор модели устройства и базовые настройки BIOS."
#define CATEGORY_VIDEO_LABEL_RU "Видео"
#define CATEGORY_VIDEO_INFO_0_RU "Настройки палитры DMG, SGB-рамок, цветокоррекции, эффекта двоения ЖК-дисплея."
#define CATEGORY_VIDEO_INFO_1_RU "Настройка палитры DMG / рамок SGB."
#define CATEGORY_AUDIO_LABEL_RU "Аудио"
#define CATEGORY_AUDIO_INFO_0_RU "Настройки фильтрации звука."
#define CATEGORY_INPUT_LABEL_RU "Управление и вспом. устройства"
#define CATEGORY_INPUT_INFO_0_RU "Настройки параметров ввода, сенсора и отдачи контроллера."
#define CATEGORY_PERFORMANCE_LABEL_RU "Производительность"
#define CATEGORY_PERFORMANCE_INFO_0_RU "Настройки удаления циклов простоя / пропуска кадров."
#define MGBA_GB_MODEL_LABEL_RU "Модель Game Boy (перезапуск)"
#define MGBA_GB_MODEL_INFO_0_RU "Запускает загружаемый контент на определённой модели Game Boy. Режим 'Авто' устанавливает наиболее подходящую систему для текущей игры."
#define OPTION_VAL_AUTODETECT_RU "Авто"
#define OPTION_VAL_GAME_BOY_RU NULL
#define OPTION_VAL_SUPER_GAME_BOY_RU NULL
#define OPTION_VAL_GAME_BOY_COLOR_RU NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_RU NULL
#define MGBA_USE_BIOS_LABEL_RU "Использовать образ BIOS (перезапуск)"
#define MGBA_USE_BIOS_INFO_0_RU "Использовать для эмуляции консоли официальный BIOS/загрузчик, при наличии образа в системном каталоге RetroArch."
#define MGBA_SKIP_BIOS_LABEL_RU "Пропуск заставки BIOS (перезапуск)"
#define MGBA_SKIP_BIOS_INFO_0_RU "Пропускать начальную анимацию при использовании официального BIOS/загрузчика. Не работает, если выключена опция 'Использовать образ BIOS'."
#define MGBA_GB_COLORS_LABEL_RU "Стандартная палитра Game Boy"
#define MGBA_GB_COLORS_INFO_0_RU "Выбор палитры, используемой для игр Game Boy, несовместимых с Game Boy Color / Super Game Boy или в случае принудительной установки модели Game Boy."
#define OPTION_VAL_GRAYSCALE_RU "Оттенки серого"
#define MGBA_GB_COLORS_PRESET_LABEL_RU "Встроенные пресеты палитр Game Boy (перезапуск)"
#define MGBA_GB_COLORS_PRESET_INFO_0_RU "Использовать палитры игр Game Boy, для которых есть встроенные пресеты на Game Boy Color или Super Game Boy."
#define OPTION_VAL_0_RU "Стандартный пресет Game Boy"
#define OPTION_VAL_1_RU "Только пресеты Game Boy Color"
#define OPTION_VAL_2_RU "Только пресеты Super Game Boy"
#define OPTION_VAL_3_RU "Любые доступные пресеты"
#define MGBA_SGB_BORDERS_LABEL_RU "Рамки Super Game Boy (перезапуск)"
#define MGBA_SGB_BORDERS_INFO_0_RU "Отображать рамки при запуске игр, улучшенных для Super Game Boy."
#define MGBA_COLOR_CORRECTION_LABEL_RU "Коррекция цвета"
#define MGBA_COLOR_CORRECTION_INFO_0_RU "Настройка отображаемых цветов для соответствия дисплеям реальных GBA/GBC."
#define OPTION_VAL_AUTO_RU "Авто"
#define MGBA_INTERFRAME_BLENDING_LABEL_RU "Межкадровое смешение"
#define MGBA_INTERFRAME_BLENDING_INFO_0_RU "Имитирует эффект двоения ЖК-дисплея. 'Простое' смешивает текущие и предшествующие кадры в пропорции 50:50. 'Умное' пытается определять мерцание экрана и делает смешение 50:50 только для затрагиваемых пикселей. 'Двоение ЖК' имитирует естественное время отклика жк-дисплея объединением нескольких буферизованных кадров. 'Простое' или 'Умное' смешение требуется в играх, широко использующих двоение для эффектов прозрачности (Wave Racer, Chikyuu Kaihou Gun ZAS, F-Zero, серия Boktai...)."
#define OPTION_VAL_MIX_RU "Простое"
#define OPTION_VAL_MIX_SMART_RU "Умное"
#define OPTION_VAL_LCD_GHOSTING_RU "Двоение ЖК (точно)"
#define OPTION_VAL_LCD_GHOSTING_FAST_RU "Двоение ЖК (быстро)"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_RU "Аудиофильтр"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_RU "Фильтр нижних частот"
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_RU "Включает низкочастотный аудиофильтр для смягчения воспроизводимого звука."
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_RU "Уровень аудиофильтра"
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_RU "Уровень фильтрации"
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_RU "Установка частоты среза для низкочастотного аудиофильтра. Большие значения усиливают эффект фильтрации за счёт влияния на более широкий диапазон высоких частот."
#define OPTION_VAL_5_RU NULL
#define OPTION_VAL_10_RU NULL
#define OPTION_VAL_15_RU NULL
#define OPTION_VAL_20_RU NULL
#define OPTION_VAL_25_RU NULL
#define OPTION_VAL_30_RU NULL
#define OPTION_VAL_35_RU NULL
#define OPTION_VAL_40_RU NULL
#define OPTION_VAL_45_RU NULL
#define OPTION_VAL_50_RU NULL
#define OPTION_VAL_55_RU NULL
#define OPTION_VAL_60_RU NULL
#define OPTION_VAL_65_RU NULL
#define OPTION_VAL_70_RU NULL
#define OPTION_VAL_75_RU NULL
#define OPTION_VAL_80_RU NULL
#define OPTION_VAL_85_RU NULL
#define OPTION_VAL_90_RU NULL
#define OPTION_VAL_95_RU NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_RU "Разрешать нажатия в разные стороны"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_RU "Позволяет нажимать / быстро менять / зажимать одновременно направления влево и вправо (или вверх и вниз). Может вызывать глитчи, связанные с перемещением."
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_RU "Уровень датчика света"
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_RU "Устанавливает интенсивность окружающего освещения. Может использоваться в играх с картриджами, оснащёнными датчиком света (напр. серия Boktai)."
#define OPTION_VAL_SENSOR_RU "Использовать датчик устройства"
#define MGBA_FORCE_GBP_LABEL_RU "Отдача Game Boy Player (перезапуск)"
#define MGBA_FORCE_GBP_INFO_0_RU "При включении активирует отдачу для совместимых игр с логотипом Game Boy Player на экране загрузки. Из-за особенностей реализации Nintendo, в некоторых играх данная функция может вызывать баги в виде подтормаживаний или мерцания."
#define MGBA_IDLE_OPTIMIZATION_LABEL_RU "Удаление циклов простоя"
#define MGBA_IDLE_OPTIMIZATION_INFO_0_RU "Уменьшает нагрузку на систему с помощью оптимизации т.н. 'циклов простоя' - пустых частей кода, которые CPU обрабатывает на полной скорости. Повышает производительность и рекомендуется для включения на слабых устройствах."
#define OPTION_VAL_REMOVE_KNOWN_RU "Удалять известные"
#define OPTION_VAL_DETECT_AND_REMOVE_RU "Определять и удалять"
#define OPTION_VAL_DON_T_REMOVE_RU "Не удалять"
#define MGBA_FRAMESKIP_LABEL_RU "Пропуск кадров"
#define MGBA_FRAMESKIP_INFO_0_RU "Пропускать кадры, чтобы избежать опустошения аудиобуфера (треск). Улучшает производительность, но снижает плавность изображения. В режиме 'Авто' пропуск кадров регулируется фронтендом. 'Авто (граница)' использует настройку 'Граница пропуска кадров (%)'. 'Фикс. интервал' использует настройку 'Интервал пропуска кадров'."
#define OPTION_VAL_AUTO_THRESHOLD_RU "Авто (граница)"
#define OPTION_VAL_FIXED_INTERVAL_RU "Фикс. интервал"
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_RU "Граница пропуска кадров (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_RU "Порог заполнения аудиобуфера (в процентах), ниже которого будет использоваться пропуск кадров при установке опции 'Пропуск кадров' в режим 'Авто (граница)'. Большие значения снижают вероятность появления треска за счёт более частого пропуска кадров."
#define MGBA_FRAMESKIP_INTERVAL_LABEL_RU "Интервал пропуска кадров"
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_RU "Количество кадров, пропускаемых после рендеринга при установке опции 'Пропуск кадров' в режим 'Фикс. значение'. Например: '0' = 60 кадр/с, '1' = 30 кадр/с, '2' = 15 кадр/с и т.д."

struct retro_core_option_v2_category option_cats_ru[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_RU,
      CATEGORY_SYSTEM_INFO_0_RU
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_RU,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_RU
#else
      CATEGORY_VIDEO_INFO_1_RU
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_RU,
      CATEGORY_AUDIO_INFO_0_RU
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_RU,
      CATEGORY_INPUT_INFO_0_RU
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_RU,
      CATEGORY_PERFORMANCE_INFO_0_RU
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ru[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_RU,
      NULL,
      MGBA_GB_MODEL_INFO_0_RU,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_RU },
         { "Game Boy",         OPTION_VAL_GAME_BOY_RU },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_RU },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_RU },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_RU },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_RU,
      NULL,
      MGBA_USE_BIOS_INFO_0_RU,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_RU,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_RU,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_RU,
      NULL,
      MGBA_GB_COLORS_INFO_0_RU,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_RU },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_RU,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_RU,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_RU },
         { "1", OPTION_VAL_1_RU },
         { "2", OPTION_VAL_2_RU },
         { "3", OPTION_VAL_3_RU },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_RU,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_RU,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_RU,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_RU,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_RU },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_RU },
         { "Auto", OPTION_VAL_AUTO_RU },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_RU,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_RU,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_RU },
         { "mix_smart",         OPTION_VAL_MIX_SMART_RU },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_RU },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_RU },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_RU,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_RU,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_RU,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_RU,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_RU,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_RU,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_RU },
         { "10", OPTION_VAL_10_RU },
         { "15", OPTION_VAL_15_RU },
         { "20", OPTION_VAL_20_RU },
         { "25", OPTION_VAL_25_RU },
         { "30", OPTION_VAL_30_RU },
         { "35", OPTION_VAL_35_RU },
         { "40", OPTION_VAL_40_RU },
         { "45", OPTION_VAL_45_RU },
         { "50", OPTION_VAL_50_RU },
         { "55", OPTION_VAL_55_RU },
         { "60", OPTION_VAL_60_RU },
         { "65", OPTION_VAL_65_RU },
         { "70", OPTION_VAL_70_RU },
         { "75", OPTION_VAL_75_RU },
         { "80", OPTION_VAL_80_RU },
         { "85", OPTION_VAL_85_RU },
         { "90", OPTION_VAL_90_RU },
         { "95", OPTION_VAL_95_RU },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_RU,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_RU,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_RU,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_RU,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_RU },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_RU,
      NULL,
      MGBA_FORCE_GBP_INFO_0_RU,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_RU,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_RU,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_RU },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_RU },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_RU },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_RU,
      NULL,
      MGBA_FRAMESKIP_INFO_0_RU,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_RU },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_RU },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_RU },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_RU,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_RU,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_RU,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_RU,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ru = {
   option_cats_ru,
   option_defs_ru
};

/* RETRO_LANGUAGE_SI */

#define CATEGORY_SYSTEM_LABEL_SI NULL
#define CATEGORY_SYSTEM_INFO_0_SI NULL
#define CATEGORY_VIDEO_LABEL_SI NULL
#define CATEGORY_VIDEO_INFO_0_SI NULL
#define CATEGORY_VIDEO_INFO_1_SI NULL
#define CATEGORY_AUDIO_LABEL_SI NULL
#define CATEGORY_AUDIO_INFO_0_SI NULL
#define CATEGORY_INPUT_LABEL_SI NULL
#define CATEGORY_INPUT_INFO_0_SI NULL
#define CATEGORY_PERFORMANCE_LABEL_SI NULL
#define CATEGORY_PERFORMANCE_INFO_0_SI NULL
#define MGBA_GB_MODEL_LABEL_SI NULL
#define MGBA_GB_MODEL_INFO_0_SI NULL
#define OPTION_VAL_AUTODETECT_SI NULL
#define OPTION_VAL_GAME_BOY_SI NULL
#define OPTION_VAL_SUPER_GAME_BOY_SI NULL
#define OPTION_VAL_GAME_BOY_COLOR_SI NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_SI NULL
#define MGBA_USE_BIOS_LABEL_SI NULL
#define MGBA_USE_BIOS_INFO_0_SI NULL
#define MGBA_SKIP_BIOS_LABEL_SI NULL
#define MGBA_SKIP_BIOS_INFO_0_SI NULL
#define MGBA_GB_COLORS_LABEL_SI NULL
#define MGBA_GB_COLORS_INFO_0_SI NULL
#define OPTION_VAL_GRAYSCALE_SI NULL
#define MGBA_GB_COLORS_PRESET_LABEL_SI NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_SI NULL
#define OPTION_VAL_0_SI NULL
#define OPTION_VAL_1_SI NULL
#define OPTION_VAL_2_SI NULL
#define OPTION_VAL_3_SI NULL
#define MGBA_SGB_BORDERS_LABEL_SI NULL
#define MGBA_SGB_BORDERS_INFO_0_SI NULL
#define MGBA_COLOR_CORRECTION_LABEL_SI NULL
#define MGBA_COLOR_CORRECTION_INFO_0_SI NULL
#define OPTION_VAL_AUTO_SI NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_SI NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_SI NULL
#define OPTION_VAL_MIX_SI NULL
#define OPTION_VAL_MIX_SMART_SI NULL
#define OPTION_VAL_LCD_GHOSTING_SI NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_SI NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_SI NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_SI NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_SI NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_SI NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_SI NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_SI NULL
#define OPTION_VAL_5_SI NULL
#define OPTION_VAL_10_SI NULL
#define OPTION_VAL_15_SI NULL
#define OPTION_VAL_20_SI NULL
#define OPTION_VAL_25_SI NULL
#define OPTION_VAL_30_SI NULL
#define OPTION_VAL_35_SI NULL
#define OPTION_VAL_40_SI NULL
#define OPTION_VAL_45_SI NULL
#define OPTION_VAL_50_SI NULL
#define OPTION_VAL_55_SI NULL
#define OPTION_VAL_60_SI NULL
#define OPTION_VAL_65_SI NULL
#define OPTION_VAL_70_SI NULL
#define OPTION_VAL_75_SI NULL
#define OPTION_VAL_80_SI NULL
#define OPTION_VAL_85_SI NULL
#define OPTION_VAL_90_SI NULL
#define OPTION_VAL_95_SI NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_SI NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_SI NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_SI NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_SI NULL
#define OPTION_VAL_SENSOR_SI NULL
#define MGBA_FORCE_GBP_LABEL_SI NULL
#define MGBA_FORCE_GBP_INFO_0_SI NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_SI NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_SI NULL
#define OPTION_VAL_REMOVE_KNOWN_SI NULL
#define OPTION_VAL_DETECT_AND_REMOVE_SI NULL
#define OPTION_VAL_DON_T_REMOVE_SI NULL
#define MGBA_FRAMESKIP_LABEL_SI NULL
#define MGBA_FRAMESKIP_INFO_0_SI NULL
#define OPTION_VAL_AUTO_THRESHOLD_SI NULL
#define OPTION_VAL_FIXED_INTERVAL_SI NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_SI NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_SI NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_SI NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_SI NULL

struct retro_core_option_v2_category option_cats_si[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_SI,
      CATEGORY_SYSTEM_INFO_0_SI
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_SI,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_SI
#else
      CATEGORY_VIDEO_INFO_1_SI
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SI,
      CATEGORY_AUDIO_INFO_0_SI
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SI,
      CATEGORY_INPUT_INFO_0_SI
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_SI,
      CATEGORY_PERFORMANCE_INFO_0_SI
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_si[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_SI,
      NULL,
      MGBA_GB_MODEL_INFO_0_SI,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_SI },
         { "Game Boy",         OPTION_VAL_GAME_BOY_SI },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_SI },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_SI },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_SI },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_SI,
      NULL,
      MGBA_USE_BIOS_INFO_0_SI,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_SI,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_SI,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_SI,
      NULL,
      MGBA_GB_COLORS_INFO_0_SI,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_SI },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_SI,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_SI,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_SI },
         { "1", OPTION_VAL_1_SI },
         { "2", OPTION_VAL_2_SI },
         { "3", OPTION_VAL_3_SI },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_SI,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_SI,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_SI,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_SI,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_SI },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_SI },
         { "Auto", OPTION_VAL_AUTO_SI },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_SI,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_SI,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_SI },
         { "mix_smart",         OPTION_VAL_MIX_SMART_SI },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_SI },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_SI },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_SI,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_SI,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_SI,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_SI,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_SI,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_SI,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_SI },
         { "10", OPTION_VAL_10_SI },
         { "15", OPTION_VAL_15_SI },
         { "20", OPTION_VAL_20_SI },
         { "25", OPTION_VAL_25_SI },
         { "30", OPTION_VAL_30_SI },
         { "35", OPTION_VAL_35_SI },
         { "40", OPTION_VAL_40_SI },
         { "45", OPTION_VAL_45_SI },
         { "50", OPTION_VAL_50_SI },
         { "55", OPTION_VAL_55_SI },
         { "60", OPTION_VAL_60_SI },
         { "65", OPTION_VAL_65_SI },
         { "70", OPTION_VAL_70_SI },
         { "75", OPTION_VAL_75_SI },
         { "80", OPTION_VAL_80_SI },
         { "85", OPTION_VAL_85_SI },
         { "90", OPTION_VAL_90_SI },
         { "95", OPTION_VAL_95_SI },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_SI,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_SI,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_SI,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_SI,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_SI },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_SI,
      NULL,
      MGBA_FORCE_GBP_INFO_0_SI,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_SI,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_SI,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_SI },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_SI },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_SI },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_SI,
      NULL,
      MGBA_FRAMESKIP_INFO_0_SI,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_SI },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_SI },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_SI },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_SI,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_SI,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_SI,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_SI,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_si = {
   option_cats_si,
   option_defs_si
};

/* RETRO_LANGUAGE_SK */

#define CATEGORY_SYSTEM_LABEL_SK "Systém"
#define CATEGORY_SYSTEM_INFO_0_SK NULL
#define CATEGORY_VIDEO_LABEL_SK NULL
#define CATEGORY_VIDEO_INFO_0_SK NULL
#define CATEGORY_VIDEO_INFO_1_SK NULL
#define CATEGORY_AUDIO_LABEL_SK "Zvuk"
#define CATEGORY_AUDIO_INFO_0_SK NULL
#define CATEGORY_INPUT_LABEL_SK NULL
#define CATEGORY_INPUT_INFO_0_SK NULL
#define CATEGORY_PERFORMANCE_LABEL_SK "Výkon"
#define CATEGORY_PERFORMANCE_INFO_0_SK NULL
#define MGBA_GB_MODEL_LABEL_SK NULL
#define MGBA_GB_MODEL_INFO_0_SK NULL
#define OPTION_VAL_AUTODETECT_SK "Automatická detekcia"
#define OPTION_VAL_GAME_BOY_SK NULL
#define OPTION_VAL_SUPER_GAME_BOY_SK NULL
#define OPTION_VAL_GAME_BOY_COLOR_SK NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_SK NULL
#define MGBA_USE_BIOS_LABEL_SK NULL
#define MGBA_USE_BIOS_INFO_0_SK NULL
#define MGBA_SKIP_BIOS_LABEL_SK NULL
#define MGBA_SKIP_BIOS_INFO_0_SK NULL
#define MGBA_GB_COLORS_LABEL_SK NULL
#define MGBA_GB_COLORS_INFO_0_SK NULL
#define OPTION_VAL_GRAYSCALE_SK NULL
#define MGBA_GB_COLORS_PRESET_LABEL_SK NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_SK NULL
#define OPTION_VAL_0_SK NULL
#define OPTION_VAL_1_SK NULL
#define OPTION_VAL_2_SK NULL
#define OPTION_VAL_3_SK NULL
#define MGBA_SGB_BORDERS_LABEL_SK NULL
#define MGBA_SGB_BORDERS_INFO_0_SK NULL
#define MGBA_COLOR_CORRECTION_LABEL_SK "Korekcia farieb"
#define MGBA_COLOR_CORRECTION_INFO_0_SK NULL
#define OPTION_VAL_AUTO_SK NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_SK NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_SK NULL
#define OPTION_VAL_MIX_SK "Jednoduché"
#define OPTION_VAL_MIX_SMART_SK "Inteligentné"
#define OPTION_VAL_LCD_GHOSTING_SK NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_SK NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_SK "Zvukový filter"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_SK NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_SK NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_SK NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_SK NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_SK NULL
#define OPTION_VAL_5_SK NULL
#define OPTION_VAL_10_SK NULL
#define OPTION_VAL_15_SK NULL
#define OPTION_VAL_20_SK NULL
#define OPTION_VAL_25_SK NULL
#define OPTION_VAL_30_SK NULL
#define OPTION_VAL_35_SK NULL
#define OPTION_VAL_40_SK NULL
#define OPTION_VAL_45_SK NULL
#define OPTION_VAL_50_SK NULL
#define OPTION_VAL_55_SK NULL
#define OPTION_VAL_60_SK NULL
#define OPTION_VAL_65_SK NULL
#define OPTION_VAL_70_SK NULL
#define OPTION_VAL_75_SK NULL
#define OPTION_VAL_80_SK NULL
#define OPTION_VAL_85_SK NULL
#define OPTION_VAL_90_SK NULL
#define OPTION_VAL_95_SK NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_SK NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_SK NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_SK NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_SK NULL
#define OPTION_VAL_SENSOR_SK NULL
#define MGBA_FORCE_GBP_LABEL_SK NULL
#define MGBA_FORCE_GBP_INFO_0_SK NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_SK NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_SK NULL
#define OPTION_VAL_REMOVE_KNOWN_SK NULL
#define OPTION_VAL_DETECT_AND_REMOVE_SK NULL
#define OPTION_VAL_DON_T_REMOVE_SK NULL
#define MGBA_FRAMESKIP_LABEL_SK "Preskočenie snímky"
#define MGBA_FRAMESKIP_INFO_0_SK NULL
#define OPTION_VAL_AUTO_THRESHOLD_SK NULL
#define OPTION_VAL_FIXED_INTERVAL_SK NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_SK "Prah preskočenia snímky (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_SK NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_SK "Interval preskočenia snímky"
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_SK NULL

struct retro_core_option_v2_category option_cats_sk[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_SK,
      CATEGORY_SYSTEM_INFO_0_SK
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_SK,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_SK
#else
      CATEGORY_VIDEO_INFO_1_SK
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SK,
      CATEGORY_AUDIO_INFO_0_SK
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SK,
      CATEGORY_INPUT_INFO_0_SK
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_SK,
      CATEGORY_PERFORMANCE_INFO_0_SK
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sk[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_SK,
      NULL,
      MGBA_GB_MODEL_INFO_0_SK,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_SK },
         { "Game Boy",         OPTION_VAL_GAME_BOY_SK },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_SK },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_SK },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_SK },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_SK,
      NULL,
      MGBA_USE_BIOS_INFO_0_SK,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_SK,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_SK,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_SK,
      NULL,
      MGBA_GB_COLORS_INFO_0_SK,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_SK },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_SK,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_SK,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_SK },
         { "1", OPTION_VAL_1_SK },
         { "2", OPTION_VAL_2_SK },
         { "3", OPTION_VAL_3_SK },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_SK,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_SK,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_SK,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_SK,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_SK },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_SK },
         { "Auto", OPTION_VAL_AUTO_SK },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_SK,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_SK,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_SK },
         { "mix_smart",         OPTION_VAL_MIX_SMART_SK },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_SK },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_SK },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_SK,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_SK,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_SK,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_SK,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_SK,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_SK,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_SK },
         { "10", OPTION_VAL_10_SK },
         { "15", OPTION_VAL_15_SK },
         { "20", OPTION_VAL_20_SK },
         { "25", OPTION_VAL_25_SK },
         { "30", OPTION_VAL_30_SK },
         { "35", OPTION_VAL_35_SK },
         { "40", OPTION_VAL_40_SK },
         { "45", OPTION_VAL_45_SK },
         { "50", OPTION_VAL_50_SK },
         { "55", OPTION_VAL_55_SK },
         { "60", OPTION_VAL_60_SK },
         { "65", OPTION_VAL_65_SK },
         { "70", OPTION_VAL_70_SK },
         { "75", OPTION_VAL_75_SK },
         { "80", OPTION_VAL_80_SK },
         { "85", OPTION_VAL_85_SK },
         { "90", OPTION_VAL_90_SK },
         { "95", OPTION_VAL_95_SK },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_SK,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_SK,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_SK,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_SK,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_SK },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_SK,
      NULL,
      MGBA_FORCE_GBP_INFO_0_SK,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_SK,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_SK,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_SK },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_SK },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_SK },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_SK,
      NULL,
      MGBA_FRAMESKIP_INFO_0_SK,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_SK },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_SK },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_SK },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_SK,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_SK,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_SK,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_SK,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sk = {
   option_cats_sk,
   option_defs_sk
};

/* RETRO_LANGUAGE_SR */

#define CATEGORY_SYSTEM_LABEL_SR NULL
#define CATEGORY_SYSTEM_INFO_0_SR NULL
#define CATEGORY_VIDEO_LABEL_SR NULL
#define CATEGORY_VIDEO_INFO_0_SR NULL
#define CATEGORY_VIDEO_INFO_1_SR NULL
#define CATEGORY_AUDIO_LABEL_SR "Zvuk"
#define CATEGORY_AUDIO_INFO_0_SR NULL
#define CATEGORY_INPUT_LABEL_SR NULL
#define CATEGORY_INPUT_INFO_0_SR NULL
#define CATEGORY_PERFORMANCE_LABEL_SR NULL
#define CATEGORY_PERFORMANCE_INFO_0_SR NULL
#define MGBA_GB_MODEL_LABEL_SR NULL
#define MGBA_GB_MODEL_INFO_0_SR NULL
#define OPTION_VAL_AUTODETECT_SR NULL
#define OPTION_VAL_GAME_BOY_SR NULL
#define OPTION_VAL_SUPER_GAME_BOY_SR NULL
#define OPTION_VAL_GAME_BOY_COLOR_SR NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_SR NULL
#define MGBA_USE_BIOS_LABEL_SR NULL
#define MGBA_USE_BIOS_INFO_0_SR NULL
#define MGBA_SKIP_BIOS_LABEL_SR NULL
#define MGBA_SKIP_BIOS_INFO_0_SR NULL
#define MGBA_GB_COLORS_LABEL_SR NULL
#define MGBA_GB_COLORS_INFO_0_SR NULL
#define OPTION_VAL_GRAYSCALE_SR NULL
#define MGBA_GB_COLORS_PRESET_LABEL_SR NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_SR NULL
#define OPTION_VAL_0_SR NULL
#define OPTION_VAL_1_SR NULL
#define OPTION_VAL_2_SR NULL
#define OPTION_VAL_3_SR NULL
#define MGBA_SGB_BORDERS_LABEL_SR NULL
#define MGBA_SGB_BORDERS_INFO_0_SR NULL
#define MGBA_COLOR_CORRECTION_LABEL_SR NULL
#define MGBA_COLOR_CORRECTION_INFO_0_SR NULL
#define OPTION_VAL_AUTO_SR NULL
#define MGBA_INTERFRAME_BLENDING_LABEL_SR NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_SR NULL
#define OPTION_VAL_MIX_SR NULL
#define OPTION_VAL_MIX_SMART_SR NULL
#define OPTION_VAL_LCD_GHOSTING_SR NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_SR NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_SR NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_SR NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_SR NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_SR NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_SR NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_SR NULL
#define OPTION_VAL_5_SR NULL
#define OPTION_VAL_10_SR NULL
#define OPTION_VAL_15_SR NULL
#define OPTION_VAL_20_SR NULL
#define OPTION_VAL_25_SR NULL
#define OPTION_VAL_30_SR NULL
#define OPTION_VAL_35_SR NULL
#define OPTION_VAL_40_SR NULL
#define OPTION_VAL_45_SR NULL
#define OPTION_VAL_50_SR NULL
#define OPTION_VAL_55_SR NULL
#define OPTION_VAL_60_SR NULL
#define OPTION_VAL_65_SR NULL
#define OPTION_VAL_70_SR NULL
#define OPTION_VAL_75_SR NULL
#define OPTION_VAL_80_SR NULL
#define OPTION_VAL_85_SR NULL
#define OPTION_VAL_90_SR NULL
#define OPTION_VAL_95_SR NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_SR NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_SR NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_SR NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_SR NULL
#define OPTION_VAL_SENSOR_SR NULL
#define MGBA_FORCE_GBP_LABEL_SR NULL
#define MGBA_FORCE_GBP_INFO_0_SR NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_SR NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_SR NULL
#define OPTION_VAL_REMOVE_KNOWN_SR NULL
#define OPTION_VAL_DETECT_AND_REMOVE_SR NULL
#define OPTION_VAL_DON_T_REMOVE_SR NULL
#define MGBA_FRAMESKIP_LABEL_SR NULL
#define MGBA_FRAMESKIP_INFO_0_SR NULL
#define OPTION_VAL_AUTO_THRESHOLD_SR NULL
#define OPTION_VAL_FIXED_INTERVAL_SR NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_SR NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_SR NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_SR NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_SR NULL

struct retro_core_option_v2_category option_cats_sr[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_SR,
      CATEGORY_SYSTEM_INFO_0_SR
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_SR,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_SR
#else
      CATEGORY_VIDEO_INFO_1_SR
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SR,
      CATEGORY_AUDIO_INFO_0_SR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SR,
      CATEGORY_INPUT_INFO_0_SR
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_SR,
      CATEGORY_PERFORMANCE_INFO_0_SR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sr[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_SR,
      NULL,
      MGBA_GB_MODEL_INFO_0_SR,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_SR },
         { "Game Boy",         OPTION_VAL_GAME_BOY_SR },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_SR },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_SR },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_SR },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_SR,
      NULL,
      MGBA_USE_BIOS_INFO_0_SR,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_SR,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_SR,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_SR,
      NULL,
      MGBA_GB_COLORS_INFO_0_SR,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_SR },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_SR,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_SR,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_SR },
         { "1", OPTION_VAL_1_SR },
         { "2", OPTION_VAL_2_SR },
         { "3", OPTION_VAL_3_SR },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_SR,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_SR,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_SR,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_SR,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_SR },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_SR },
         { "Auto", OPTION_VAL_AUTO_SR },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_SR,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_SR,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_SR },
         { "mix_smart",         OPTION_VAL_MIX_SMART_SR },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_SR },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_SR },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_SR,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_SR,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_SR,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_SR,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_SR,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_SR,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_SR },
         { "10", OPTION_VAL_10_SR },
         { "15", OPTION_VAL_15_SR },
         { "20", OPTION_VAL_20_SR },
         { "25", OPTION_VAL_25_SR },
         { "30", OPTION_VAL_30_SR },
         { "35", OPTION_VAL_35_SR },
         { "40", OPTION_VAL_40_SR },
         { "45", OPTION_VAL_45_SR },
         { "50", OPTION_VAL_50_SR },
         { "55", OPTION_VAL_55_SR },
         { "60", OPTION_VAL_60_SR },
         { "65", OPTION_VAL_65_SR },
         { "70", OPTION_VAL_70_SR },
         { "75", OPTION_VAL_75_SR },
         { "80", OPTION_VAL_80_SR },
         { "85", OPTION_VAL_85_SR },
         { "90", OPTION_VAL_90_SR },
         { "95", OPTION_VAL_95_SR },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_SR,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_SR,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_SR,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_SR,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_SR },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_SR,
      NULL,
      MGBA_FORCE_GBP_INFO_0_SR,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_SR,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_SR,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_SR },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_SR },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_SR },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_SR,
      NULL,
      MGBA_FRAMESKIP_INFO_0_SR,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_SR },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_SR },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_SR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_SR,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_SR,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_SR,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_SR,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sr = {
   option_cats_sr,
   option_defs_sr
};

/* RETRO_LANGUAGE_SV */

#define CATEGORY_SYSTEM_LABEL_SV NULL
#define CATEGORY_SYSTEM_INFO_0_SV NULL
#define CATEGORY_VIDEO_LABEL_SV "Bild"
#define CATEGORY_VIDEO_INFO_0_SV NULL
#define CATEGORY_VIDEO_INFO_1_SV NULL
#define CATEGORY_AUDIO_LABEL_SV "Ljud"
#define CATEGORY_AUDIO_INFO_0_SV NULL
#define CATEGORY_INPUT_LABEL_SV NULL
#define CATEGORY_INPUT_INFO_0_SV NULL
#define CATEGORY_PERFORMANCE_LABEL_SV "Prestanda"
#define CATEGORY_PERFORMANCE_INFO_0_SV NULL
#define MGBA_GB_MODEL_LABEL_SV NULL
#define MGBA_GB_MODEL_INFO_0_SV NULL
#define OPTION_VAL_AUTODETECT_SV NULL
#define OPTION_VAL_GAME_BOY_SV NULL
#define OPTION_VAL_SUPER_GAME_BOY_SV NULL
#define OPTION_VAL_GAME_BOY_COLOR_SV NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_SV NULL
#define MGBA_USE_BIOS_LABEL_SV NULL
#define MGBA_USE_BIOS_INFO_0_SV NULL
#define MGBA_SKIP_BIOS_LABEL_SV NULL
#define MGBA_SKIP_BIOS_INFO_0_SV NULL
#define MGBA_GB_COLORS_LABEL_SV NULL
#define MGBA_GB_COLORS_INFO_0_SV NULL
#define OPTION_VAL_GRAYSCALE_SV "Gråskala"
#define MGBA_GB_COLORS_PRESET_LABEL_SV NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_SV NULL
#define OPTION_VAL_0_SV NULL
#define OPTION_VAL_1_SV NULL
#define OPTION_VAL_2_SV NULL
#define OPTION_VAL_3_SV NULL
#define MGBA_SGB_BORDERS_LABEL_SV NULL
#define MGBA_SGB_BORDERS_INFO_0_SV NULL
#define MGBA_COLOR_CORRECTION_LABEL_SV "Färgkorrigering"
#define MGBA_COLOR_CORRECTION_INFO_0_SV NULL
#define OPTION_VAL_AUTO_SV "Automatiskt"
#define MGBA_INTERFRAME_BLENDING_LABEL_SV NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_SV NULL
#define OPTION_VAL_MIX_SV "Simpel"
#define OPTION_VAL_MIX_SMART_SV NULL
#define OPTION_VAL_LCD_GHOSTING_SV NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_SV NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_SV "Ljudfilter"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_SV NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_SV NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_SV NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_SV NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_SV NULL
#define OPTION_VAL_5_SV NULL
#define OPTION_VAL_10_SV NULL
#define OPTION_VAL_15_SV NULL
#define OPTION_VAL_20_SV NULL
#define OPTION_VAL_25_SV NULL
#define OPTION_VAL_30_SV NULL
#define OPTION_VAL_35_SV NULL
#define OPTION_VAL_40_SV "40 %"
#define OPTION_VAL_45_SV "45 %"
#define OPTION_VAL_50_SV "50 %"
#define OPTION_VAL_55_SV "55 %"
#define OPTION_VAL_60_SV "60 %"
#define OPTION_VAL_65_SV "65 %"
#define OPTION_VAL_70_SV "70 %"
#define OPTION_VAL_75_SV "75 %"
#define OPTION_VAL_80_SV "80 %"
#define OPTION_VAL_85_SV "85 %"
#define OPTION_VAL_90_SV "90 %"
#define OPTION_VAL_95_SV "95 %"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_SV NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_SV NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_SV NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_SV NULL
#define OPTION_VAL_SENSOR_SV NULL
#define MGBA_FORCE_GBP_LABEL_SV NULL
#define MGBA_FORCE_GBP_INFO_0_SV NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_SV NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_SV NULL
#define OPTION_VAL_REMOVE_KNOWN_SV NULL
#define OPTION_VAL_DETECT_AND_REMOVE_SV NULL
#define OPTION_VAL_DON_T_REMOVE_SV NULL
#define MGBA_FRAMESKIP_LABEL_SV NULL
#define MGBA_FRAMESKIP_INFO_0_SV NULL
#define OPTION_VAL_AUTO_THRESHOLD_SV NULL
#define OPTION_VAL_FIXED_INTERVAL_SV NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_SV NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_SV NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_SV NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_SV NULL

struct retro_core_option_v2_category option_cats_sv[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_SV,
      CATEGORY_SYSTEM_INFO_0_SV
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_SV,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_SV
#else
      CATEGORY_VIDEO_INFO_1_SV
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SV,
      CATEGORY_AUDIO_INFO_0_SV
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SV,
      CATEGORY_INPUT_INFO_0_SV
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_SV,
      CATEGORY_PERFORMANCE_INFO_0_SV
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sv[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_SV,
      NULL,
      MGBA_GB_MODEL_INFO_0_SV,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_SV },
         { "Game Boy",         OPTION_VAL_GAME_BOY_SV },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_SV },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_SV },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_SV },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_SV,
      NULL,
      MGBA_USE_BIOS_INFO_0_SV,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_SV,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_SV,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_SV,
      NULL,
      MGBA_GB_COLORS_INFO_0_SV,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_SV },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_SV,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_SV,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_SV },
         { "1", OPTION_VAL_1_SV },
         { "2", OPTION_VAL_2_SV },
         { "3", OPTION_VAL_3_SV },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_SV,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_SV,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_SV,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_SV,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_SV },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_SV },
         { "Auto", OPTION_VAL_AUTO_SV },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_SV,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_SV,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_SV },
         { "mix_smart",         OPTION_VAL_MIX_SMART_SV },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_SV },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_SV },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_SV,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_SV,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_SV,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_SV,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_SV,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_SV,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_SV },
         { "10", OPTION_VAL_10_SV },
         { "15", OPTION_VAL_15_SV },
         { "20", OPTION_VAL_20_SV },
         { "25", OPTION_VAL_25_SV },
         { "30", OPTION_VAL_30_SV },
         { "35", OPTION_VAL_35_SV },
         { "40", OPTION_VAL_40_SV },
         { "45", OPTION_VAL_45_SV },
         { "50", OPTION_VAL_50_SV },
         { "55", OPTION_VAL_55_SV },
         { "60", OPTION_VAL_60_SV },
         { "65", OPTION_VAL_65_SV },
         { "70", OPTION_VAL_70_SV },
         { "75", OPTION_VAL_75_SV },
         { "80", OPTION_VAL_80_SV },
         { "85", OPTION_VAL_85_SV },
         { "90", OPTION_VAL_90_SV },
         { "95", OPTION_VAL_95_SV },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_SV,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_SV,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_SV,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_SV,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_SV },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_SV,
      NULL,
      MGBA_FORCE_GBP_INFO_0_SV,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_SV,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_SV,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_SV },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_SV },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_SV },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_SV,
      NULL,
      MGBA_FRAMESKIP_INFO_0_SV,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_SV },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_SV },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_SV },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_SV,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_SV,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_SV,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_SV,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sv = {
   option_cats_sv,
   option_defs_sv
};

/* RETRO_LANGUAGE_TR */

#define CATEGORY_SYSTEM_LABEL_TR "Sistem"
#define CATEGORY_SYSTEM_INFO_0_TR "Temel donanım seçimini/BIOS parametrelerini yapılandırın."
#define CATEGORY_VIDEO_LABEL_TR NULL
#define CATEGORY_VIDEO_INFO_0_TR "DMG paletini/SGB kenarlıklarını/renk düzeltmeyi/LCD gölgelenme efektlerini yapılandırın."
#define CATEGORY_VIDEO_INFO_1_TR "DMG paletini/SGB kenarlıklarını yapılandırın."
#define CATEGORY_AUDIO_LABEL_TR "Ses"
#define CATEGORY_AUDIO_INFO_0_TR "Ses filtrelemeyi yapılandırın."
#define CATEGORY_INPUT_LABEL_TR "Giriş & Yardımcı Cihazlar"
#define CATEGORY_INPUT_INFO_0_TR "Kontrolcü/sensör girişi ve kontrolcü titreşim ayarlarını yapılandırın."
#define CATEGORY_PERFORMANCE_LABEL_TR "Performans"
#define CATEGORY_PERFORMANCE_INFO_0_TR "Boştaki döngüyü kaldırma/kare atlama parametrelerini yapılandırın."
#define MGBA_GB_MODEL_LABEL_TR "Game Boy Modeli (Yeniden Başlatılmalı)"
#define MGBA_GB_MODEL_INFO_0_TR "Yüklenen içeriği belirli bir Game Boy modeliyle çalıştırır. 'Otomatik Tespit' mevcut oyun için en uygun modeli seçecektir."
#define OPTION_VAL_AUTODETECT_TR "Otomatik Tespit"
#define OPTION_VAL_GAME_BOY_TR NULL
#define OPTION_VAL_SUPER_GAME_BOY_TR NULL
#define OPTION_VAL_GAME_BOY_COLOR_TR NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_TR NULL
#define MGBA_USE_BIOS_LABEL_TR "Bulunursa BIOS Dosyasını Kullan (Yeniden Başlatılmalı)"
#define MGBA_USE_BIOS_INFO_0_TR "RetroArch sistem dizininde varsa, taklit edilmiş donanım için resmi BIOS/önyükleyici kullanır."
#define MGBA_SKIP_BIOS_LABEL_TR "BIOS Sahnesini Atla (Yeniden Başlatılmalı)"
#define MGBA_SKIP_BIOS_INFO_0_TR "Resmi bir BIOS / önyükleyici kullanırken, başlangıç logosu animasyonunu atlayın. Bu ayar, 'Bulunursa BIOS Dosyasını Kullan' devre dışı bırakıldığında geçersiz sayılır."
#define MGBA_GB_COLORS_LABEL_TR "Varsayılan Game Boy Paleti"
#define MGBA_GB_COLORS_INFO_0_TR "Game Boy Color veya Super Game Boy uyumlu olmayan Game Boy oyunları için veya modelin Game Boy'a zorlanması durumunda hangi paletin kullanılacağını seçer."
#define OPTION_VAL_GRAYSCALE_TR "Gri Tonlama"
#define MGBA_GB_COLORS_PRESET_LABEL_TR "Donanım Ön Ayarlı Game Boy Paletleri (Yeniden Başlat)"
#define MGBA_GB_COLORS_PRESET_INFO_0_TR "Game Boy Color veya Super Game Boy üzerinde ön ayarları olan Game Boy oyunları için paletleri kullanın."
#define OPTION_VAL_0_TR "Varsayılan Game Boy ön ayarı"
#define OPTION_VAL_1_TR "Yalnızca Game Boy Color ön ayarları"
#define OPTION_VAL_2_TR "Yalnızca Super Game Boy ön ayarları"
#define OPTION_VAL_3_TR "Mevcut herhangi bir ön ayar"
#define MGBA_SGB_BORDERS_LABEL_TR "Super Game Boy Sınırlarını Kullan (Yeniden Başlatılmalı)"
#define MGBA_SGB_BORDERS_INFO_0_TR "Super Game Boy geliştirilmiş oyunlarını çalıştırırken Super Game Boy sınırlarını görüntüleyin."
#define MGBA_COLOR_CORRECTION_LABEL_TR "Renk Düzeltmesi"
#define MGBA_COLOR_CORRECTION_INFO_0_TR "Çıktı renklerini gerçek GBA / GBC donanımının görüntüsüyle eşleşecek şekilde ayarlar."
#define OPTION_VAL_AUTO_TR "Otomatik"
#define MGBA_INTERFRAME_BLENDING_LABEL_TR "Çerçeveler Arası Karıştırma"
#define MGBA_INTERFRAME_BLENDING_INFO_0_TR "LCD gölgelenme efektlerini taklit eder. 'Basit', mevcut ve önceki karelerin 50:50'lik bir karışımını gerçekleştirir. 'Akıllı' ekran titremesini algılamaya çalışır ve etkilenen piksellerde yalnızca 50:50'lik bir karışım gerçekleştirir. 'LCD Gölgeleme', birden çok arabelleğe alınmış çerçeveyi birleştirerek doğal LCD yanıt sürelerini taklit eder. Şeffaflık efektleri için LCD gölgelenmesinden agresif bir şekilde yararlanan oyunlar oynarken 'Basit' veya 'Akıllı' karıştırma gereklidir (Wave Race, Chikyuu Kaihou Gun ZAS, F-Zero, Boktai serisi...)."
#define OPTION_VAL_MIX_TR "Basit"
#define OPTION_VAL_MIX_SMART_TR "Akıllı"
#define OPTION_VAL_LCD_GHOSTING_TR "LCD Gölgeleme (Tam)"
#define OPTION_VAL_LCD_GHOSTING_FAST_TR "LCD Gölgeleme (Hızlı)"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_TR "Ses Filtresi"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_TR "Düşük Geçiş Filtresi"
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_TR "Oluşturulan sesin \"sertliğini\" azaltmak için düşük geçişli bir ses filtresini etkinleştirir."
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_TR "Ses Filtresi Seviyesi"
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_TR "Filtre Seviyesi"
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_TR "Düşük ses geçiş filtresinin kesme frekansını belirtin. Daha yüksek bir değer, yüksek frekans spektrumunun daha geniş bir aralığı azaltıldığı için filtrenin algılanan gücünü arttırır."
#define OPTION_VAL_5_TR "%5"
#define OPTION_VAL_10_TR "%10"
#define OPTION_VAL_15_TR "%15"
#define OPTION_VAL_20_TR "%20"
#define OPTION_VAL_25_TR "%25"
#define OPTION_VAL_30_TR "%30"
#define OPTION_VAL_35_TR NULL
#define OPTION_VAL_40_TR "%40"
#define OPTION_VAL_45_TR "%45"
#define OPTION_VAL_50_TR "%50"
#define OPTION_VAL_55_TR "%55"
#define OPTION_VAL_60_TR "%60"
#define OPTION_VAL_65_TR "%65"
#define OPTION_VAL_70_TR "%70"
#define OPTION_VAL_75_TR "%75"
#define OPTION_VAL_80_TR "%80"
#define OPTION_VAL_85_TR "%85"
#define OPTION_VAL_90_TR "%90"
#define OPTION_VAL_95_TR "%95"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_TR "Karşı Yönlü Girişe İzin Ver"
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_TR "Bunu etkinleştirmek aynı anda hem sola hem de sağa (veya yukarı ve aşağı) yönlere basma/hızlı değiştirme/tutma imkanı sağlar. Bu harekete dayalı hatalara neden olabilir."
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_TR "Güneş Sensörü Seviyesi"
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_TR "Ortamdaki güneş ışığı yoğunluğunu ayarlar. Kartuşlarında güneş sensörü bulunan oyunlar tarafından kullanılabilir, örneğin: Boktai serisi."
#define OPTION_VAL_SENSOR_TR "Varsa cihaz sensörünü kullanın"
#define MGBA_FORCE_GBP_LABEL_TR "Game Boy Player Titreşim (Yeniden Başlat)"
#define MGBA_FORCE_GBP_INFO_0_TR "Bunu etkinleştirmek, Game Boy Player açılış logosuna sahip uyumlu oyunların denetleyiciyi titretmesine için izin verecektir. Nintendo'nun bu özelliğin çalışması gerektiğine nasıl karar verdiğinden dolayı, bu oyunların bazılarında titreme veya gecikme gibi hatalara neden olabilir."
#define MGBA_IDLE_OPTIMIZATION_LABEL_TR "Boştaki Döngüyü Kaldır"
#define MGBA_IDLE_OPTIMIZATION_INFO_0_TR "Kodda hiçbir şeyin olmadığı, ancak CPU'nun tam hızda çalıştığı (boşta dönen bir araba gibi) \"boştaki döngüler\" olarak adlandırılan bölümleri düzenleyerek sistem yükünü azaltın. Performansı artırır ve düşük kaliteli donanımlarda etkinleştirilmelidir."
#define OPTION_VAL_REMOVE_KNOWN_TR "Bilinenleri Kaldır"
#define OPTION_VAL_DETECT_AND_REMOVE_TR "Algıla ve Kaldır"
#define OPTION_VAL_DON_T_REMOVE_TR "Kaldırma"
#define MGBA_FRAMESKIP_LABEL_TR "Kare Atlama"
#define MGBA_FRAMESKIP_INFO_0_TR "Ses önbelleğinin yetersiz çalışmasını (bozulmayı) önlemek için kareleri atlayın. Görsel pürüzsüzlük pahasına performansı artırır. 'Otomatik', ön uç tarafından önerildiğinde kareleri atlar. 'Otomatik (Eşik)', 'Kare Atlama Eşiği (%)' ayarını kullanır. 'Sabit Aralık', 'Kare Atlama Aralığı' ayarını kullanır."
#define OPTION_VAL_AUTO_THRESHOLD_TR "Otomatik (Eşik)"
#define OPTION_VAL_FIXED_INTERVAL_TR "Sabit Aralık"
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_TR "Kare Atlama Eşiği (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_TR "'Kare Atlama', 'Otomatik (Eşik)' olarak ayarlandığında, altındaki karelerin atlanacağı ses önbelleği doluluk eşiğini (yüzde) belirtir. Daha yüksek değerler, karelerin daha sık düşmesine neden olarak bozulma riskini azaltır."
#define MGBA_FRAMESKIP_INTERVAL_LABEL_TR "Kare Atlama Aralığı"
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_TR "'Kare Atlama', 'Sabit Aralık' olarak ayarlandığında, burada ayarlanan değer, bir kare oluşturulduktan sonra atlanan kare sayısıdır - yani '0' = 60 fps, '1' = 30 fps, '2' = 15 fps, vb."

struct retro_core_option_v2_category option_cats_tr[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_TR,
      CATEGORY_SYSTEM_INFO_0_TR
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_TR,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_TR
#else
      CATEGORY_VIDEO_INFO_1_TR
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_TR,
      CATEGORY_AUDIO_INFO_0_TR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_TR,
      CATEGORY_INPUT_INFO_0_TR
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_TR,
      CATEGORY_PERFORMANCE_INFO_0_TR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tr[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_TR,
      NULL,
      MGBA_GB_MODEL_INFO_0_TR,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_TR },
         { "Game Boy",         OPTION_VAL_GAME_BOY_TR },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_TR },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_TR },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_TR },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_TR,
      NULL,
      MGBA_USE_BIOS_INFO_0_TR,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_TR,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_TR,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_TR,
      NULL,
      MGBA_GB_COLORS_INFO_0_TR,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_TR },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_TR,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_TR,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_TR },
         { "1", OPTION_VAL_1_TR },
         { "2", OPTION_VAL_2_TR },
         { "3", OPTION_VAL_3_TR },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_TR,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_TR,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_TR,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_TR,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_TR },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_TR },
         { "Auto", OPTION_VAL_AUTO_TR },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_TR,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_TR,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_TR },
         { "mix_smart",         OPTION_VAL_MIX_SMART_TR },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_TR },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_TR },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_TR,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_TR,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_TR,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_TR,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_TR,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_TR,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_TR },
         { "10", OPTION_VAL_10_TR },
         { "15", OPTION_VAL_15_TR },
         { "20", OPTION_VAL_20_TR },
         { "25", OPTION_VAL_25_TR },
         { "30", OPTION_VAL_30_TR },
         { "35", OPTION_VAL_35_TR },
         { "40", OPTION_VAL_40_TR },
         { "45", OPTION_VAL_45_TR },
         { "50", OPTION_VAL_50_TR },
         { "55", OPTION_VAL_55_TR },
         { "60", OPTION_VAL_60_TR },
         { "65", OPTION_VAL_65_TR },
         { "70", OPTION_VAL_70_TR },
         { "75", OPTION_VAL_75_TR },
         { "80", OPTION_VAL_80_TR },
         { "85", OPTION_VAL_85_TR },
         { "90", OPTION_VAL_90_TR },
         { "95", OPTION_VAL_95_TR },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_TR,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_TR,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_TR,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_TR,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_TR },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_TR,
      NULL,
      MGBA_FORCE_GBP_INFO_0_TR,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_TR,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_TR,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_TR },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_TR },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_TR },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_TR,
      NULL,
      MGBA_FRAMESKIP_INFO_0_TR,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_TR },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_TR },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_TR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_TR,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_TR,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_TR,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_TR,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

/* RETRO_LANGUAGE_UK */

#define CATEGORY_SYSTEM_LABEL_UK "Система"
#define CATEGORY_SYSTEM_INFO_0_UK NULL
#define CATEGORY_VIDEO_LABEL_UK "Відео"
#define CATEGORY_VIDEO_INFO_0_UK NULL
#define CATEGORY_VIDEO_INFO_1_UK NULL
#define CATEGORY_AUDIO_LABEL_UK "Аудіо"
#define CATEGORY_AUDIO_INFO_0_UK NULL
#define CATEGORY_INPUT_LABEL_UK NULL
#define CATEGORY_INPUT_INFO_0_UK NULL
#define CATEGORY_PERFORMANCE_LABEL_UK "Продуктивність"
#define CATEGORY_PERFORMANCE_INFO_0_UK NULL
#define MGBA_GB_MODEL_LABEL_UK NULL
#define MGBA_GB_MODEL_INFO_0_UK NULL
#define OPTION_VAL_AUTODETECT_UK "Автовизначення"
#define OPTION_VAL_GAME_BOY_UK NULL
#define OPTION_VAL_SUPER_GAME_BOY_UK NULL
#define OPTION_VAL_GAME_BOY_COLOR_UK NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_UK NULL
#define MGBA_USE_BIOS_LABEL_UK NULL
#define MGBA_USE_BIOS_INFO_0_UK NULL
#define MGBA_SKIP_BIOS_LABEL_UK NULL
#define MGBA_SKIP_BIOS_INFO_0_UK NULL
#define MGBA_GB_COLORS_LABEL_UK NULL
#define MGBA_GB_COLORS_INFO_0_UK NULL
#define OPTION_VAL_GRAYSCALE_UK NULL
#define MGBA_GB_COLORS_PRESET_LABEL_UK NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_UK NULL
#define OPTION_VAL_0_UK NULL
#define OPTION_VAL_1_UK NULL
#define OPTION_VAL_2_UK NULL
#define OPTION_VAL_3_UK NULL
#define MGBA_SGB_BORDERS_LABEL_UK NULL
#define MGBA_SGB_BORDERS_INFO_0_UK NULL
#define MGBA_COLOR_CORRECTION_LABEL_UK NULL
#define MGBA_COLOR_CORRECTION_INFO_0_UK NULL
#define OPTION_VAL_AUTO_UK "Авто"
#define MGBA_INTERFRAME_BLENDING_LABEL_UK NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_UK NULL
#define OPTION_VAL_MIX_UK NULL
#define OPTION_VAL_MIX_SMART_UK NULL
#define OPTION_VAL_LCD_GHOSTING_UK NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_UK NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_UK "Аудіофільтр"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_UK NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_UK NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_UK NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_UK NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_UK "Визначає частоту зрізу звукового фільтра низьких частот. Більше значення збільшує сприйману 'силу' фільтра, оскільки ширший діапазон високочастотного спектру послаблюється."
#define OPTION_VAL_5_UK NULL
#define OPTION_VAL_10_UK NULL
#define OPTION_VAL_15_UK NULL
#define OPTION_VAL_20_UK NULL
#define OPTION_VAL_25_UK NULL
#define OPTION_VAL_30_UK NULL
#define OPTION_VAL_35_UK NULL
#define OPTION_VAL_40_UK NULL
#define OPTION_VAL_45_UK NULL
#define OPTION_VAL_50_UK NULL
#define OPTION_VAL_55_UK NULL
#define OPTION_VAL_60_UK NULL
#define OPTION_VAL_65_UK NULL
#define OPTION_VAL_70_UK NULL
#define OPTION_VAL_75_UK NULL
#define OPTION_VAL_80_UK NULL
#define OPTION_VAL_85_UK NULL
#define OPTION_VAL_90_UK NULL
#define OPTION_VAL_95_UK NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_UK NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_UK "Увімкнення цього дозволить одночасно натискати / швидко чергувати/утримувати одночасно ліворуч та праворуч (чи донизу) напрямки. Це може спричинити глітчі руху."
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_UK NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_UK NULL
#define OPTION_VAL_SENSOR_UK NULL
#define MGBA_FORCE_GBP_LABEL_UK NULL
#define MGBA_FORCE_GBP_INFO_0_UK NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_UK NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_UK NULL
#define OPTION_VAL_REMOVE_KNOWN_UK NULL
#define OPTION_VAL_DETECT_AND_REMOVE_UK NULL
#define OPTION_VAL_DON_T_REMOVE_UK NULL
#define MGBA_FRAMESKIP_LABEL_UK "Пропуск кадру"
#define MGBA_FRAMESKIP_INFO_0_UK NULL
#define OPTION_VAL_AUTO_THRESHOLD_UK NULL
#define OPTION_VAL_FIXED_INTERVAL_UK NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_UK "Межа пропуску кадрів (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_UK NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_UK NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_UK NULL

struct retro_core_option_v2_category option_cats_uk[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_UK,
      CATEGORY_SYSTEM_INFO_0_UK
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_UK,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_UK
#else
      CATEGORY_VIDEO_INFO_1_UK
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_UK,
      CATEGORY_AUDIO_INFO_0_UK
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_UK,
      CATEGORY_INPUT_INFO_0_UK
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_UK,
      CATEGORY_PERFORMANCE_INFO_0_UK
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_uk[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_UK,
      NULL,
      MGBA_GB_MODEL_INFO_0_UK,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_UK },
         { "Game Boy",         OPTION_VAL_GAME_BOY_UK },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_UK },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_UK },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_UK },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_UK,
      NULL,
      MGBA_USE_BIOS_INFO_0_UK,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_UK,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_UK,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_UK,
      NULL,
      MGBA_GB_COLORS_INFO_0_UK,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_UK },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_UK,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_UK,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_UK },
         { "1", OPTION_VAL_1_UK },
         { "2", OPTION_VAL_2_UK },
         { "3", OPTION_VAL_3_UK },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_UK,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_UK,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_UK,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_UK,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_UK },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_UK },
         { "Auto", OPTION_VAL_AUTO_UK },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_UK,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_UK,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_UK },
         { "mix_smart",         OPTION_VAL_MIX_SMART_UK },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_UK },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_UK },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_UK,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_UK,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_UK,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_UK,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_UK,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_UK,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_UK },
         { "10", OPTION_VAL_10_UK },
         { "15", OPTION_VAL_15_UK },
         { "20", OPTION_VAL_20_UK },
         { "25", OPTION_VAL_25_UK },
         { "30", OPTION_VAL_30_UK },
         { "35", OPTION_VAL_35_UK },
         { "40", OPTION_VAL_40_UK },
         { "45", OPTION_VAL_45_UK },
         { "50", OPTION_VAL_50_UK },
         { "55", OPTION_VAL_55_UK },
         { "60", OPTION_VAL_60_UK },
         { "65", OPTION_VAL_65_UK },
         { "70", OPTION_VAL_70_UK },
         { "75", OPTION_VAL_75_UK },
         { "80", OPTION_VAL_80_UK },
         { "85", OPTION_VAL_85_UK },
         { "90", OPTION_VAL_90_UK },
         { "95", OPTION_VAL_95_UK },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_UK,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_UK,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_UK,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_UK,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_UK },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_UK,
      NULL,
      MGBA_FORCE_GBP_INFO_0_UK,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_UK,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_UK,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_UK },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_UK },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_UK },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_UK,
      NULL,
      MGBA_FRAMESKIP_INFO_0_UK,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_UK },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_UK },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_UK },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_UK,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_UK,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_UK,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_UK,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_uk = {
   option_cats_uk,
   option_defs_uk
};

/* RETRO_LANGUAGE_VAL */

#define CATEGORY_SYSTEM_LABEL_VAL "Sistema"
#define CATEGORY_SYSTEM_INFO_0_VAL NULL
#define CATEGORY_VIDEO_LABEL_VAL "Vídeo"
#define CATEGORY_VIDEO_INFO_0_VAL NULL
#define CATEGORY_VIDEO_INFO_1_VAL NULL
#define CATEGORY_AUDIO_LABEL_VAL "Àudio"
#define CATEGORY_AUDIO_INFO_0_VAL NULL
#define CATEGORY_INPUT_LABEL_VAL NULL
#define CATEGORY_INPUT_INFO_0_VAL NULL
#define CATEGORY_PERFORMANCE_LABEL_VAL NULL
#define CATEGORY_PERFORMANCE_INFO_0_VAL NULL
#define MGBA_GB_MODEL_LABEL_VAL NULL
#define MGBA_GB_MODEL_INFO_0_VAL NULL
#define OPTION_VAL_AUTODETECT_VAL NULL
#define OPTION_VAL_GAME_BOY_VAL NULL
#define OPTION_VAL_SUPER_GAME_BOY_VAL NULL
#define OPTION_VAL_GAME_BOY_COLOR_VAL NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_VAL NULL
#define MGBA_USE_BIOS_LABEL_VAL NULL
#define MGBA_USE_BIOS_INFO_0_VAL NULL
#define MGBA_SKIP_BIOS_LABEL_VAL NULL
#define MGBA_SKIP_BIOS_INFO_0_VAL NULL
#define MGBA_GB_COLORS_LABEL_VAL NULL
#define MGBA_GB_COLORS_INFO_0_VAL NULL
#define OPTION_VAL_GRAYSCALE_VAL NULL
#define MGBA_GB_COLORS_PRESET_LABEL_VAL NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_VAL NULL
#define OPTION_VAL_0_VAL NULL
#define OPTION_VAL_1_VAL NULL
#define OPTION_VAL_2_VAL NULL
#define OPTION_VAL_3_VAL NULL
#define MGBA_SGB_BORDERS_LABEL_VAL NULL
#define MGBA_SGB_BORDERS_INFO_0_VAL NULL
#define MGBA_COLOR_CORRECTION_LABEL_VAL NULL
#define MGBA_COLOR_CORRECTION_INFO_0_VAL NULL
#define OPTION_VAL_AUTO_VAL "Selecció automàtica"
#define MGBA_INTERFRAME_BLENDING_LABEL_VAL NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_VAL NULL
#define OPTION_VAL_MIX_VAL NULL
#define OPTION_VAL_MIX_SMART_VAL NULL
#define OPTION_VAL_LCD_GHOSTING_VAL NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_VAL NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_VAL NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_VAL NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_VAL NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_VAL NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_VAL NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_VAL NULL
#define OPTION_VAL_5_VAL NULL
#define OPTION_VAL_10_VAL NULL
#define OPTION_VAL_15_VAL NULL
#define OPTION_VAL_20_VAL NULL
#define OPTION_VAL_25_VAL NULL
#define OPTION_VAL_30_VAL NULL
#define OPTION_VAL_35_VAL NULL
#define OPTION_VAL_40_VAL NULL
#define OPTION_VAL_45_VAL NULL
#define OPTION_VAL_50_VAL NULL
#define OPTION_VAL_55_VAL NULL
#define OPTION_VAL_60_VAL NULL
#define OPTION_VAL_65_VAL NULL
#define OPTION_VAL_70_VAL NULL
#define OPTION_VAL_75_VAL NULL
#define OPTION_VAL_80_VAL NULL
#define OPTION_VAL_85_VAL NULL
#define OPTION_VAL_90_VAL NULL
#define OPTION_VAL_95_VAL NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_VAL NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_VAL NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_VAL NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_VAL NULL
#define OPTION_VAL_SENSOR_VAL NULL
#define MGBA_FORCE_GBP_LABEL_VAL NULL
#define MGBA_FORCE_GBP_INFO_0_VAL NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_VAL NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_VAL NULL
#define OPTION_VAL_REMOVE_KNOWN_VAL NULL
#define OPTION_VAL_DETECT_AND_REMOVE_VAL NULL
#define OPTION_VAL_DON_T_REMOVE_VAL NULL
#define MGBA_FRAMESKIP_LABEL_VAL NULL
#define MGBA_FRAMESKIP_INFO_0_VAL NULL
#define OPTION_VAL_AUTO_THRESHOLD_VAL NULL
#define OPTION_VAL_FIXED_INTERVAL_VAL NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_VAL NULL
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_VAL NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_VAL NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_VAL NULL

struct retro_core_option_v2_category option_cats_val[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_VAL,
      CATEGORY_SYSTEM_INFO_0_VAL
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_VAL,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_VAL
#else
      CATEGORY_VIDEO_INFO_1_VAL
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_VAL,
      CATEGORY_AUDIO_INFO_0_VAL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_VAL,
      CATEGORY_INPUT_INFO_0_VAL
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_VAL,
      CATEGORY_PERFORMANCE_INFO_0_VAL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_val[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_VAL,
      NULL,
      MGBA_GB_MODEL_INFO_0_VAL,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_VAL },
         { "Game Boy",         OPTION_VAL_GAME_BOY_VAL },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_VAL },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_VAL },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_VAL },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_VAL,
      NULL,
      MGBA_USE_BIOS_INFO_0_VAL,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_VAL,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_VAL,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_VAL,
      NULL,
      MGBA_GB_COLORS_INFO_0_VAL,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_VAL },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_VAL,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_VAL,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_VAL },
         { "1", OPTION_VAL_1_VAL },
         { "2", OPTION_VAL_2_VAL },
         { "3", OPTION_VAL_3_VAL },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_VAL,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_VAL,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_VAL,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_VAL,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_VAL },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_VAL },
         { "Auto", OPTION_VAL_AUTO_VAL },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_VAL,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_VAL,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_VAL },
         { "mix_smart",         OPTION_VAL_MIX_SMART_VAL },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_VAL },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_VAL },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_VAL,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_VAL,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_VAL,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_VAL,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_VAL,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_VAL,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_VAL },
         { "10", OPTION_VAL_10_VAL },
         { "15", OPTION_VAL_15_VAL },
         { "20", OPTION_VAL_20_VAL },
         { "25", OPTION_VAL_25_VAL },
         { "30", OPTION_VAL_30_VAL },
         { "35", OPTION_VAL_35_VAL },
         { "40", OPTION_VAL_40_VAL },
         { "45", OPTION_VAL_45_VAL },
         { "50", OPTION_VAL_50_VAL },
         { "55", OPTION_VAL_55_VAL },
         { "60", OPTION_VAL_60_VAL },
         { "65", OPTION_VAL_65_VAL },
         { "70", OPTION_VAL_70_VAL },
         { "75", OPTION_VAL_75_VAL },
         { "80", OPTION_VAL_80_VAL },
         { "85", OPTION_VAL_85_VAL },
         { "90", OPTION_VAL_90_VAL },
         { "95", OPTION_VAL_95_VAL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_VAL,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_VAL,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_VAL,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_VAL,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_VAL },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_VAL,
      NULL,
      MGBA_FORCE_GBP_INFO_0_VAL,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_VAL,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_VAL,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_VAL },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_VAL },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_VAL },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_VAL,
      NULL,
      MGBA_FRAMESKIP_INFO_0_VAL,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_VAL },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_VAL },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_VAL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_VAL,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_VAL,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_VAL,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_VAL,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_val = {
   option_cats_val,
   option_defs_val
};

/* RETRO_LANGUAGE_VN */

#define CATEGORY_SYSTEM_LABEL_VN "Hệ thống"
#define CATEGORY_SYSTEM_INFO_0_VN NULL
#define CATEGORY_VIDEO_LABEL_VN "Hình ảnh"
#define CATEGORY_VIDEO_INFO_0_VN NULL
#define CATEGORY_VIDEO_INFO_1_VN NULL
#define CATEGORY_AUDIO_LABEL_VN "Âm thanh"
#define CATEGORY_AUDIO_INFO_0_VN NULL
#define CATEGORY_INPUT_LABEL_VN NULL
#define CATEGORY_INPUT_INFO_0_VN NULL
#define CATEGORY_PERFORMANCE_LABEL_VN NULL
#define CATEGORY_PERFORMANCE_INFO_0_VN NULL
#define MGBA_GB_MODEL_LABEL_VN NULL
#define MGBA_GB_MODEL_INFO_0_VN NULL
#define OPTION_VAL_AUTODETECT_VN "Tự động phát hiện"
#define OPTION_VAL_GAME_BOY_VN NULL
#define OPTION_VAL_SUPER_GAME_BOY_VN NULL
#define OPTION_VAL_GAME_BOY_COLOR_VN NULL
#define OPTION_VAL_GAME_BOY_ADVANCE_VN NULL
#define MGBA_USE_BIOS_LABEL_VN NULL
#define MGBA_USE_BIOS_INFO_0_VN NULL
#define MGBA_SKIP_BIOS_LABEL_VN NULL
#define MGBA_SKIP_BIOS_INFO_0_VN NULL
#define MGBA_GB_COLORS_LABEL_VN NULL
#define MGBA_GB_COLORS_INFO_0_VN NULL
#define OPTION_VAL_GRAYSCALE_VN NULL
#define MGBA_GB_COLORS_PRESET_LABEL_VN NULL
#define MGBA_GB_COLORS_PRESET_INFO_0_VN NULL
#define OPTION_VAL_0_VN NULL
#define OPTION_VAL_1_VN NULL
#define OPTION_VAL_2_VN NULL
#define OPTION_VAL_3_VN NULL
#define MGBA_SGB_BORDERS_LABEL_VN NULL
#define MGBA_SGB_BORDERS_INFO_0_VN NULL
#define MGBA_COLOR_CORRECTION_LABEL_VN NULL
#define MGBA_COLOR_CORRECTION_INFO_0_VN NULL
#define OPTION_VAL_AUTO_VN "Tự động"
#define MGBA_INTERFRAME_BLENDING_LABEL_VN NULL
#define MGBA_INTERFRAME_BLENDING_INFO_0_VN NULL
#define OPTION_VAL_MIX_VN "Đơn giản"
#define OPTION_VAL_MIX_SMART_VN NULL
#define OPTION_VAL_LCD_GHOSTING_VN NULL
#define OPTION_VAL_LCD_GHOSTING_FAST_VN NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_VN "Âm thanh Filter Danh mục"
#define MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_VN NULL
#define MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_VN NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_VN NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_VN NULL
#define MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_VN NULL
#define OPTION_VAL_5_VN NULL
#define OPTION_VAL_10_VN NULL
#define OPTION_VAL_15_VN NULL
#define OPTION_VAL_20_VN NULL
#define OPTION_VAL_25_VN NULL
#define OPTION_VAL_30_VN NULL
#define OPTION_VAL_35_VN NULL
#define OPTION_VAL_40_VN NULL
#define OPTION_VAL_45_VN NULL
#define OPTION_VAL_50_VN NULL
#define OPTION_VAL_55_VN NULL
#define OPTION_VAL_60_VN NULL
#define OPTION_VAL_65_VN NULL
#define OPTION_VAL_70_VN NULL
#define OPTION_VAL_75_VN NULL
#define OPTION_VAL_80_VN NULL
#define OPTION_VAL_85_VN NULL
#define OPTION_VAL_90_VN NULL
#define OPTION_VAL_95_VN NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_VN NULL
#define MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_VN NULL
#define MGBA_SOLAR_SENSOR_LEVEL_LABEL_VN NULL
#define MGBA_SOLAR_SENSOR_LEVEL_INFO_0_VN NULL
#define OPTION_VAL_SENSOR_VN NULL
#define MGBA_FORCE_GBP_LABEL_VN NULL
#define MGBA_FORCE_GBP_INFO_0_VN NULL
#define MGBA_IDLE_OPTIMIZATION_LABEL_VN NULL
#define MGBA_IDLE_OPTIMIZATION_INFO_0_VN NULL
#define OPTION_VAL_REMOVE_KNOWN_VN NULL
#define OPTION_VAL_DETECT_AND_REMOVE_VN NULL
#define OPTION_VAL_DON_T_REMOVE_VN NULL
#define MGBA_FRAMESKIP_LABEL_VN "Bỏ qua khung hình"
#define MGBA_FRAMESKIP_INFO_0_VN NULL
#define OPTION_VAL_AUTO_THRESHOLD_VN NULL
#define OPTION_VAL_FIXED_INTERVAL_VN NULL
#define MGBA_FRAMESKIP_THRESHOLD_LABEL_VN "Ngưỡng bỏ qua khung hình (%)"
#define MGBA_FRAMESKIP_THRESHOLD_INFO_0_VN NULL
#define MGBA_FRAMESKIP_INTERVAL_LABEL_VN NULL
#define MGBA_FRAMESKIP_INTERVAL_INFO_0_VN NULL

struct retro_core_option_v2_category option_cats_vn[] = {
   {
      "system",
      CATEGORY_SYSTEM_LABEL_VN,
      CATEGORY_SYSTEM_INFO_0_VN
   },
   {
      "video",
      CATEGORY_VIDEO_LABEL_VN,
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
      CATEGORY_VIDEO_INFO_0_VN
#else
      CATEGORY_VIDEO_INFO_1_VN
#endif
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_VN,
      CATEGORY_AUDIO_INFO_0_VN
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_VN,
      CATEGORY_INPUT_INFO_0_VN
   },
   {
      "performance",
      CATEGORY_PERFORMANCE_LABEL_VN,
      CATEGORY_PERFORMANCE_INFO_0_VN
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_vn[] = {
   {
      "mgba_gb_model",
      MGBA_GB_MODEL_LABEL_VN,
      NULL,
      MGBA_GB_MODEL_INFO_0_VN,
      NULL,
      "system",
      {
         { "Autodetect",       OPTION_VAL_AUTODETECT_VN },
         { "Game Boy",         OPTION_VAL_GAME_BOY_VN },
         { "Super Game Boy",   OPTION_VAL_SUPER_GAME_BOY_VN },
         { "Game Boy Color",   OPTION_VAL_GAME_BOY_COLOR_VN },
         { "Game Boy Advance", OPTION_VAL_GAME_BOY_ADVANCE_VN },
         { NULL, NULL },
      },
      "Autodetect"
   },
   {
      "mgba_use_bios",
      MGBA_USE_BIOS_LABEL_VN,
      NULL,
      MGBA_USE_BIOS_INFO_0_VN,
      NULL,
      "system",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
   {
      "mgba_skip_bios",
      MGBA_SKIP_BIOS_LABEL_VN,
      NULL,
      MGBA_SKIP_BIOS_INFO_0_VN,
      NULL,
      "system",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_gb_colors",
      MGBA_GB_COLORS_LABEL_VN,
      NULL,
      MGBA_GB_COLORS_INFO_0_VN,
      NULL,
      "video",
      {
         /* This list is populated at runtime */
         { "Grayscale", OPTION_VAL_GRAYSCALE_VN },
         { NULL, NULL },
      },
      "Grayscale"
   },
   {
      "mgba_gb_colors_preset",
      MGBA_GB_COLORS_PRESET_LABEL_VN,
      NULL,
      MGBA_GB_COLORS_PRESET_INFO_0_VN,
      NULL,
      "video",
      {
         { "0", OPTION_VAL_0_VN },
         { "1", OPTION_VAL_1_VN },
         { "2", OPTION_VAL_2_VN },
         { "3", OPTION_VAL_3_VN },
         { NULL, NULL },
      },
      "0"
   },
   {
      "mgba_sgb_borders",
      MGBA_SGB_BORDERS_LABEL_VN,
      NULL,
      MGBA_SGB_BORDERS_INFO_0_VN,
      NULL,
      "video",
      {
         { "ON",  "enabled" },
         { "OFF", "disabled" },
         { NULL, NULL },
      },
      "ON"
   },
#if defined(COLOR_16_BIT) && defined(COLOR_5_6_5)
   {
      "mgba_color_correction",
      MGBA_COLOR_CORRECTION_LABEL_VN,
      NULL,
      MGBA_COLOR_CORRECTION_INFO_0_VN,
      NULL,
      "video",
      {
         { "OFF",  "disabled" },
         { "GBA",  OPTION_VAL_GAME_BOY_ADVANCE_VN },
         { "GBC",  OPTION_VAL_GAME_BOY_COLOR_VN },
         { "Auto", OPTION_VAL_AUTO_VN },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_interframe_blending",
      MGBA_INTERFRAME_BLENDING_LABEL_VN,
      NULL,
      MGBA_INTERFRAME_BLENDING_INFO_0_VN,
      NULL,
      "video",
      {
         { "OFF",               "disabled" },
         { "mix",               OPTION_VAL_MIX_VN },
         { "mix_smart",         OPTION_VAL_MIX_SMART_VN },
         { "lcd_ghosting",      OPTION_VAL_LCD_GHOSTING_VN },
         { "lcd_ghosting_fast", OPTION_VAL_LCD_GHOSTING_FAST_VN },
         { NULL, NULL },
      },
      "OFF"
   },
#endif
   {
      "mgba_audio_low_pass_filter",
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_VN,
      MGBA_AUDIO_LOW_PASS_FILTER_LABEL_CAT_VN,
      MGBA_AUDIO_LOW_PASS_FILTER_INFO_0_VN,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_audio_low_pass_range",
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_VN,
      MGBA_AUDIO_LOW_PASS_RANGE_LABEL_CAT_VN,
      MGBA_AUDIO_LOW_PASS_RANGE_INFO_0_VN,
      NULL,
      "audio",
      {
         { "5",  OPTION_VAL_5_VN },
         { "10", OPTION_VAL_10_VN },
         { "15", OPTION_VAL_15_VN },
         { "20", OPTION_VAL_20_VN },
         { "25", OPTION_VAL_25_VN },
         { "30", OPTION_VAL_30_VN },
         { "35", OPTION_VAL_35_VN },
         { "40", OPTION_VAL_40_VN },
         { "45", OPTION_VAL_45_VN },
         { "50", OPTION_VAL_50_VN },
         { "55", OPTION_VAL_55_VN },
         { "60", OPTION_VAL_60_VN },
         { "65", OPTION_VAL_65_VN },
         { "70", OPTION_VAL_70_VN },
         { "75", OPTION_VAL_75_VN },
         { "80", OPTION_VAL_80_VN },
         { "85", OPTION_VAL_85_VN },
         { "90", OPTION_VAL_90_VN },
         { "95", OPTION_VAL_95_VN },
         { NULL, NULL },
      },
      "60"
   },
   {
      "mgba_allow_opposing_directions",
      MGBA_ALLOW_OPPOSING_DIRECTIONS_LABEL_VN,
      NULL,
      MGBA_ALLOW_OPPOSING_DIRECTIONS_INFO_0_VN,
      NULL,
      "input",
      {
         { "no",  "disabled" },
         { "yes", "enabled" },
         { NULL, NULL },
      },
      "no"
   },
   {
      "mgba_solar_sensor_level",
      MGBA_SOLAR_SENSOR_LEVEL_LABEL_VN,
      NULL,
      MGBA_SOLAR_SENSOR_LEVEL_INFO_0_VN,
      NULL,
      "input",
      {
         { "sensor", OPTION_VAL_SENSOR_VN },
         { "0",      NULL },
         { "1",      NULL },
         { "2",      NULL },
         { "3",      NULL },
         { "4",      NULL },
         { "5",      NULL },
         { "6",      NULL },
         { "7",      NULL },
         { "8",      NULL },
         { "9",      NULL },
         { "10",     NULL },
         { NULL,     NULL },
      },
      "0"
   },
   {
      "mgba_force_gbp",
      MGBA_FORCE_GBP_LABEL_VN,
      NULL,
      MGBA_FORCE_GBP_INFO_0_VN,
      NULL,
      "input",
      {
         { "OFF", "disabled" },
         { "ON",  "enabled" },
         { NULL, NULL },
      },
      "OFF"
   },
   {
      "mgba_idle_optimization",
      MGBA_IDLE_OPTIMIZATION_LABEL_VN,
      NULL,
      MGBA_IDLE_OPTIMIZATION_INFO_0_VN,
      NULL,
      "performance",
      {
         { "Remove Known",      OPTION_VAL_REMOVE_KNOWN_VN },
         { "Detect and Remove", OPTION_VAL_DETECT_AND_REMOVE_VN },
         { "Don't Remove",      OPTION_VAL_DON_T_REMOVE_VN },
         { NULL, NULL },
      },
      "Remove Known"
   },
   {
      "mgba_frameskip",
      MGBA_FRAMESKIP_LABEL_VN,
      NULL,
      MGBA_FRAMESKIP_INFO_0_VN,
      NULL,
      "performance",
      {
         { "disabled",       NULL },
         { "auto",           OPTION_VAL_AUTO_VN },
         { "auto_threshold", OPTION_VAL_AUTO_THRESHOLD_VN },
         { "fixed_interval", OPTION_VAL_FIXED_INTERVAL_VN },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "mgba_frameskip_threshold",
      MGBA_FRAMESKIP_THRESHOLD_LABEL_VN,
      NULL,
      MGBA_FRAMESKIP_THRESHOLD_INFO_0_VN,
      NULL,
      "performance",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "mgba_frameskip_interval",
      MGBA_FRAMESKIP_INTERVAL_LABEL_VN,
      NULL,
      MGBA_FRAMESKIP_INTERVAL_INFO_0_VN,
      NULL,
      "performance",
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { NULL, NULL },
      },
      "0"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_vn = {
   option_cats_vn,
   option_defs_vn
};


#ifdef __cplusplus
}
#endif

#endif