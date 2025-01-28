#pragma once
#include <map>
#include <string>
#include <utility>
using namespace std;


// Used ChatGPT for getTypeChart since I didn't want to write all the type interaction stuff out by hand
std::map<std::pair<string, string>, float> getTypeChart() {
    std::map<std::pair<string, string>, float> typechart;


    const string types[] = {
        "Normal", "Fire", "Water", "Electric", "Grass", "Ice", "Fighting",
        "Poison", "Ground", "Flying", "Psychic", "Bug", "Rock", "Ghost",
        "Dragon", "Dark", "Steel", "Fairy"
    };

    // Initialize all interactions to 1.0, will modify for specific interactions
    for (const auto& attacker : types) {
        for (const auto& defender : types) {
            typechart[{attacker, defender}] = 1.0;
        }
    }


    // Handle specific cases here

    // Normal
    typechart[{ "Normal", "Rock" }] = 0.5;
    typechart[{ "Normal", "Ghost" }] = 0.0;
    typechart[{ "Normal", "Steel" }] = 0.5;

    // Fire
    typechart[{ "Fire", "Grass" }] = 2.0;
    typechart[{ "Fire", "Ice" }] = 2.0;
    typechart[{ "Fire", "Bug" }] = 2.0;
    typechart[{ "Fire", "Steel" }] = 2.0;
    typechart[{ "Fire", "Fire" }] = 0.5;
    typechart[{ "Fire", "Water" }] = 0.5;
    typechart[{ "Fire", "Rock" }] = 0.5;
    typechart[{ "Fire", "Dragon" }] = 0.5;

    // Water
    typechart[{ "Water", "Fire" }] = 2.0;
    typechart[{ "Water", "Ground" }] = 2.0;
    typechart[{ "Water", "Rock" }] = 2.0;
    typechart[{ "Water", "Water" }] = 0.5;
    typechart[{ "Water", "Grass" }] = 0.5;
    typechart[{ "Water", "Dragon" }] = 0.5;

    // Electric
    typechart[{ "Electric", "Water" }] = 2.0;
    typechart[{ "Electric", "Flying" }] = 2.0;
    typechart[{ "Electric", "Electric" }] = 0.5;
    typechart[{ "Electric", "Grass" }] = 0.5;
    typechart[{ "Electric", "Ground" }] = 0.0;
    typechart[{ "Electric", "Dragon" }] = 0.5;

    // Grass
    typechart[{ "Grass", "Water" }] = 2.0;
    typechart[{ "Grass", "Ground" }] = 2.0;
    typechart[{ "Grass", "Rock" }] = 2.0;
    typechart[{ "Grass", "Fire" }] = 0.5;
    typechart[{ "Grass", "Grass" }] = 0.5;
    typechart[{ "Grass", "Poison" }] = 0.5;
    typechart[{ "Grass", "Flying" }] = 0.5;
    typechart[{ "Grass", "Bug" }] = 0.5;
    typechart[{ "Grass", "Dragon" }] = 0.5;
    typechart[{ "Grass", "Steel" }] = 0.5;

    // Ice
    typechart[{ "Ice", "Grass" }] = 2.0;
    typechart[{ "Ice", "Ground" }] = 2.0;
    typechart[{ "Ice", "Flying" }] = 2.0;
    typechart[{ "Ice", "Dragon" }] = 2.0;
    typechart[{ "Ice", "Fire" }] = 0.5;
    typechart[{ "Ice", "Water" }] = 0.5;
    typechart[{ "Ice", "Ice" }] = 0.5;
    typechart[{ "Ice", "Steel" }] = 0.5;

    // Fighting
    typechart[{ "Fighting", "Normal" }] = 2.0;
    typechart[{ "Fighting", "Rock" }] = 2.0;
    typechart[{ "Fighting", "Steel" }] = 2.0;
    typechart[{ "Fighting", "Ice" }] = 2.0;
    typechart[{ "Fighting", "Dark" }] = 2.0;
    typechart[{ "Fighting", "Ghost" }] = 0.0;
    typechart[{ "Fighting", "Poison" }] = 0.5;
    typechart[{ "Fighting", "Flying" }] = 0.5;
    typechart[{ "Fighting", "Psychic" }] = 0.5;
    typechart[{ "Fighting", "Bug" }] = 0.5;
    typechart[{ "Fighting", "Fairy" }] = 0.5;

    // Poison
    typechart[{ "Poison", "Grass" }] = 2.0;
    typechart[{ "Poison", "Fairy" }] = 2.0;
    typechart[{ "Poison", "Poison" }] = 0.5;
    typechart[{ "Poison", "Ground" }] = 0.5;
    typechart[{ "Poison", "Rock" }] = 0.5;
    typechart[{ "Poison", "Ghost" }] = 0.5;
    typechart[{ "Poison", "Steel" }] = 0.0;

    // Ground
    typechart[{ "Ground", "Fire" }] = 2.0;
    typechart[{ "Ground", "Electric" }] = 2.0;
    typechart[{ "Ground", "Poison" }] = 2.0;
    typechart[{ "Ground", "Rock" }] = 2.0;
    typechart[{ "Ground", "Steel" }] = 2.0;
    typechart[{ "Ground", "Grass" }] = 0.5;
    typechart[{ "Ground", "Bug" }] = 0.5;
    typechart[{ "Ground", "Flying" }] = 0.0;

    // Flying
    typechart[{ "Flying", "Grass" }] = 2.0;
    typechart[{ "Flying", "Fighting" }] = 2.0;
    typechart[{ "Flying", "Bug" }] = 2.0;
    typechart[{ "Flying", "Electric" }] = 0.5;
    typechart[{ "Flying", "Rock" }] = 0.5;
    typechart[{ "Flying", "Steel" }] = 0.5;

    // Psychic
    typechart[{ "Psychic", "Fighting" }] = 2.0;
    typechart[{ "Psychic", "Poison" }] = 2.0;
    typechart[{ "Psychic", "Psychic" }] = 0.5;
    typechart[{ "Psychic", "Steel" }] = 0.5;
    typechart[{ "Psychic", "Dark" }] = 0.0;

    // Bug
    typechart[{ "Bug", "Grass" }] = 2.0;
    typechart[{ "Bug", "Psychic" }] = 2.0;
    typechart[{ "Bug", "Dark" }] = 2.0;
    typechart[{ "Bug", "Fire" }] = 0.5;
    typechart[{ "Bug", "Fighting" }] = 0.5;
    typechart[{ "Bug", "Poison" }] = 0.5;
    typechart[{ "Bug", "Flying" }] = 0.5;
    typechart[{ "Bug", "Ghost" }] = 0.5;
    typechart[{ "Bug", "Steel" }] = 0.5;
    typechart[{ "Bug", "Fairy" }] = 0.5;

    // Ghost
    typechart[{ "Ghost", "Ghost" }] = 2.0;
    typechart[{ "Ghost", "Psychic" }] = 2.0;
    typechart[{ "Ghost", "Normal" }] = 0.0;
    typechart[{ "Ghost", "Dark" }] = 0.5;

    // Dragon
    typechart[{ "Dragon", "Dragon" }] = 2.0;
    typechart[{ "Dragon", "Steel" }] = 0.5;
    typechart[{ "Dragon", "Fairy" }] = 0.0;

    // Dark
    typechart[{ "Dark", "Psychic" }] = 2.0;
    typechart[{ "Dark", "Ghost" }] = 2.0;
    typechart[{ "Dark", "Fighting" }] = 0.5;
    typechart[{ "Dark", "Dark" }] = 0.5;
    typechart[{ "Dark", "Fairy" }] = 0.5;

    // Steel
    typechart[{ "Steel", "Fairy" }] = 2.0;
    typechart[{ "Steel", "Ice" }] = 2.0;
    typechart[{ "Steel", "Rock" }] = 2.0;
    typechart[{ "Steel", "Fire" }] = 0.5;
    typechart[{ "Steel", "Water" }] = 0.5;
    typechart[{ "Steel", "Electric" }] = 0.5;
    typechart[{ "Steel", "Steel" }] = 0.5;

    // Fairy
    typechart[{ "Fairy", "Fighting" }] = 2.0;
    typechart[{ "Fairy", "Dragon" }] = 2.0;
    typechart[{ "Fairy", "Dark" }] = 2.0;
    typechart[{ "Fairy", "Fire" }] = 0.5;
    typechart[{ "Fairy", "Poison" }] = 0.5;
    typechart[{ "Fairy", "Steel" }] = 0.5;

    return typechart;
}

