const struct Ability gAbilitiesInfo[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("No special ability."),
        .aiRating = 0,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STENCH] =
    {
        .name = _("Stench"),
        .description = COMPOUND_STRING("May cause a foe to flinch."),
        .aiRating = 1,
    },

    [ABILITY_DRIZZLE] =
    {
        .name = _("Drizzle"),
        .description = COMPOUND_STRING(
            "When the Pokémon enters battle,\n"
            "it summons a downpour that lasts\n"
            "for 5 turns."),
        .aiRating = 9,
    },

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("Speed Boost"),
        .description = COMPOUND_STRING("Gradually boosts Speed."),
        .aiRating = 9,
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("Battle Armor"),
        .description = COMPOUND_STRING("Blocks critical hits."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_STURDY] =
    {
        .name = _("Sturdy"),
        .description = COMPOUND_STRING(
            "The Pokémon can't be knocked out\n"
            "in one hit. Its sturdy form\n"
            "reduces the damage taken from\n"
            "super-effective attacks."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DAMP] =
    {
        .name = _("Damp"),
        .description = COMPOUND_STRING("Prevents self-destruction."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("Limber"),
        .description = COMPOUND_STRING("Prevents paralysis."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("Sand Veil"),
        .description = COMPOUND_STRING(
            "While in a sandstorm, the\n"
            "Pokémon's evasiveness is boosted."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("Static"),
        .description = COMPOUND_STRING(
            "The electrical charge coursing\n"
            "through the Pokémon has a chance\n"
            "to paralyze any battlers that\n"
            "make contact with it."),
        .aiRating = 4,
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("Volt Absorb"),
        .description = COMPOUND_STRING(
            "If the Pokémon is hit by an\n"
            "Electric-type attack, its HP\n"
            "will be restored, rather than\n"
            "the move dealing damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("Water Absorb"),
        .description = COMPOUND_STRING(
            "If the Pokémon is hit by a\n"
            "Water-type attack, its HP will\n"
            "be restored, rather than the\n"
            "move dealing damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("Oblivious"),
        .description = COMPOUND_STRING(
            "The Pokémon's obliviousness\n"
            "blocks statuses such as taunts,\n"
            "torments, and infatuation."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("Cloud Nine"),
        .description = COMPOUND_STRING(
            "When the Pokémon enters battle,\n"
            "the effects of any weather that's\n"
            "currently active will disappear."),
        .aiRating = 5,
    },

    [ABILITY_COMPOUND_EYES] =
    {
        .name = _("Compound Eyes"),
        .description = COMPOUND_STRING(
            "The many lenses of the Pokémon's\n"
            "compound eyes give it a better\n"
            "view, boosting the accuracy of\n"
            "all its moves."),
        .aiRating = 7,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("Insomnia"),
        .description = COMPOUND_STRING("Prevents sleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("Color Change"),
        .description = COMPOUND_STRING("Changes type to foe's move."),
        .aiRating = 2,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("Immunity"),
        .description = COMPOUND_STRING("Prevents poisoning."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("Flash Fire"),
        .description = COMPOUND_STRING(
            "The Pokémon draws in Fire-type\n"
            "attacks, taking no damage from\n"
            "them- instead, its Sp. Atk is\n"
            "boosted."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("Shield Dust"),
        .description = COMPOUND_STRING(
            "The Pokémon is covered in a fine\n"
            "powder, blocking the secondary\n"
            "effects of other Pokémon's\n"
            "attacks."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("Own Tempo"),
        .description = COMPOUND_STRING("Can't be confused, infatuated,\nor intimidated."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("Suction Cups"),
        .description = COMPOUND_STRING("Firmly anchors the body."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("Intimidate"),
        .description = COMPOUND_STRING(
            "When the Pokémon enters battle,\n"
            "it frightens opponents, lowering\n"
            "their Attack stats."),
        .aiRating = 7,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("Shadow Tag"),
        .description = COMPOUND_STRING(
            "The Pokémon pins foes' shadows\n"
            "to the ground, preventing them\n"
            "from switching out or fleeing\n"
            "the battle."),
        .aiRating = 10,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("Rough Skin"),
        .description = COMPOUND_STRING(
            "Any battlers that make contact\n"
            "with the Pokémon will be damaged\n"
            "by its rough, rugged skin."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("Wonder Guard"),
        .description = COMPOUND_STRING("“Supereffective” hits."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("Levitate"),
        .description = COMPOUND_STRING(
            "The Pokémon floats in the air,\n"
            "avoiding any and all Ground-type\n"
            "attacks from other battlers."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("Effect Spore"),
        .description = COMPOUND_STRING(
            "When a foe makes contact with the\n"
            "Pokémon, it may be afflicted with\n"
            "poison, paralysis, or sleep from\n"
            "the Pokémon's spores."),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("Synchronize"),
        .description = COMPOUND_STRING("Passes on status problems."),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("Clear Body"),
        .description = COMPOUND_STRING(
            "The Pokémon's stats can't be\n"
            "lowered by opponents thanks to\n"
            "its pure, clean body."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("Natural Cure"),
        .description = COMPOUND_STRING("Heals upon switching out."),
        .aiRating = 7,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
        .name = _("Lightning Rod"),
        .description = COMPOUND_STRING(
            "The Pokémon draws in Electric-\n"
            "type attacks to power itself up,\n"
            "taking no damage and instead\n"
            "boosting its Sp. Atk."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("Serene Grace"),
        .description = COMPOUND_STRING(
            "The Pokémon's strange luck boosts\n"
            "the chances that its moves will\n"
            "have their extra effects trigger."),
        .aiRating = 8,
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("Swift Swim"),
        .description = COMPOUND_STRING(
            "While the Pokémon is battling in\n"
            "rain, its Speed stat will be\n"
            "doubled."),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("Chlorophyll"),
        .description = COMPOUND_STRING(
            "While the Pokémon is battling in\n"
            "harsh sunlight, its Speed will be\n"
            "doubled and its Sp.Atk will be\n"
            "boosted some."),
        .aiRating = 6,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("Illuminate"),
        .description = COMPOUND_STRING("Encounter rate increases."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_TRACE] =
    {
        .name = _("Trace"),
        .description = COMPOUND_STRING("Copies special ability."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_HUGE_POWER] =
    {
        .name = _("Huge Power"),
        .description = COMPOUND_STRING("Raises Attack."),
        .aiRating = 10,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("Poison Point"),
        .description = COMPOUND_STRING(
            "The Pokémon's toxic body may\n"
            "poison any battlers that make\n"
            "contact with it."),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("Inner Focus"),
        .description = COMPOUND_STRING(
            "The Pokémon's deep focus prevents\n"
            "it from flinching. If the Pokémon\n"
            "is pumped up, its moves will have\n"
            "their power and accuracy boosted."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("Magma Armor"),
        .description = COMPOUND_STRING("Prevents freezing."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("Water Veil"),
        .description = COMPOUND_STRING("Prevents burns."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("Magnet Pull"),
        .description = COMPOUND_STRING("Traps Steel-type Pokémon."),
        .aiRating = 9,
    },

    [ABILITY_SOUNDPROOF] =
    {
        .name = _("Soundproof"),
        .description = COMPOUND_STRING(
            "The Pokémon is immune to all\n"
            "sound-based moves."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("Rain Dish"),
        .description = COMPOUND_STRING(
            "In rain, the Pokémon recovers a\n"
            "bit of HP at the end of each\n"
            "turn."),
        .aiRating = 3,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("Sand Stream"),
        .description = COMPOUND_STRING(
            "When the Pokémon enters battle,\n"
            "it summons a sandstorm that lasts\n"
            "for 5 turns."),
        .aiRating = 9,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("Pressure"),
        .description = COMPOUND_STRING(
            "The Pokémon's imposing presence\n"
            "makes foes panic, causing them to\n"
            "use up more PP than usual."),
        .aiRating = 5,
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("Thick Fat"),
        .description = COMPOUND_STRING(
            "The Pokémon's thick, blubbery fat\n"
            "reduces the damage it takes from\n"
            "Fire- and Ice-type attacks."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("Early Bird"),
        .description = COMPOUND_STRING("Awakens quickly from sleep."),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("Flame Body"),
        .description = COMPOUND_STRING(
            "The Pokémon's burning hot body\n"
            "may burn any battlers who make\n"
            "contact with it."),
        .aiRating = 4,
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("Run Away"),
        .description = COMPOUND_STRING(
            "The Pokémon's wily nature always\n"
            "lets it escape. It can't be\n"
            "trapped and can always run from\n"
            "wild battles."),
        .aiRating = 0,
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("Keen Eye"),
        .description = COMPOUND_STRING(
            "The Pokémon's acute eyesight\n"
            "prevents its Accuracy from being\n"
            "lowered and allows it to see\n"
            "though foes' Evasion boosts."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("Hyper Cutter"),
        .description = COMPOUND_STRING("Prevents Attack reduction."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("Pickup"),
        .description = COMPOUND_STRING(
            "After a battle, the Pokémon\n"
            "has a chance to pick up a random\n"
            "item. In battle, it may pick up\n"
            "an item the foe has consumed."),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("Truant"),
        .description = COMPOUND_STRING("Moves only every two turns."),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("Hustle"),
        .description = COMPOUND_STRING(
            "The Pokémon's gusto boosts the\n"
            "power of its physical moves, but\n"
            "makes them a bit less accurate\n"
            "than usual."),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("Cute Charm"),
        .description = COMPOUND_STRING(
            "Any battler that makes contact\n"
            "with the Pokémon has a chance to\n"
            "fall in love with it for 3 turns."),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("Plus"),
        .description = COMPOUND_STRING(
            "Boosts Electric- and Steel-type\n"
            "moves for the Pokémon and allies\n"
            "with Minus."),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("Minus"),
        .description = COMPOUND_STRING(
            "Boosts the Pokémon's defenses\n"
            "while it's Charged. The same\n"
            "applies to any allies with the\n"
            "ability Plus."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_FORECAST] =
    {
        .name = _("Forecast"),
        .description = COMPOUND_STRING("Changes with the weather."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("Sticky Hold"),
        .description = COMPOUND_STRING("Prevents item theft."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("Shed Skin"),
        .description = COMPOUND_STRING(
            "At the end of each turn, the\n"
            "Pokémon may shed its skin to heal\n"
            "any status conditions it's\n"
            "suffering from."),
        .aiRating = 7,
    },

    [ABILITY_GUTS] =
    {
        .name = _("Guts"),
        .description = COMPOUND_STRING(
            "The Pokémon's bravado boosts its\n"
            "Attack when afflicted with a\n"
            "status condition, but heals them\n"
            "upon entering battle."),
        .aiRating = 6,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("Marvel Scale"),
        .description = COMPOUND_STRING("Ups Defense if suffering."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("Liquid Ooze"),
        .description = COMPOUND_STRING(
            "If the Pokémon is hit by an HP-\n"
            "draining attack, the attacker\n"
            "will lose HP instead of healing\n"
            "itself."),
        .aiRating = 3,
    },

    [ABILITY_OVERGROW] =
    {
        .name = _("Overgrow"),
        .description = COMPOUND_STRING("Boosts Grass moves' power at\nlow HP."),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("Blaze"),
        .description = COMPOUND_STRING("Boosts Fire moves' power at\nlow HP."),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("Torrent"),
        .description = COMPOUND_STRING("Boosts Water moves' power at\nlow HP."),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("Swarm"),
        .description = COMPOUND_STRING("Boosts Bug moves' power at\nlow HP."),
        .aiRating = 5,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("Rock Head"),
        .description = COMPOUND_STRING("Prevents recoil damage."),
        .aiRating = 5,
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("Drought"),
        .description = COMPOUND_STRING(
            "When the Pokémon enters battle,\n"
            "it summons harsh sunlight that\n"
            "lasts for 5 turns."),
        .aiRating = 9,
    },

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("Arena Trap"),
        .description = COMPOUND_STRING(
            "Any opponents on the ground can't\n"
            "switch or flee, thanks to the\n"
            "Pokémon digging a sloping trap\n"
            "on the battlefield."),
        .aiRating = 9,
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("Vital Spirit"),
        .description = COMPOUND_STRING("Prevents sleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("White Smoke"),
        .description = COMPOUND_STRING("Prevents ability reduction."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("Pure Power"),
        .description = COMPOUND_STRING("Raises Attack."),
        .aiRating = 10,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("Shell Armor"),
        .description = COMPOUND_STRING(
            "The Pokémon's hard, thick shell\n"
            "protects it from other battlers'\n"
            "critical hits and reduces any\n"
            "non-super-effective damage taken."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("Air Lock"),
        .description = COMPOUND_STRING("Negates weather effects."),
        .aiRating = 5,
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("Tangled Feet"),
        .description = COMPOUND_STRING("Ups evasion if confused."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("Motor Drive"),
        .description = COMPOUND_STRING(
            "The Pokémon absorbs Electric-\n"
            "type attacks aimed towards it,\n"
            "taking no damage and instead\n"
            "boosting its Speed."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("Rivalry"),
        .description = COMPOUND_STRING("Powers up against rivals."),
        .aiRating = 1,
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("Steadfast"),
        .description = COMPOUND_STRING("Flinching raises Speed."),
        .aiRating = 2,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("Snow Cloak"),
        .description = COMPOUND_STRING(
            "Boosts the Pokémon's Evasion\n"
            "when in a hailstorm."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("Gluttony"),
        .description = COMPOUND_STRING("Eats Berries early."),
        .aiRating = 3,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("Anger Point"),
        .description = COMPOUND_STRING(
            "If hit by a critical hit or a\n"
            "super-effective attack, the\n"
            "Pokémon's Attack stat will rise."),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("Unburden"),
        .description = COMPOUND_STRING(
            "If the Pokémon has used up its\n"
            "held item, its Speed stat will\n"
            "be doubled."),
        .aiRating = 7,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("Heatproof"),
        .description = COMPOUND_STRING("Heat and burn protection."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SIMPLE] =
    {
        .name = _("Simple"),
        .description = COMPOUND_STRING(
            "Any stat changes the Pokémon\n"
            "receives will be doubled,\n"
            "whether they're positive or\n"
            "negative."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_DRY_SKIN] =
    {
        .name = _("Dry Skin"),
        .description = COMPOUND_STRING("Prefers moisture to heat."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("Download"),
        .description = COMPOUND_STRING("Boosts the attacking stat that\nwould be most effective on\nthe current foe."),
        .aiRating = 7,
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("Iron Fist"),
        .description = COMPOUND_STRING(
            "The Pokémon's punching attacks\n"
            "are made stronger, ignoring any\n"
            "reductions to its Attack or\n"
            "Accuracy as well."),
        .aiRating = 6,
    },

    [ABILITY_POISON_HEAL] =
    {
        .name = _("Poison Heal"),
        .description = COMPOUND_STRING(
            "If the Pokémon is poisoned, it\n"
            "will heal HP instead of taking\n"
            "damage, but its poison will be\n"
            "healed upon entering battle."),
        .aiRating = 8,
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("Adaptability"),
        .description = COMPOUND_STRING(
            "The Pokémon's hardiness boosts\n"
            "the power of any attacks that\n"
            "share the Pokémon's typing."),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("Skill Link"),
        .description = COMPOUND_STRING("Multi-hit moves hit 5 times."),
        .aiRating = 7,
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("Hydration"),
        .description = COMPOUND_STRING(
            "While battling in rain, the\n"
            "Pokémon will heal any status\n"
            "conditions it has at the end\n"
            "of each turn."),
        .aiRating = 4,
    },

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("Solar Power"),
        .description = COMPOUND_STRING(
            "While battling in harsh sunlight,\n"
            "the Pokémon's Sp. Atk is boosted,\n"
            "but it takes some damage at the\n"
            "end of each turn."),
        .aiRating = 3,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("Quick Feet"),
        .description = COMPOUND_STRING(
            "If the Pokémon is suffering from\n"
            "a status condition, its Speed is"
            "boosted to compensate."
        ),
        .aiRating = 5,
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("Normalize"),
        .description = COMPOUND_STRING("Moves become Normal-type."),
        .aiRating = -1,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("Sniper"),
        .description = COMPOUND_STRING("Boosts critical hits."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("Magic Guard"),
        .description = COMPOUND_STRING(
            "The Pokémon only takes damage\n"
            "from attacks- not any status\n"
            "conditions, weather, or the\n"
            "like."),
        .aiRating = 9,
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("No Guard"),
        .description = COMPOUND_STRING(
            "None of the Pokémon's moves ever\n"
            "miss their targets- but no moves\n"
            "targeting the Pokémon can miss,\n"
            "either."),
        .aiRating = 8,
    },

    [ABILITY_STALL] =
    {
        .name = _("Stall"),
        .description = COMPOUND_STRING(
            "The Pokémon always moves last.\n"
            "If the Pokémon hasn't attacked\n"
            "yet, it takes less damage from\n"
            "attacks."),
        .aiRating = -1,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("Technician"),
        .description = COMPOUND_STRING(
            "The Pokémon's ingenuity lets\n"
            "it deal more damage with weaker\n"
            "moves, boosting any attacks with\n"
            "60 base power or below."
        ),
        .aiRating = 8,
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("Leaf Guard"),
        .description = COMPOUND_STRING("Blocks status in sunshine."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_KLUTZ] =
    {
        .name = _("Klutz"),
        .description = COMPOUND_STRING("Can't use hold items."),
        .aiRating = -1,
    },

    [ABILITY_MOLD_BREAKER] =
    {
        .name = _("Mold Breaker"),
        .description = COMPOUND_STRING(
            "All of the Pokémon's moves\n"
            "ignore foes' abilities- for\n"
            "example, Ground-type attacks can\n"
            "hit levitating foes."),
        .aiRating = 7,
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("Super Luck"),
        .description = COMPOUND_STRING(
            "The Pokémon's luck boosts the\n"
            "chances of its attacks landing\n"
            "critical hits."),
        .aiRating = 3,
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("Aftermath"),
        .description = COMPOUND_STRING(
            "When the Pokémon is knocked out,\n"
            "the battler who landed the\n"
            "finishing blow takes some damage."),
        .aiRating = 5,
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("Anticipation"),
        .description = COMPOUND_STRING(
            "When the Pokémon enters battle,\n"
            "its Speed and evasion will be\n"
            "boosted if foes have any strong\n"
            "or dangerous attacks."),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("Forewarn"),
        .description = COMPOUND_STRING("Determines a foe's move."),
        .aiRating = 2,
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("Unaware"),
        .description = COMPOUND_STRING(
            "While attacking or being\n"
            "attacked, the Pokémon is\n"
            "oblivious to any of the\n"
            "opponents' stat boosts."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("Tinted Lens"),
        .description = COMPOUND_STRING(
            "If any of the Pokémon's attacks\n"
            "are resisted by the target, their\n"
            "power will be boosted to deal\n"
            "regular damage."),
        .aiRating = 7,
    },

    [ABILITY_FILTER] =
    {
        .name = _("Filter"),
        .description = COMPOUND_STRING(
            "If the Pokémon is hit by a super-\n"
            "effective attack, the damage will\n"
            "be filtered and reduced."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("Slow Start"),
        .description = COMPOUND_STRING("Boosts Attack and Speed after\n4 turns."),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("Scrappy"),
        .description = COMPOUND_STRING("Hits Ghost-type Pokémon."),
        .aiRating = 6,
    },

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("Storm Drain"),
        .description = COMPOUND_STRING(
            "The Pokémon draws in Water-type\n"
            "attacks, boosting its Sp. Atk\n"
            "instead of taking any damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("Ice Body"),
        .description = COMPOUND_STRING(
            "While battling in a hailstorm,\n"
            "the Pokémon will have a bit of\n"
            "its HP restored at the end of\n"
            "each turn."),
        .aiRating = 3,
    },

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("Solid Rock"),
        .description = COMPOUND_STRING(
            "The Pokémon's tough, mineralized\n"
            "body reduces the damage it takes\n"
            "from super-effective attacks."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("Snow Warning"),
        .description = COMPOUND_STRING(
            "When the Pokémon enters battle,\n"
            "it summons a hailstorm that lasts\n"
            "for 5 turns."),
        .aiRating = 8,
    },

    [ABILITY_HONEY_GATHER] =
    {
        .name = _("Honey Gather"),
        .description = COMPOUND_STRING("May gather Honey."),
        .aiRating = 0,
    },

    [ABILITY_FRISK] =
    {
        .name = _("Frisk"),
        .description = COMPOUND_STRING("Checks a foe's item."),
        .aiRating = 3,
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("Reckless"),
        .description = COMPOUND_STRING("Boosts moves with recoil."),
        .aiRating = 6,
    },

    [ABILITY_MULTITYPE] =
    {
        .name = _("Multitype"),
        .description = COMPOUND_STRING("Changes type to its Plate."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_FLOWER_GIFT] =
    {
        .name = _("Flower Gift"),
        .description = COMPOUND_STRING("Allies power up in sunshine."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("Bad Dreams"),
        .description = COMPOUND_STRING(
            "The Pokémon can't fall asleep.\n"
            "Any Pokémon that are asleep on the\n"
            "battlefield will take damage at\n"
            "the end of each turn."),
        .aiRating = 4,
    },

    [ABILITY_PICKPOCKET] =
    {
        .name = _("Pickpocket"),
        .description = COMPOUND_STRING(
            "If the foe hits the Pokémon with\n"
            "a move that makes contact- or\n"
            "vice versa- the Pokémon will steal\n"
            "the opponent's item."),
        .aiRating = 3,
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("Sheer Force"),
        .description = COMPOUND_STRING(
            "The power of the Pokémon's\n"
            "attacks is increased, but any\n"
            "added effects they may have\n"
            "are removed."),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("Contrary"),
        .description = COMPOUND_STRING("Inverts stat changes."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("Unnerve"),
        .description = COMPOUND_STRING(
            "Opponents are unsettled and put\n"
            "on edge, losing their appetite\n"
            "and preventing them from eating\n"
            "berries."),
        .aiRating = 3,
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("Defiant"),
        .description = COMPOUND_STRING(
            "If any of the Pokémon's stats are\n"
            "lowered, its Attack stat will be\n"
            "sharply boosted in retaliation."),
        .aiRating = 5,
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("Defeatist"),
        .description = COMPOUND_STRING("Gives up at half HP."),
        .aiRating = -1,
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("Cursed Body"),
        .description = COMPOUND_STRING(
            "When hit by a move, may Disable\n"
            "it for 3 turns or Torment the\n"
            "attacker."),
        .aiRating = 4,
    },

    [ABILITY_HEALER] =
    {
        .name = _("Healer"),
        .description = COMPOUND_STRING(
            "At the end of each turn, the\n"
            "Pokémon may heal any status\n"
            "conditions its ally is\n"
            "suffering from."),
        .aiRating = 0,
    },

    [ABILITY_FRIEND_GUARD] =
    {
        .name = _("Friend Guard"),
        .description = COMPOUND_STRING("Lowers damage to partner."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_WEAK_ARMOR] =
    {
        .name = _("Weak Armor"),
        .description = COMPOUND_STRING("Its stats change when hit."),
        .aiRating = 2,
    },

    [ABILITY_HEAVY_METAL] =
    {
        .name = _("Heavy Metal"),
        .description = COMPOUND_STRING("Doubles weight."),
        .aiRating = -1,
        .breakable = TRUE,
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("Light Metal"),
        .description = COMPOUND_STRING("Halves weight."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MULTISCALE] =
    {
        .name = _("Multiscale"),
        .description = COMPOUND_STRING("Halves damage at full HP."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("Toxic Boost"),
        .description = COMPOUND_STRING(
            "When the Pokémon is poisoned, its\n"
            "Sp. Atk is boosted and any Poison-\n"
            "type attacks will heal the Pokémon\n"
            "instead of dealing damage."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("Flare Boost"),
        .description = COMPOUND_STRING(
            "The Pokémon's Sp. Atk is boosted\n"
            "when it's burned. If the Pokémon\n"
            "is below half HP, its Sp. Atk is\n"
            "boosted even further."),
        .aiRating = 5,
    },

    [ABILITY_HARVEST] =
    {
        .name = _("Harvest"),
        .description = COMPOUND_STRING(
            "When the Pokémon eats a berry, it\n"
            "may create another. When in harsh\n"
            "sunlight, it always creates a new\n"
            "berry after eating one."),
        .aiRating = 5,
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("Telepathy"),
        .description = COMPOUND_STRING(
            "Able to sense it's partner's\n"
            "thoughts, the Pokémon avoids\n"
            "any moves used by its ally that\n"
            "would otherwise damage it."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_MOODY] =
    {
        .name = _("Moody"),
        .description = COMPOUND_STRING("Stats change gradually."),
        .aiRating = 10,
    },

    [ABILITY_OVERCOAT] =
    {
        .name = _("Overcoat"),
        .description = COMPOUND_STRING("Blocks powder moves and damage\nfrom weather."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("Poison Touch"),
        .description = COMPOUND_STRING("Poisons foe on contact."),
        .aiRating = 4,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("Regenerator"),
        .description = COMPOUND_STRING(
            "When the Pokémon exits battle,\n"
            "it heals a portion of HP."),
        .aiRating = 8,
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("Big Pecks"),
        .description = COMPOUND_STRING("Prevents Defense loss."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("Sand Rush"),
        .description = COMPOUND_STRING(
            "When battling in a sandstorm,\n"
            "the Pokémon's Speed stat is\n"
            "doubled, and it's protected\n"
            "from the sandstorm."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("Wonder Skin"),
        .description = COMPOUND_STRING("May avoid status problems."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("Analytic"),
        .description = COMPOUND_STRING(
            "If the Pokémon attacks after all\n"
            "the other battlers, the damage it\n"
            "deals will be boosted thanks to\n"
            "its precise calculations."),
        .aiRating = 5,
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("Illusion"),
        .description = COMPOUND_STRING("When sent out, takes the guise\nof a party member until being\nhit."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_IMPOSTER] =
    {
        .name = _("Imposter"),
        .description = COMPOUND_STRING("Transforms into the foe."),
        .aiRating = 9,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_INFILTRATOR] =
    {
        .name = _("Infiltrator"),
        .description = COMPOUND_STRING(
            "The Pokémon sneaks past any walls\n"
            "or barriers the foe has set up,\n"
            "such as screens, safeguards, or\n"
            "substitutes."),
        .aiRating = 6,
    },

    [ABILITY_MUMMY] =
    {
        .name = _("Mummy"),
        .description = COMPOUND_STRING("Spreads with contact."),
        .aiRating = 5,
    },

    [ABILITY_MOXIE] =
    {
        .name = _("Moxie"),
        .description = COMPOUND_STRING(
            "When the Pokémon knocks out an\n"
            "opponent, its ego swells and its\n"
            "Attack stat is boosted."),
        .aiRating = 7,
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("Justified"),
        .description = COMPOUND_STRING("Boosts Attack when hit by a\nDark-type move."),
        .aiRating = 4,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("Rattled"),
        .description = COMPOUND_STRING(
            "When the Pokémon is intimidated\n"
            "or hit by Bug-, Ghost, or Dark-\n"
            "-type attacks, its fear and\n"
            "panic boost its Speed."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("Magic Bounce"),
        .description = COMPOUND_STRING(
            "If the Pokémon is hit by a status\n"
            "move, it will be reflected back\n"
            "and will hit the attacker instead\n"
            "of the Pokémon."),
        .aiRating = 9,
        .breakable = TRUE,
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("Sap Sipper"),
        .description = COMPOUND_STRING(
            "If the Pokémon is hit by a Grass-\n"
            "type attack, it will take no\n"
            "damage- instead, its Attack stat\n"
            "will be boosted."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_PRANKSTER] =
    {
        .name = _("Prankster"),
        .description = COMPOUND_STRING(
            "The Pokémon's status moves have\n"
            "their priority boosted- unless\n"
            "the Pokémon is targeting a Dark-\n"
            "type opponent."),
        .aiRating = 8,
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("Sand Force"),
        .description = COMPOUND_STRING(
            "When battling in a sandstorm, the\n"
            "power of the Pokémon's Rock-,\n"
            "Ground-, and Steel-type moves\n"
            "will be boosted."),
        .aiRating = 4,
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("Iron Barbs"),
        .description = COMPOUND_STRING("Hurts to touch."),
        .aiRating = 6,
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("Zen Mode"),
        .description = COMPOUND_STRING("Transforms at half HP."),
        .aiRating = -1,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = B_UPDATED_ABILITY_DATA >= GEN_7,
    },

    [ABILITY_VICTORY_STAR] =
    {
        .name = _("Victory Star"),
        .description = COMPOUND_STRING(
            "The Pokémon's triumphant aura\n"
            "empowers its allies, boosting\n"
            "the accuracy of moves used by\n"
            "itself or an ally."),
        .aiRating = 6,
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("Turboblaze"),
        .description = COMPOUND_STRING("Moves hit through abilities."),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("Teravolt"),
        .description = COMPOUND_STRING("Moves hit through abilities."),
        .aiRating = 7,
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("Aroma Veil"),
        .description = COMPOUND_STRING("Prevents limiting of moves."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("Flower Veil"),
        .description = COMPOUND_STRING("Protects Grass-types."),
        .aiRating = 0,
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("Cheek Pouch"),
        .description = COMPOUND_STRING("Eating Berries restores HP."),
        .aiRating = 4,
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("Protean"),
        .description = COMPOUND_STRING("Changes type to used move."),
        .aiRating = 8,
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("Fur Coat"),
        .description = COMPOUND_STRING(
            "The Pokémon's thick fur reduces\n"
            "the damage it takes from physical\n"
            "attacks."),
        .aiRating = 7,
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("Magician"),
        .description = COMPOUND_STRING("Steals the foe's held item."),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("Bulletproof"),
        .description = COMPOUND_STRING(
            "The Pokémon's tough, bulletproof\n"
            "hide protects it from all ball,\n"
            "bomb, and other ballistic moves."),
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("Competitive"),
        .description = COMPOUND_STRING("Lowered stats up Sp. Atk."),
        .aiRating = 5,
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("Strong Jaw"),
        .description = COMPOUND_STRING(
            "The Pokémon's strong bite force\n"
            "boosts the power of all biting\n"
            "moves, as well as their chance\n"
            "for additional effects."),
        .aiRating = 6,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("Refrigerate"),
        .description = COMPOUND_STRING("Normal moves become Ice."),
        .aiRating = 8,
    },

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("Sweet Veil"),
        .description = COMPOUND_STRING("Prevents party from sleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Stance Change"),
    #else
        .name = _("StanceChange"),
    #endif
        .description = COMPOUND_STRING("Transforms as it battles."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_GALE_WINGS] =
    {
        .name = _("Gale Wings"),
        .description = COMPOUND_STRING(
            "If the Pokémon is at full HP,\n"
            "its Flying-type moves will have\n"
            "their priority elevated."),
        .aiRating = 6,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Mega Launcher"),
    #else
        .name = _("MegaLauncher"),
    #endif
        .description = COMPOUND_STRING("Boosts aura and pulse moves."),
        .aiRating = 7,
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("Grass Pelt"),
        .description = COMPOUND_STRING("Raises Defense in Lush\nTerrain."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("Symbiosis"),
        .description = COMPOUND_STRING("Passes its item to an ally."),
        .aiRating = 0,
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("Tough Claws"),
        .description = COMPOUND_STRING(
            "The Pokémon's strong, durable\n"
            "claws boost the power of any\n"
            "moves it uses that make direct\n"
            "contact with an opponent."),
        .aiRating = 7,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("Pixilate"),
        .description = COMPOUND_STRING("Normal moves become Fairy."),
        .aiRating = 8,
    },

    [ABILITY_GOOEY] =
    {
        .name = _("Gooey"),
        .description = COMPOUND_STRING("Lowers foes' Speed on contact."),
        .aiRating = 5,
    },

    [ABILITY_AERILATE] =
    {
        .name = _("Aerilate"),
        .description = COMPOUND_STRING("Normal moves become Flying."),
        .aiRating = 8,
    },

    [ABILITY_PARENTAL_BOND] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Parental Bond"),
    #else
        .name = _("ParentalBond"),
    #endif
        .description = COMPOUND_STRING("Moves hit twice."),
        .aiRating = 10,
    },

    [ABILITY_DARK_AURA] =
    {
        .name = _("Dark Aura"),
        .description = COMPOUND_STRING("Boosts Dark moves."),
        .aiRating = 6,
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("Fairy Aura"),
        .description = COMPOUND_STRING("Boosts Fairy moves."),
        .aiRating = 6,
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("Aura Break"),
        .description = COMPOUND_STRING("Reverse aura abilities."),
        .aiRating = 3,
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Primordial Sea"),
    #else
        .name = _("PrimrdialSea"),
    #endif
        .description = COMPOUND_STRING("Summons heavy rain."),
        .aiRating = 10,
    },

    [ABILITY_DESOLATE_LAND] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Desolate Land"),
    #else
        .name = _("DesolateLand"),
    #endif
        .description = COMPOUND_STRING("Summons intense sunlight."),
        .aiRating = 10,
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("Delta Stream"),
        .description = COMPOUND_STRING("Summons strong winds."),
        .aiRating = 10,
    },

    [ABILITY_STAMINA] =
    {
        .name = _("Stamina"),
        .description = COMPOUND_STRING(
            "When the Pokémon is hit by an\n"
            "attack, its Defense stat will\n"
            "rise."),
        .aiRating = 6,
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("Wimp Out"),
        .description = COMPOUND_STRING(
            "If the Pokémon's HP drops below\n"
            "half, it will flee and switch\n"
            "out, running away in a wild\n"
            "battle."),
        .aiRating = 3,
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Emergency Exit"),
    #else
        .name = _("EmergncyExit"),
    #endif
        .description = COMPOUND_STRING("Flees at half HP."),
        .aiRating = 3,
    },

    [ABILITY_WATER_COMPACTION] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Compaction"),
    #else
        .name = _("WtrCmpaction"),
    #endif
        .description = COMPOUND_STRING(
            "If the Pokémon is hit by a Water-\n"
            "type attack, its Defense stat\n"
            "will be sharply boosted."),
        .aiRating = 4,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("Merciless"),
        .description = COMPOUND_STRING(
            "If the Pokémon is targeting a\n"
            "poisoned foe, it will always\n"
            "land a critical hit."),
        .aiRating = 4,
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("Shields Down"),
        .description = COMPOUND_STRING("Shell breaks at half HP."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_STAKEOUT] =
    {
        .name = _("Stakeout"),
        .description = COMPOUND_STRING("Stronger as foes switch in."),
        .aiRating = 6,
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("Water Bubble"),
        .description = COMPOUND_STRING("Guards from fire and burns."),
        .aiRating = 8,
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("Steelworker"),
        .description = COMPOUND_STRING("Powers up Steel moves."),
        .aiRating = 6,
    },

    [ABILITY_BERSERK] =
    {
        .name = _("Berserk"),
        .description = COMPOUND_STRING("Boosts Sp. Atk at low HP."),
        .aiRating = 5,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("Slush Rush"),
        .description = COMPOUND_STRING(
            "When battling in a hailstorm, the\n"
            "Pokémon's Speed stat will be\n"
            "doubled."),
        .aiRating = 5,
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("Long Reach"),
        .description = COMPOUND_STRING("Never makes contact."),
        .aiRating = 3,
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("Liquid Voice"),
        .description = COMPOUND_STRING("Makes sound moves Water."),
        .aiRating = 5,
    },

    [ABILITY_TRIAGE] =
    {
        .name = _("Triage"),
        .description = COMPOUND_STRING("Healing moves go first."),
        .aiRating = 7,
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("Galvanize"),
        .description = COMPOUND_STRING("Normal moves turn Electric."),
        .aiRating = 8,
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("Surge Surfer"),
        .description = COMPOUND_STRING("Faster on electricity."),
        .aiRating = 4,
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("Hundredfold"),
        .description = COMPOUND_STRING(
            "When the Pokémon is above 1/4th\n"
            "HP, hundreds of its kind huddle\n"
            "together to make a beast."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_DISGUISE] =
    {
        .name = _("Door open."),
        .description = COMPOUND_STRING(
            "Once per battle, the Pokémon's\n"
            "snow-packed shell protects it\n"
            "from an attack."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_BATTLE_BOND] =
    {
        .name = _("Battle Bond"),
        .description = COMPOUND_STRING("Changes form after a KO."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_POWER_CONSTRUCT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Power Construct"),
    #else
        .name = _("PwrConstruct"),
    #endif
        .description = COMPOUND_STRING("Cells aid it when weakened."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_CORROSION] =
    {
        .name = _("Corrosion"),
        .description = COMPOUND_STRING(
            "The Pokémon can poison Steel- and\n"
            "Poison-type opponents. Steel-type\n"
            "opponents are weak to the\n"
            "Pokémon's Poison-type moves."),
        .aiRating = 5,
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("Sleepwalker"),
        .description = COMPOUND_STRING(
            "The Pokémon is treated as if\n"
            "it were always sleeping. It\n"
            "can still battle, but it won't\n"
            "wake up."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_QUEENLY_MAJESTY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Queenly Majesty"),
    #else
        .name = _("QueenlyMjsty"),
    #endif
        .description = COMPOUND_STRING("Protects from priority."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("Innards Out"),
        .description = COMPOUND_STRING("Hurts foe when defeated."),
        .aiRating = 5,
    },

    [ABILITY_DANCER] =
    {
        .name = _("Dancer"),
        .description = COMPOUND_STRING("Dances along with others."),
        .aiRating = 5,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("Battery"),
        .description = COMPOUND_STRING("Boosts ally's Sp. Atk."),
        .aiRating = 0,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("Fluffy"),
        .description = COMPOUND_STRING("Tougher but flammable."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("Dazzling"),
        .description = COMPOUND_STRING(
            "The Pokémon stuns opponents with\n"
            "its dazzling display, preventing\n"
            "them from using moves with\n"
            "increased priority."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("Soul-Heart"),
        .description = COMPOUND_STRING("KOs raise Sp. Atk."),
        .aiRating = 7,
    },

    [ABILITY_TANGLING_HAIR] =
    {
        .name = _("Entangling"),
        .description = COMPOUND_STRING(
            "The Pokémon's tangling kelp\n"
            "lowers the Speed and Evasion of\n"
            "any attackers who make contact."),
        .aiRating = 5,
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("Receiver"),
        .description = COMPOUND_STRING("Copies ally's ability."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POWER_OF_ALCHEMY] =
    {
        .name = _("Alchemy"),
        .description = COMPOUND_STRING(
            "If an ally faints, the Pokémon\n"
            "will copy its ability."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("Beast Boost"),
        .description = COMPOUND_STRING("KOs boost best stat."),
        .aiRating = 7,
    },

    [ABILITY_RKS_SYSTEM] =
    {
        .name = _("RKS System"),
        .description = COMPOUND_STRING("Memories change its type."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_ELECTRIC_SURGE] =
    {
        .name = _("Haywire"),
        .description = COMPOUND_STRING(
            "When entering battle, the Pokémon\n"
            "summons Static Terrain that lasts\n"
            "for 5 turns."),
        .aiRating = 8,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
        .name = _("Abstraction"),
        .description = COMPOUND_STRING(
            "When entering battle, the Pokémon\n"
            "summons Abstract Terrain that\n"
            "lasts for 5 turns."),
        .aiRating = 8,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("Misty Surge"),
        .description = COMPOUND_STRING(
            "When entering battle, the Pokémon\n"
            "summons Misty Terrain that lasts\n"
            "for 5 turns."),
        .aiRating = 8,
    },

    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("Greenhouse"),
        .description = COMPOUND_STRING(
            "When entering battle, the Pokémon\n"
            "summons Lush Terrain that lasts\n"
            "for 5 turns."),
        .aiRating = 8,
    },

    [ABILITY_FULL_METAL_BODY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Full Metal Body"),
    #else
        .name = _("FullMetalBdy"),
    #endif
        .description = COMPOUND_STRING("Prevents stat reduction."),
        .aiRating = 4,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Shadow Shield"),
    #else
        .name = _("ShadowShield"),
    #endif
        .description = COMPOUND_STRING("Halves damage at full HP."),
        .aiRating = 8,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("Prism Armor"),
        .description = COMPOUND_STRING(
            "The Pokémon's hard, reflective\n"
            "armor reduces the damage it takes\n"
            "from special and super-effective\n"
            "attacks."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("Neuroforce"),
        .description = COMPOUND_STRING("Ups “supereffective”."),
        .aiRating = 6,
    },

    [ABILITY_INTREPID_SWORD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Intrepid Sword"),
    #else
        .name = _("IntrepidSwrd"),
    #endif
        .description = COMPOUND_STRING("Ups Attack on entry."),
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Dauntless Shield"),
    #else
        .name = _("DauntlssShld"),
    #endif
        .description = COMPOUND_STRING("Ups Defense on entry."),
        .aiRating = 3,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("Libero"),
        .description = COMPOUND_STRING("Changes type to move's."),
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("Ball Fetch"),
        .description = COMPOUND_STRING("Fetches failed Poké Ball."),
        .aiRating = 0,
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("Cotton Down"),
        .description = COMPOUND_STRING("Lower Speed of all when hit."),
        .aiRating = 3,
    },

    [ABILITY_PROPELLER_TAIL] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Propeller Tail"),
    #else
        .name = _("PropellrTail"),
    #endif
        .description = COMPOUND_STRING("Ignores foe's redirection."),
        .aiRating = 2,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("Mirror Armor"),
        .description = COMPOUND_STRING("Reflect stat decreases."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("Gulp Missile"),
        .description = COMPOUND_STRING("If hit, spits prey from sea."),
        .aiRating = 3,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STALWART] =
    {
        .name = _("Stalwart"),
        .description = COMPOUND_STRING("Ignores foe's redirection."),
        .aiRating = 2,
    },

    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("Steam Engine"),
        .description = COMPOUND_STRING("Fire or Water hits up Speed."),
        .aiRating = 3,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("Resonant"),
        .description = COMPOUND_STRING(
            "The Pokémon's sound moves have\n"
            "their power boosted. The Pokémon\n"
            "takes less damage from other\n"
            "battlers' sound-based moves."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("Sand Spit"),
        .description = COMPOUND_STRING("Creates a sandstorm if hit."),
        .aiRating = 5,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("Ice Scales"),
        .description = COMPOUND_STRING("Halves special damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_RIPEN] =
    {
        .name = _("Ripen"),
        .description = COMPOUND_STRING(
            "Any berries the Pokémon holds are\n"
            "ripened, doubling the power\n"
            "of their effect wherever\n"
            "possible."),
        .aiRating = 4,
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("Ice Face"),
        .description = COMPOUND_STRING("Hail or Snow renew free hit."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .breakable = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_SPOT] =
    {
        .name = _("Power Spot"),
        .description = COMPOUND_STRING("Powers up ally moves."),
        .aiRating = 2,
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("Mimicry"),
        .description = COMPOUND_STRING(
            "The Pokémon camouflages itself\n"
            "on the battlefield, changing its\n"
            "type to match any Terrain that's\n"
            "currently present."),
        .aiRating = 2,
    },

    [ABILITY_SCREEN_CLEANER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Screen Cleaner"),
    #else
        .name = _("ScreenCleanr"),
    #endif
        .description = COMPOUND_STRING("Removes walls of light."),
        .aiRating = 3,
    },

    [ABILITY_STEELY_SPIRIT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Steely Spirit"),
    #else
        .name = _("SteelySpirit"),
    #endif
        .description = COMPOUND_STRING("Boosts ally's Steel moves."),
        .aiRating = 2,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("Perish Body"),
        .description = COMPOUND_STRING("Foe faints in 3 turns if hit."),
        .aiRating = -1,
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Wandering Spirit"),
    #else
        .name = _("WandrngSprit"),
    #endif
        .description = COMPOUND_STRING("Trade abilities on contact."),
        .aiRating = 2,
    },

    [ABILITY_GORILLA_TACTICS] =
    {
        .name = _("Goose Gall"),
        .description = COMPOUND_STRING(
            "The Pokémon's hubris boosts the\n"
            "power of its physical attacks,\n"
            "but it can only use the first\n"
            "move it chooses."),
        .aiRating = 4,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
        .name = _("Sulfur Cloud"),
        .description = COMPOUND_STRING(
            "While this Pokémon is on the\n"
            "battlefield, all other Pokémon\n"
            "have their abilities nullified."),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("Pastel Veil"),
        .description = COMPOUND_STRING("Protects team from poison."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Hunger Switch"),
    #else
        .name = _("HungerSwitch"),
    #endif
        .description = COMPOUND_STRING("Changes form each turn."),
        .aiRating = 2,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("Quick Draw"),
        .description = COMPOUND_STRING("Moves first occasionally."),
        .aiRating = 4,
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("Unseen Fist"),
        .description = COMPOUND_STRING("Contact evades protection."),
        .aiRating = 6,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Curious Medicine"),
    #else
        .name = _("CuriusMedicn"),
    #endif
        .description = COMPOUND_STRING("Remove ally's stat changes."),
        .aiRating = 3,
    },

    [ABILITY_TRANSISTOR] =
    {
        .name = _("Transistor"),
        .description = COMPOUND_STRING("Ups Electric-type moves."),
        .aiRating = 6,
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("Dragon's Maw"),
        .description = COMPOUND_STRING(
            "The Pokémon's Dragon-type attacks\n"
            "have their power boosted, as well\n"
            "as having a chance to make the\n"
            "target flinch."),
        .aiRating = 6,
    },

    [ABILITY_CHILLING_NEIGH] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Chilling Neigh"),
    #else
        .name = _("ChillngNeigh"),
    #endif
        .description = COMPOUND_STRING("KOs boost Attack stat."),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("Grim Neigh"),
        .description = COMPOUND_STRING("KOs boost Sp. Atk stat."),
        .aiRating = 7,
    },

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("As One"),
        .description = COMPOUND_STRING("Unnerve and Chilling Neigh."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_AS_ONE_SHADOW_RIDER] =
    {
        .name = _("As One"),
        .description = COMPOUND_STRING("Unnerve and Grim Neigh."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_LINGERING_AROMA] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Lingering Aroma"),
    #else
        .name = _("LngerngAroma"),
    #endif
        .description = COMPOUND_STRING("Spreads with contact."),
        .aiRating = 5,
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("Seed Sower"),
        .description = COMPOUND_STRING("When hit, changes"),
        .aiRating = 5,
    },

    [ABILITY_THERMAL_EXCHANGE] =
    {
        .name = _("Cold-Blooded"),
        .description = COMPOUND_STRING(
            "The Pokémon's ice-cold blood\n"
            "prevents it from being burned. If\n"
            "hit by a Fire-type attack, the\n"
            "warmth boosts its Attack."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("Anger Shell"),
        .description = COMPOUND_STRING("Gets angry at half HP."),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
        .name = _("Purifying Salt"),
        .description = COMPOUND_STRING(
            "The pure salt making up the\n"
            "Pokémon's body prevents all\n"
            "status conditions and reduces\n"
            "damage from Ghost-type moves."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Well-Baked Body"),
    #else
        .name = _("WellBakedBdy"),
    #endif
        .description = COMPOUND_STRING(
            "If the Pokémon is hit by a Fire-\n"
            "type attack, it takes no damage,\n"
            "instead boosting its Defense."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("Wind Rider"),
        .description = COMPOUND_STRING(
            "If the Pokémon uses a wind move\n"
            "or is hit by one from another\n"
            "battler, its Attack will be\n"
            "boosted."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("Guard Dog"),
        .description = COMPOUND_STRING(
            "If the Pokémon is indimiated,\n"
            "unsettled, taunted, or tormented,\n"
            "its Attack will be boosted\n"
            "instead of falling for it."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Rocky Payload"),
    #else
        .name = _("RockyPayload"),
    #endif
        .description = COMPOUND_STRING("Powers up Rock moves."),
        .aiRating = 6,
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("Wind Power"),
        .description = COMPOUND_STRING("Boosts Attack when using or hit\nby wind moves, or while\nTailwind is active."),
        .aiRating = 4,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("Zero to Hero"),
        .description = COMPOUND_STRING("Changes form on switch out."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_COMMANDER] =
    {
        .name = _("Commander"),
        .description = COMPOUND_STRING("Commands from Dondozo."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_ELECTROMORPHOSIS] =
    {
        .name = _("Generator"),
        .description = COMPOUND_STRING(
            "When the Pokémon is hit by an\n"
            "attack, it generates enough\n"
            "electricity to gain 1 level\n"
            "of Charge."),
        .aiRating = 5,
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
        .name = _("Dino Might"),
        .description = COMPOUND_STRING(
            "When battling in harsh sunlight,\n"
            "the Pokémon's highest stat will\n"
            "be boosted."),
        .aiRating = 7,
        .failsOnImposter = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("Quark Drive"),
        .description = COMPOUND_STRING("Elec. field ups best stat."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("Good as Gold"),
        .description = COMPOUND_STRING(
            "The Pokémon's flawless gold body\n"
            "blocks all status moves that\n"
            "target it."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Vessel of Ruin"),
    #else
        .name = _("VesselOfRuin"),
    #endif
        .description = COMPOUND_STRING("Lowers foes' sp. damage."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Sword of Ruin"),
    #else
        .name = _("SwordOfRuin"),
    #endif
        .description = COMPOUND_STRING("Lowers foes' Defense."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Tablets of Ruin"),
    #else
        .name = _("TabltsOfRuin"),
    #endif
        .description = COMPOUND_STRING("Lowers foes' damage."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Beads of Ruin"),
    #else
        .name = _("BeadsOfRuin"),
    #endif
        .description = COMPOUND_STRING("Lowers foes' Sp. Defense."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Orichalcum Pulse"),
    #else
        .name = _("OrchlcumPlse"),
    #endif
        .description = COMPOUND_STRING("Summons sunlight in battle."),
        .aiRating = 8,
    },

    [ABILITY_HADRON_ENGINE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Hadron Engine"),
    #else
        .name = _("HadronEngine"),
    #endif
        .description = COMPOUND_STRING("Field becomes Electric."),
        .aiRating = 8,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("Opportunist"),
        .description = COMPOUND_STRING("Copies foe's stat change."),
        .aiRating = 5,
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("Cud Chew"),
        .description = COMPOUND_STRING(
            "After the Pokémon eats a berry,\n"
            "it spits it back up and eats it\n"
            "again at the end of the turn."),
        .aiRating = 4,
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("Sharpness"),
        .description = COMPOUND_STRING(
            "The Pokémon's slicing moves have\n"
            "their power boosted, especially\n"
            "so when landing critical hits."),
        .aiRating = 7,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
        .name = _("Overlord"),
        .description = COMPOUND_STRING(
            "For each of its fainted allies,\n"
            "the Pokémon's attacks grow\n"
            "incrementally stronger."),
        .aiRating = 6,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("Costar"),
        .description = COMPOUND_STRING("Copies ally's stat changes."),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("Toxic Debris"),
        .description = COMPOUND_STRING(
            "When the Pokémon is hit, it\n"
            "scatters a layer of toxic spikes\n"
            "at the foes' feet."),
        .aiRating = 4,
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("Armor Tail"),
        .description = COMPOUND_STRING("Protects from priority."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("Earth Eater"),
        .description = COMPOUND_STRING(
            "If the Pokémon is hit by a\n"
            "Ground-type attack, it will have\n"
            "its HP restored instead of taking\n"
            "damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Mycelium Might"),
    #else
        .name = _("MceliumMight"),
    #endif
        .description = COMPOUND_STRING("Status moves never fail."),
        .aiRating = 2,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("Hospitality"),
        .description = COMPOUND_STRING(
            "When the Pokémon enters battle,\n"
            "some of its ally's HP is\n"
            "restored."),
        .aiRating = 5,
    },

    [ABILITY_MINDS_EYE] =
    {
        .name = _("Mind's Eye"),
        .description = COMPOUND_STRING("Keen Eye and Scrappy."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_TEAL] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Embody Aspect"),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Raises Speed."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Embody Aspect"),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Raises Attack."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Embody Aspect"),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Raises Sp. Def."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Embody Aspect"),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Raises Defense."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("Toxic Chain"),
        .description = COMPOUND_STRING("Moves can poison."),
        .aiRating = 8,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Supersweet Syrup"),
    #else
        .name = _("SuprswtSyrup"),
    #endif
        .description = COMPOUND_STRING("Lowers the foe's Speed."),
        .aiRating = 5,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("Tera Shift"),
        .description = COMPOUND_STRING("Terasteralizes upon entry."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TERA_SHELL] =
    {
        .name = _("Tera Shell"),
        .description = COMPOUND_STRING("Resistant to types at full HP."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Teraform Zero"),
    #else
        .name = _("TeraformZero"),
    #endif
        .description = COMPOUND_STRING("Removes weather and terrain."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Poison Puppeteer"),
    #else
        .name = _("PoisnPuppter"),
    #endif
        .description = COMPOUND_STRING("Confuses poisoned foes."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_FLYTRAP] =
    {
        .name = _("Flytrap"),
        .description = COMPOUND_STRING(
            "The Pokémon's sweet scent draws\n"
            "in Bug-type attacks, which\n"
            "restore its HP instead of\n"
            "dealing damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_RATIONALE] = 
    {
        .name = _("Rationale"),
        .description = COMPOUND_STRING("Takes less damage from Ghost-,\nDragon-, and Fairy-type attacks."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_PSYCHONAUT] =
    {
        .name = _("Psychonaut"),
        .description = COMPOUND_STRING("Powers up the Pokémon's\nPsychic-type attacks."),
        .aiRating = 6,
    },

    [ABILITY_HIVEMIND] =
    {
        .name = _("Hivemind"),
        .description = COMPOUND_STRING("Powers up the Pokémon's Bug-\ntype attacks."),
        .aiRating = 6,
    },

    [ABILITY_FROSTY_CHEER] =
    {
        .name = _("Frosty Cheer"),
        .description = COMPOUND_STRING(
            "The Pokémon's unwavering\n"
            "festivity boosts the power of its\n"
            "Ice-type attacks and protects it\n"
            "from hailstorms."),
        .aiRating = 6,
    },

    [ABILITY_SLUDGE_BODY] =
    {
        .name = _("Sludge Body"),
        .description = COMPOUND_STRING("Powers up Poison-type attacks.\nHalves Fairy-type damage."),
        .aiRating = 7,
    },

    [ABILITY_ARTILLERY] =
    {
        .name = _("Artillery"),
        .description = COMPOUND_STRING(
            "The Pokémon's ball, bomb, and\n"
            "other ballistic moves have\n"
            "their power boosted, ignoring\n"
            "foes' protection as well."),
        .aiRating = 6,
    },

    [ABILITY_BROADCAST] =
    {
        .name = _("Broadcast"),
        .description = COMPOUND_STRING(
            "The Pokémon's sound-based moves\n"
            "are changed to become Electric-\n"
            "type."),
        .aiRating = 5,
    },

    [ABILITY_WITCH_DOCTOR] =
    {
        .name = _("Witch Doctor"),
        .description = COMPOUND_STRING(
            "The Pokémon's keen eye boosts the\n"
            "accuracy of its own status moves\n"
            "and helps it avoid foes' status\n"
            "moves more often."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_NEGATIVE] =
    {
        .name = _("Negative"),
        .description = COMPOUND_STRING(
            "If another battler makes direct\n"
            "contact with the Pokémon, its\n"
            "negative aura may lower the\n"
            "attacker's Attack stat."),
        .aiRating = 4,
    },

    [ABILITY_APATHY] =
    {
        .name = _("Apathy"),
        .description = COMPOUND_STRING(
            "The Pokémon doesn't care. It\n"
            "ignores all stat changes for both\n"
            "itself and the opponent when\n"
            "attacking or hit."),
        .aiRating = -1,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_BEFUDDLING] =
    {
        .name = _("Befuddling"),
        .description = COMPOUND_STRING(
            "When the Pokémon is confused,\n"
            "all of its attacks deal more\n"
            "damage than usual."),
        .aiRating = 4,
    },

    [ABILITY_COSMIC_AURA] =
    {
        .name = _("Cosmic Aura"),
        .description = COMPOUND_STRING("Once per battle, boosts the\nbest stat for itself and its\nally."),
        .aiRating = 7,
    },

    [ABILITY_ATTORNEY] =
    {
        .name = _("Attorney"),
        .description = COMPOUND_STRING("Protects itself and allies below\n1/2 HP from stat drops."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_DEMOLITIONIST] =
    {
        .name = _("Demolitionist"),
        .description = COMPOUND_STRING(
            "If the Pokémon uses a self-\n"
            "destructing move while above half\n"
            "HP, it survives with a sliver of\n"
            "HP left."),
        .aiRating = 6,
    },

    [ABILITY_RECURSION] =
    {
        .name = _("Recursion"),
        .description = COMPOUND_STRING(
            "If the Pokémon uses a move\n"
            "repeatedly, the move's power\n"
            "increases with each use."),
        .aiRating = 10,
    },

    [ABILITY_RENEW] =
    {
        .name = _("Renew"),
        .description = COMPOUND_STRING(
            "At the end of each turn, the\n"
            "Pokémon may heal its status\n"
            "condition. The Pokémon also heals\n"
            "HP when switched out of battle."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_MAXIMOUS] =
    {
        .name = _("Maximous"),
        .description = COMPOUND_STRING("Allies take less damage for\neach stat boost. Blocked by\nMitimous."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_MITIMOUS] =
    {
        .name = _("Mitimous"),
        .description = COMPOUND_STRING("Foes take more damage for each\nstat drop. Blocked by\nMaximous."),
        .aiRating = 8,
    },

    [ABILITY_QUANTUM_SHIFT] =
    {
        .name = _("Quantum Shift"),
        .description = COMPOUND_STRING(
            "When the Pokémon enters battle,\n"
            "its anomalous presence\n"
            "strengthens gravity for 5 turns."),
        .aiRating = 9,
    },

    [ABILITY_MOLDY] =
    {
        .name = _("Moldy"),
        .description = COMPOUND_STRING(
            "If another battler makes direct\n"
            "contact with the Pokémon, its\n"
            "mold spores spread, blocking the\n"
            "foe from healing for 3 turns."),
        .aiRating = 4,
    },

    [ABILITY_SANDMAN] =
    {
        .name = _("Sandman"),
        .description = COMPOUND_STRING("Sand moves may cause sleep."),
        .aiRating = 4,
    },

    [ABILITY_MOMENTUM] =
    {
        .name = _("Momentum"),
        .description = COMPOUND_STRING(
            "When the Pokémonis hit by an\n"
            "attack, the kinetic energy of\n"
            "the attack boosts its Speed\n"
            "stat."),
        .aiRating = 6,
    },

    [ABILITY_DULLED] =
    {
        .name = _("Dulled"),
        .description = COMPOUND_STRING("--"),
        .aiRating = -1,
    },

    [ABILITY_DRUMMER] = 
    {
        .name = _("Drummer"),
        .description = COMPOUND_STRING(
            "All the Pokémon's sound-based\n"
            "moves become physical, rather\n"
            "than special."),
        .aiRating = 6,
    },

    [ABILITY_JUMPSCARE] = 
    {
        .name = _("Jumpscare"),
        .description = COMPOUND_STRING(
            "On the first turn the Pokémon can\n"
            "attack, all of the Pokémon's moves\n"
            "below 80 power go first and have\n"
            "a chance to make the foe flinch."),
        .aiRating = 6,
    },

    [ABILITY_TWINDRILL] =
    {
        .name = _("Twindrill"),
        .description = COMPOUND_STRING("Boosts the power and critical-\nhit ratio of piercing moves."),
        .aiRating = 7,
    },

    [ABILITY_VAMPIRIC] =
    {
        .name = _("Vampiric"),
        .description = COMPOUND_STRING(
            "The Pokémon's sharp fangs boost\n"
            "the power of its biting and\n"
            "draining moves. Draining moves\n"
            "additionally heal more HP."),
        .aiRating = 7,
    },

    [ABILITY_BOIL_OVER] =
    {
        .name = _("Boil Over"),
        .description = COMPOUND_STRING(
            "If hit by a critical hit or a\n"
            "super-effective attack, the\n"
            "Pokémon's Sp. Attack stat will\n"
            "rise."),
        .aiRating = 4,
    },

    [ABILITY_UNSETTLE] =
    {
        .name = _("Unsettle"),
        .description = COMPOUND_STRING(
            "When the Pokémon enters battle,\n"
            "it disturbs opponents, lowering\n"
            "their Sp. Attack stats."),
        .aiRating = 3,
    },
};
