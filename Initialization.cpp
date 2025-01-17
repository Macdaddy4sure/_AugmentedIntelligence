/*
    Copyright(C) 2025 Tyler Crockett | Macdaddy4sure.com

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissionsand
    limitations under the License.
*/

#include "AugmentedIntelligence.hpp"

void Initialization()
{
    // 1000_basic_dutch_words
    // 1000_basic_english_words
    // 1000_basic_ido_words
    // 1000_japanese_basic_words
    // 2000_ad
    // 200_basic_thai_words
    // a_clockwork_orange
    // abbreviations_for_english_given_names
    // abbreviations_listed_in_the_1911_encyclop
    // abjad_numerals
    // acehnese_cardinal_numerals
    // affixes_in_formosan_languages
    // afroasiatic_swadesh_lists
    // albanian_given_names
    // albanian_malesor_given_names
    // algonquian_and_iroquoian_swadesh_lists
    // alphabets
    // american_dialect_society
    // ancient_greek_first_declension
    // ancient_greek_nouns
    // ancient_greek_third_declension
    // ancient_greek_words_with_english_derivati
    // anglo_norman_spellings
    // animal_names_in_french
    // animals
    // apl
    // appendix
    // appendix_dances
    // appendix_surnames_a
    // arabic_given_names
    // arabic_influence_on_spanish
    // arabic_script
    // arabic_swadesh_list
    // arabic_verbs
    // archetypal_names
    // armenian_given_names
    // australian_english_colloquial_proper_noun
    // australian_english_colloquial_similes
    // australian_english_dated_vocabulary
    // australian_english_football_terms
    // australian_english_geographic_terms
    // australian_english_military_slang
    // australian_english_motoring_terms
    // australian_english_placeholders
    // australian_english_rhyming_slang
    // australian_english_sexual_terms
    // australian_english_smoking_terms
    // australian_english_terms_for_animals
    // australian_english_terms_for_body_parts
    // australian_english_terms_for_clothing
    // australian_english_terms_for_food_and_dri
    // australian_english_terms_for_people
    // australian_english_terms_pertaining_to_th
    // australian_english_vocabulary
    // australian_rules_football_slang
    // austroasiatic_swadesh_lists
    // austronesian_swadesh_lists
    // azerbaijani_swadesh_list
    // banjarese_cardinal_numerals
    // basic_bulgarian_glossary
    // basic_cebuano_phrases
    // basic_chinese_phrases
    // basic_english_word_list
    // basic_german_glossary
    // basic_korean_vocabulary_list
    // basic_korean_vocabulary_list_1000
    // basic_korean_vocabulary_list_1500
    // basic_korean_vocabulary_list_2000
    // basic_korean_vocabulary_list_3000
    // basic_korean_vocabulary_list_4000
    // basic_korean_vocabulary_list_500
    // basic_korean_vocabulary_list_5000
    // basic_korean_vocabulary_list_6000
    // basic_korean_vocabulary_list_7000
    // basic_korean_vocabulary_list_8000
    // basic_korean_vocabulary_list_9000
    // basic_luxembourgish_glossary
    // basic_norfuk_glossary
    // basque_given_names
    // basque_swadesh_list
    // baxter_sagart_old_chinese_reconstruction
    // baxter_sagart_old_chinese_reconstruction_
    // biblical_names
    // bleach_weapons
    // books_of_the_bible
    // books_of_the_poetic_edda
    // braille_script
    // breton_given_names
    // breton_swadesh_list
    // brief_amounts_of_time
    // calendars
    // canadian_english_military_slang
    // cannabis_slang
    // cantonese_swadesh_list
    // carib_language
    // catalan_irregular_verbs
    // catalan_swadesh_list
    // catalan_verbs
    // cb_slang
    // celtic_swadesh_lists
    // cherokee_slang
    // chinese_surnames
    // chinook_jargon
    // chinook_jargon_part_ii
    // chinook_jargon_preface
    // christian_figures_of_speech
    // chumashan_and_hokan_swadesh_lists
    // cockney_rhyming_slang
    // cognate_sets_for_dravidian_languages
    // cognate_sets_for_uralic_languages
    // colors
    // colours_alphabetical_listing
    // colours_colour_grouping
    // common_hindi_words
    // common_persian_verbs
    // common_russian_verbs
    // common_short_words_in_the_english_languag
    // common_short_words_in_the_icelandic_langu
    // comparison_of_hiragana_and_katakana_deriv
    // constellations
    // contours
    // control_characters
    // countries_and_territories_of_the_world
    // cuneiform_script
    // cyrillic_script
    // czech_basic_words
    // czech_given_names
    // czech_idioms
    // czech_nouns
    // czech_similes
    // czech_verbs
    // dances
    // danish_given_names
    // danish_given_names_in_greenland
    // danish_numerals
    // danish_surnames
    // danish_swadesh_list
    // dc_comics_derivations
    // declensions
    // deep_gratitude
    // dene_yeniseian_swadesh_lists
    // dutch_diminutives_of_given_names
    // dutch_given_names
    // dutch_parts_of_speech
    // dutch_swadesh_list
    // dutch_toponyms
    // easily_confused_chinese_characters
    // easily_confused_japanese_kana
    // ecclesiastical_terms
    // egyptian_arabic_swadesh_list
    // english_19th_century_idioms
    // english_adverbs
    // english_alphabet
    // english_articles
    // english_autological_terms
    // english_catenative_verbs
    // english_censored_words
    // english_collateral_adjectives
    // english_collective_nouns
    // english_collocations_leave
    // english_contranyms
    // english_copulae
    // english_dialect_dependent_homophones
    // english_dialect_independent_homophones
    // english_dictionary_only_terms
    // english_dictionary_only_terms_of_native_a
    // english_dictionary_only_terms_zzxjoanw
    // english_ergative_verbs
    // english_esperanto_relations
    // english_french_relations
    // english_gerund_participles
    // english_given_names
    // english_given_names_usa_
    // english_grammar
    // english_hungarian_translation_methods
    // english_ing_forms
    // english_internet_slang
    // english_irregular_nouns
    // english_irregular_verbs
    // english_isograms
    // english_legal_terms
    // english_malapropisms
    // english_metonyms
    // english_nouns
    // english_nouns_with_restricted_non_referen
    // english_numerals
    // english_parts_of_speech
    // english_phrasal_verbs
    // english_phrasebook
    // english_phrasebook_health
    // english_phrasebook_religion
    // english_phrasebook_sex
    // english_prefixes
    // english_pronouns
    // english_pronunciation
    // english_proper_nouns
    // english_proverbs
    // english_sexual_slurs
    // english_siamese_twins
    // english_similes
    // english_snowclones
    // english_suffixes
    // english_surnames_england_and_wales_
    // english_surnames_from_anglo_norman
    // english_surnames_from_old_english
    // english_surnames_scotland_
    // english_surnames_united_states_
    // english_tag_questions
    // english_terms_for_mythological_characters
    // english_terms_for_outsiders
    // english_terms_for_religious_opponents
    // english_terms_of_eskimo_aleut_origin
    // english_terms_of_eskimo_aleut_origin_plac
    // english_terms_of_korean_origin
    // english_terms_of_native_american_origin
    // english_terms_of_native_central_american_
    // english_terms_of_native_north_american_or
    // english_terms_of_native_south_american_or
    // english_terms_where_ch_sounds_as_sh_
    // english_toilet_slang
    // english_toponyms
    // english_unattested_phobias
    // english_uncountable_nouns
    // english_verbs
    // english_wiki_jargon
    // english_words_by_latin_antecedents
    // english_words_containing_q_not_followed_b
    // english_writing_device_keyboards
    // erroneous_forms_resulting_from_automatic_
    // eskimo_aleut_basic_vocabulary
    // esperanto_diminutives_of_given_names
    // esperanto_french_relations
    // esperanto_german_relations
    // esperanto_pronunciation
    // esperanto_verbs
    // esperanto_words_listed_in_the_akademia_vo
    // esperanto_words_listed_in_the_akademia_vo_1
    // estonian_conjugation
    // estonian_given_names
    // estonian_nominal_inflection
    // estonian_swadesh_list
    // etymology_cowabunga
    // etymology_escalator
    // fabrics
    // faroese_given_names
    // female_given_names_a
    // female_given_names_b
    // female_given_names_c
    // female_given_names_d
    // female_given_names_e
    // female_given_names_f
    // female_given_names_g
    // female_given_names_h
    // female_given_names_i
    // female_given_names_j
    // female_given_names_k
    // female_given_names_l
    // female_given_names_m
    // female_given_names_n
    // female_given_names_o
    // female_given_names_p
    // female_given_names_q
    // female_given_names_r
    // female_given_names_s
    // female_given_names_t
    // female_given_names_u
    // female_given_names_v
    // female_given_names_w
    // female_given_names_x
    // female_given_names_y
    // female_given_names_z
    // fictional_english_curse_words
    // fiji_hindi_terms_derived_from_english
    // fijian_loan_words_in_fiji_hindi
    // finnish_conjugation
    // finnish_conjugation_katketa
    // finnish_conjugation_muistaa
    // finnish_conjugation_salata
    // finnish_conjugation_selvita
    // finnish_conjugation_soutaa
    // finnish_conjugation_tulla
    // finnish_conjugation_vanheta
    // finnish_ela_
    // finnish_given_names
    // finnish_idioms
    // finnish_impersonal_verbs
    // finnish_inflection
    // finnish_nominal_inflection
    // finnish_nominal_inflection_askel
    // finnish_nominal_inflection_hame
    // finnish_nominal_inflection_kahdeksas
    // finnish_nominal_inflection_kalleus
    // finnish_nominal_inflection_kevat
    // finnish_nominal_inflection_koira
    // finnish_nominal_inflection_kynsi
    // finnish_nominal_inflection_laatikko
    // finnish_nominal_inflection_lammin
    // finnish_nominal_inflection_lapsi
    // finnish_nominal_inflection_nalle
    // finnish_nominal_inflection_ohut
    // finnish_nominal_inflection_onneton
    // finnish_nominal_inflection_risti
    // finnish_nominal_inflection_sisar
    // finnish_nominal_inflection_solakka
    // finnish_nominal_inflection_tiili
    // finnish_nominal_inflection_toimi
    // finnish_nominal_inflection_tuhat
    // finnish_nominal_inflection_uni
    // finnish_nominal_inflection_vasen
    // finnish_nominal_inflection_veitsi
    // finnish_nominal_inflection_vieras
    // finnish_numbers
    // finnish_ole_
    // finnish_participles
    // finnish_postpositions
    // finnish_spelling_alphabet
    // finnish_suffixes
    // finnish_surnames
    // finnish_tuo_
    // finnish_verbs
    // flemish_given_names
    // fr_countries
    // fr_musical_instruments
    // french_auxiliary_verbs
    // french_basic_words
    // french_defective_verbs
    // french_diminutives_of_given_names
    // french_expressions
    // french_given_names
    // french_irregular_verbs
    // french_names_of_colours_listecoul_l
    // french_nouns
    // french_numbers
    // french_past_participles
    // french_prefixes
    // french_pronunciation
    // french_proverbs
    // french_republican_calendar
    // french_spelling_alphabet
    // french_spelling_reforms_of_1990
    // french_spellings
    // french_suffixes
    // french_verbs
    // galician_pronouns
    // geologic_timescale
    // geordie_english
    // georgian_adjectives
    // georgian_noun_declension
    // georgian_script
    // georgian_swadesh_list
    // georgian_verbs
    // german_given_names
    // german_isograms
    // german_spelling_alphabet
    // german_surnames
    // german_swadesh_list
    // german_verbs
    // gestures
    // ghanaian_given_names
    // glossary
    // glossary_of_abstract_algebra
    // glossary_of_architecture
    // glossary_of_atmospheric_reentry
    // glossary_of_automotive_design
    // glossary_of_ayurveda
    // glossary_of_backgammon
    // glossary_of_bagpipe_terms
    // glossary_of_ballet
    // glossary_of_baseball
    // glossary_of_baseball_jargon_0_9_
    // glossary_of_baseball_jargon_a_
    // glossary_of_baseball_jargon_b_
    // glossary_of_baseball_jargon_c_
    // glossary_of_baseball_jargon_d_
    // glossary_of_baseball_jargon_e_
    // glossary_of_baseball_jargon_f_
    // glossary_of_baseball_jargon_g_
    // glossary_of_baseball_jargon_h_
    // glossary_of_baseball_jargon_i_
    // glossary_of_baseball_jargon_j_
    // glossary_of_baseball_jargon_k_
    // glossary_of_baseball_jargon_l_
    // glossary_of_baseball_jargon_m_
    // glossary_of_baseball_jargon_n_
    // glossary_of_baseball_jargon_o_
    // glossary_of_baseball_jargon_p_
    // glossary_of_baseball_jargon_q_
    // glossary_of_baseball_jargon_r_
    // glossary_of_baseball_jargon_s_
    // glossary_of_baseball_jargon_t_
    // glossary_of_baseball_jargon_u_
    // glossary_of_baseball_jargon_v_
    // glossary_of_baseball_jargon_w_
    // glossary_of_baseball_jargon_y_
    // glossary_of_basketball
    // glossary_of_blogging
    // glossary_of_boston_slang
    // glossary_of_british_firefighting
    // glossary_of_british_military_slang_and_ex
    // glossary_of_canadian_english
    // glossary_of_card_games
    // glossary_of_chess
    // glossary_of_child_pejoratives
    // glossary_of_christianity
    // glossary_of_climbing_and_mountaineering
    // glossary_of_collective_nouns_by_collectiv
    // glossary_of_computer_programming
    // glossary_of_contract_bridge
    // glossary_of_cricket
    // glossary_of_cryptography
    // glossary_of_dental_terms
    // glossary_of_e_learning
    // glossary_of_ecology
    // glossary_of_english_apocopations
    // glossary_of_fallacies
    // glossary_of_farscape_terms
    // glossary_of_fighting_games
    // glossary_of_figure_skating
    // glossary_of_finance
    // glossary_of_game_theory
    // glossary_of_genetics
    // glossary_of_golf
    // glossary_of_grammar
    // glossary_of_graph_theory
    // glossary_of_group_theory
    // glossary_of_hiberno_english_slang_and_jar
    // glossary_of_hinduism
    // glossary_of_idioms_w
    // glossary_of_invasion_biology
    // glossary_of_isigqumo
    // glossary_of_japanese_sex_terms
    // glossary_of_java_programming_language_ter
    // glossary_of_jewish_terms
    // glossary_of_legal_terms
    // glossary_of_legal_terms_in_technology
    // glossary_of_library_and_information_scien
    // glossary_of_linear_algebra
    // glossary_of_logic
    // glossary_of_lumberjack_jargon
    // glossary_of_machine_vision
    // glossary_of_mahjong_the_game
    // glossary_of_military_slang
    // glossary_of_nautical_terms
    // glossary_of_neuroanatomy
    // glossary_of_opera
    // glossary_of_ophthalmology
    // glossary_of_order_theory
    // glossary_of_paintball
    // glossary_of_panamanian_spanish
    // glossary_of_parts_of_speech
    // glossary_of_philosophical_isms
    // glossary_of_philosophy
    // glossary_of_pinball
    // glossary_of_poetry_terms
    // glossary_of_poker_terminology
    // glossary_of_politics_of_the_netherlands
    // glossary_of_portrait_graphics
    // glossary_of_probability_and_statistics
    // glossary_of_psychiatry
    // glossary_of_punting_in_australia_and_new_
    // glossary_of_quality_management
    // glossary_of_rhetoric
    // glossary_of_romanian_profanity
    // glossary_of_scottish_slang_and_jargon
    // glossary_of_scuba_diving
    // glossary_of_sculpting
    // glossary_of_semantics
    // glossary_of_set_theory
    // glossary_of_south_african_english_regiona
    // glossary_of_surfing
    // glossary_of_textile_manufacturing_terms
    // glossary_of_textspeak
    // glossary_of_the_polish_scouting_and_guidi
    // glossary_of_theatre
    // glossary_of_topology
    // glossary_of_traumatology
    // glossary_of_trinidadian_english
    // glossary_of_truck_terminology
    // glossary_of_two_letter_english_words
    // glossary_of_typography
    // glossary_of_u
    // glossary_of_unified_modeling_language
    // glossary_of_viniculture
    // glossary_of_water_polo
    // glossary_of_welsh_words_of_english_origin
    // glossary_of_woodworking
    // go_jargon
    // gothic_minor_declensions
    // gothic_strong_declension
    // grammatical_gender
    // greek
    // greek_determiners
    // greek_nouns
    // greek_phrasebook_food_and_drink
    // greek_prefixes
    // greek_pronouns
    // greek_pronunciation
    // greek_punctuation
    // greek_script
    // greek_suffixes
    // greek_verbs
    // greek_word_lists
    // greek_word_lists_1
    // greek_word_lists_2
    // greek_word_lists_3
    // greek_word_lists_4
    // greek_word_lists_5
    // greek_word_lists_6
    // greek_word_lists_7
    // greek_word_lists_8
    // griko_index
    // harry_potter
    // harry_potter_characters
    // harry_potter_events
    // harry_potter_franchise
    // harry_potter_objects
    // harry_potter_places
    // hausa_swadesh_list
    // hawaiian_given_names
    // hebrew_alphabet
    // hebrew_given_names
    // hebrew_numbers
    // hebrew_parts_of_speech
    // hebrew_pronouns
    // hebrew_verbs
    // hiligaynon_phrases
    // hindi_pronunciation
    // hindu_arabic_script
    // hindu_units_of_measurement
    // hiragana_script
    // holidays
    // hsk_list_of_mandarin_words_advanced_manda
    // hsk_list_of_mandarin_words_beginning_mand
    // hsk_list_of_mandarin_words_elementary_man
    // human_bones
    // hungarian_female_given_names
    // hungarian_given_names
    // hungarian_male_given_names
    // hungarian_phrasebook_religion
    // hungarian_possessive_suffixes
    // hungarian_postpositions
    // hungarian_pronouns
    // hungarian_pronunciation_assimilation
    // hungarian_pronunciation_pairs
    // hungarian_suffixes
    // hungarian_surnames
    // hungarian_two_letter_words
    // hungarian_verbal_prefixes
    // hungarian_words_
    // hungarian_words_a
    // hungarian_words_b
    // hungarian_words_c
    // hungarian_words_cs
    // hungarian_words_d
    // hungarian_words_e
    // hungarian_words_ending_in_asz_esz
    // hungarian_words_ending_in_izmus
    // hungarian_words_f
    // hungarian_words_g
    // hungarian_words_gy
    // hungarian_words_h
    // hungarian_words_i
    // hungarian_words_j
    // hungarian_words_k
    // hungarian_words_l
    // hungarian_words_m
    // hungarian_words_n
    // hungarian_words_ny
    // hungarian_words_o
    // hungarian_words_of_time
    // hungarian_words_p
    // hungarian_words_r
    // hungarian_words_s
    // hungarian_words_sz
    // hungarian_words_t
    // hungarian_words_u
    // hungarian_words_v
    // hungarian_words_with_dzs
    // hungarian_words_with_ly
    // hungarian_words_z
    // hungarian_words_zs
    // i_don_t_speak_full
    // iata_airport_codes
    // iata_airport_codes_a
    // iata_airport_codes_b
    // iata_airport_codes_c
    // iata_airport_codes_d
    // iata_airport_codes_e
    // iata_airport_codes_f
    // iata_airport_codes_g
    // iata_airport_codes_h
    // iata_airport_codes_i
    // iata_airport_codes_j
    // iata_airport_codes_k
    // iata_airport_codes_l
    // iata_airport_codes_m
    // iata_airport_codes_n
    // iata_airport_codes_o
    // iata_airport_codes_p
    // iata_airport_codes_q
    // iata_airport_codes_r
    // iata_airport_codes_s
    // iata_airport_codes_t
    // iata_airport_codes_u
    // iata_airport_codes_v
    // iata_airport_codes_w
    // iata_airport_codes_x
    // iata_airport_codes_y
    // iata_airport_codes_z
    // icelandic_given_names
    // icelandic_swadesh_list
    // indian_given_names
    // indian_surnames
    // indian_surnames_arora_
    // indian_surnames_bunt_
    // indian_surnames_chitpavan_
    // indian_surnames_goan_christian_
    // indian_surnames_khatri_
    // indian_surnames_paravar_
    // indian_surnames_shivalli_
    // indo_iranian_swadesh_lists
    // indonesian_affixes
    // indonesian_given_names
    // indonesian_numerals
    // indonesian_swadesh_list
    // interlingua
    // interlingua_ab
    // interlingua_ac
    // interlingua_ad
    // interlingua_ae
    // interlingua_af
    // interlingua_ag
    // interlingua_ai
    // interlingua_aj
    // interlingua_al
    // interlingua_am
    // interlingua_an
    // interlingua_ap
    // interlingua_aq
    // interlingua_ar
    // interlingua_as
    // interlingua_at
    // interlingua_au
    // interlingua_av
    // interlingua_ax
    // interlingua_az
    // interlingua_ba
    // interlingua_be
    // interlingua_bi
    // interlingua_bl
    // interlingua_bo
    // interlingua_br
    // interlingua_bu
    // interlingua_by
    // interlingua_ca
    // interlingua_ce
    // interlingua_ch
    // interlingua_ci
    // interlingua_cl
    // interlingua_co
    // interlingua_con
    // interlingua_cr
    // interlingua_cu
    // interlingua_cy
    // interlingua_da
    // interlingua_de
    // interlingua_di
    // interlingua_do
    // interlingua_dr
    // interlingua_du
    // interlingua_dy
    // interlingua_eb
    // interlingua_ec
    // interlingua_ed
    // interlingua_ef
    // interlingua_eg
    // interlingua_ei
    // interlingua_ej
    // interlingua_el
    // interlingua_em
    // interlingua_en
    // interlingua_eo
    // interlingua_ep
    // interlingua_eq
    // interlingua_er
    // interlingua_es
    // interlingua_et
    // interlingua_eu
    // interlingua_ev
    // interlingua_ex
    // interlingua_fa
    // interlingua_fe
    // interlingua_fi
    // interlingua_fl
    // interlingua_fo
    // interlingua_fr
    // interlingua_fu
    // irish_first_declension_nouns
    // irish_given_names
    // irish_mutations
    // irish_pronunciation
    // irish_surnames
    // italian_given_names
    // italian_nouns
    // italian_numbers
    // italian_prefixes
    // italian_spelling_alphabet
    // italian_suffixes
    // italian_surnames
    // italian_swadesh_list
    // j
    // japanese_given_names
    // japanese_glossary
    // japanese_kanji_by_jis_x_0208_kuten_code
    // japanese_prefix_and_suffix_index
    // japanese_surnames
    // japanese_sushi_terms
    // japanese_swadesh_list
    // japanese_swadesh_list_extended_
    // japanese_tea_ceremony_terms
    // japanese_verbs
    // japanese_words_written_in_mixed_kana
    // jewish_surnames
    // jlpt_n1
    // jlpt_n2
    // jlpt_n3
    // jlpt_n4
    // jlpt_n5
    // joyo_kanji_by_reading
    // kangaroo_words
    // katakana_script
    // klingon
    // klingon_nuqneh
    // knots
    // knuth_numeric_system
    // korean_script
    // korean_spelling_alphabet
    // korean_surnames
    // korean_terms_of_family_and_kinship
    // korean_words_transliterated_in_english
    // kra_dai_swadesh_lists
    // kurdish_given_names
    // latin_cardinal_numerals
    // latin_fifth_declension
    // latin_first_conjugation
    // latin_first_declension
    // latin_forms_of_english_given_names
    // latin_fourth_conjugation
    // latin_fourth_declension
    // latin_gerunds
    // latin_irregular_verbs
    // latin_nouns
    // latin_praenomina
    // latin_pronunciation
    // latin_script
    // latin_script_alphabets
    // latin_second_conjugation
    // latin_second_declension
    // latin_third_conjugation
    // latin_third_declension
    // latin_verbs
    // latvian_alphabet
    // latvian_given_names
    // legal_translation_dictionaries
    // lingala_swadesh_list
    // lingua_franca_nova
    // list_of_adjectives_indicating_shape
    // list_of_arora_surnames
    // list_of_astronomical_terms
    // list_of_balkanisms
    // list_of_english_back_formations
    // list_of_english_copulae
    // list_of_english_words_where_c_is_pronounc
    // list_of_english_words_where_g_is_pronounc
    // list_of_finnish_homonyms
    // list_of_forms_of_government
    // list_of_german_cognates_with_english
    // list_of_germanic_and_latinate_equivalents
    // list_of_glossing_abbreviations
    // list_of_legal_doctrines
    // list_of_legal_latin_terms
    // list_of_longest_english_monosyllable_word
    // list_of_nautical_terms
    // list_of_portmanteaux
    // list_of_protologisms
    // list_of_protologisms_a_f
    // list_of_protologisms_long_words_rinderken
    // list_of_protologisms_long_words_titin
    // list_of_protologisms_long_words_titin_ger
    // list_of_protologisms_non_english
    // list_of_protologisms_q_z
    // list_of_terms_used_for_germans
    // lithuanian_given_names
    // lojban_cabna
    // lojban_co_u
    // lojban_daptutra
    // lojban_de_i
    // lojban_gi_e
    // lojban_gonai
    // lojban_judri
    // lojban_klama
    // lojban_le_avla
    // lojban_lojban
    // lojban_lu_o
    // lojban_malglico
    // lojban_pi_e
    // lojban_simxu
    // lojban_su_o
    // lojban_su_u
    // lojban_ti_u
    // lojban_zgana
    // lojban_zo_u
    // lower_sorbian_given_names
    // luo_surnames
    // macedonian_alphabet
    // macedonian_articles
    // macedonian_given_names_of_biblical_origin
    // macushi_words
    // malagasy_swadesh_list
    // malay_affixes
    // malay_cardinal_numerals
    // malay_given_names
    // malay_words_of_tamil_origin
    // male_given_names_a
    // male_given_names_b
    // male_given_names_c
    // male_given_names_d
    // male_given_names_e
    // male_given_names_f
    // male_given_names_g
    // male_given_names_h
    // male_given_names_i
    // male_given_names_j
    // male_given_names_k
    // male_given_names_l
    // male_given_names_m
    // male_given_names_n
    // male_given_names_o
    // male_given_names_p
    // male_given_names_q
    // male_given_names_r
    // male_given_names_s
    // male_given_names_t
    // male_given_names_u
    // male_given_names_v
    // male_given_names_w
    // male_given_names_x
    // male_given_names_y
    // male_given_names_z
    // maltese_given_names
    // maltese_surnames
    // mandarin_exonyms_for_japanese_placenames
    // mandarin_swadesh_list
    // manias
    // maori_swadesh_list
    // mapudungun_affixes
    // mapudungun_alphabet
    // mapudungun_verbs
    // mathematics
    // mayan_swadesh_lists
    // menus
    // menus_french
}