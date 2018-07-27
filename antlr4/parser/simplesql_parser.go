// Code generated from SimpleSql.g4 by ANTLR 4.7.1. DO NOT EDIT.

package parser // SimpleSql

import (
	"fmt"
	"reflect"
	"strconv"

	"github.com/antlr/antlr4/runtime/Go/antlr"
)

// Suppress unused import errors
var _ = fmt.Printf
var _ = reflect.Copy
var _ = strconv.Itoa

var parserATN = []uint16{
	3, 24715, 42794, 33075, 47597, 16764, 15335, 30598, 22884, 3, 87, 606,
	4, 2, 9, 2, 4, 3, 9, 3, 4, 4, 9, 4, 4, 5, 9, 5, 4, 6, 9, 6, 4, 7, 9, 7,
	4, 8, 9, 8, 4, 9, 9, 9, 4, 10, 9, 10, 4, 11, 9, 11, 4, 12, 9, 12, 4, 13,
	9, 13, 4, 14, 9, 14, 4, 15, 9, 15, 4, 16, 9, 16, 4, 17, 9, 17, 4, 18, 9,
	18, 4, 19, 9, 19, 4, 20, 9, 20, 4, 21, 9, 21, 4, 22, 9, 22, 4, 23, 9, 23,
	4, 24, 9, 24, 4, 25, 9, 25, 4, 26, 9, 26, 4, 27, 9, 27, 4, 28, 9, 28, 4,
	29, 9, 29, 4, 30, 9, 30, 4, 31, 9, 31, 4, 32, 9, 32, 4, 33, 9, 33, 3, 2,
	6, 2, 68, 10, 2, 13, 2, 14, 2, 69, 3, 2, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3,
	5, 3, 78, 10, 3, 3, 3, 5, 3, 81, 10, 3, 3, 4, 3, 4, 5, 4, 85, 10, 4, 3,
	4, 5, 4, 88, 10, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 5, 4, 95, 10, 4, 3, 4,
	3, 4, 3, 4, 3, 4, 3, 4, 7, 4, 102, 10, 4, 12, 4, 14, 4, 105, 11, 4, 5,
	4, 107, 10, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 7, 4, 116, 10,
	4, 12, 4, 14, 4, 119, 11, 4, 5, 4, 121, 10, 4, 3, 5, 3, 5, 3, 5, 3, 5,
	5, 5, 127, 10, 5, 3, 5, 5, 5, 130, 10, 5, 3, 5, 5, 5, 133, 10, 5, 3, 5,
	5, 5, 136, 10, 5, 3, 5, 5, 5, 139, 10, 5, 3, 5, 3, 5, 7, 5, 143, 10, 5,
	12, 5, 14, 5, 146, 11, 5, 3, 6, 3, 6, 5, 6, 150, 10, 6, 3, 6, 3, 6, 3,
	6, 3, 6, 3, 6, 7, 6, 157, 10, 6, 12, 6, 14, 6, 160, 11, 6, 3, 6, 5, 6,
	163, 10, 6, 3, 6, 5, 6, 166, 10, 6, 3, 6, 5, 6, 169, 10, 6, 3, 6, 5, 6,
	172, 10, 6, 3, 7, 3, 7, 5, 7, 176, 10, 7, 3, 7, 3, 7, 3, 7, 5, 7, 181,
	10, 7, 3, 7, 5, 7, 184, 10, 7, 3, 7, 5, 7, 187, 10, 7, 3, 8, 3, 8, 3, 8,
	3, 8, 7, 8, 193, 10, 8, 12, 8, 14, 8, 196, 11, 8, 5, 8, 198, 10, 8, 3,
	9, 3, 9, 3, 9, 3, 10, 3, 10, 3, 10, 3, 11, 3, 11, 3, 11, 3, 12, 3, 12,
	3, 12, 3, 13, 3, 13, 3, 13, 3, 13, 3, 13, 3, 14, 3, 14, 3, 14, 3, 14, 5,
	14, 221, 10, 14, 3, 15, 3, 15, 3, 15, 3, 16, 3, 16, 3, 16, 7, 16, 229,
	10, 16, 12, 16, 14, 16, 232, 11, 16, 3, 17, 3, 17, 7, 17, 236, 10, 17,
	12, 17, 14, 17, 239, 11, 17, 3, 17, 3, 17, 3, 17, 7, 17, 244, 10, 17, 12,
	17, 14, 17, 247, 11, 17, 3, 17, 3, 17, 5, 17, 251, 10, 17, 3, 18, 3, 18,
	5, 18, 255, 10, 18, 3, 18, 5, 18, 258, 10, 18, 3, 18, 3, 18, 3, 18, 3,
	18, 3, 18, 5, 18, 265, 10, 18, 3, 18, 5, 18, 268, 10, 18, 3, 18, 3, 18,
	3, 18, 3, 18, 3, 18, 3, 18, 5, 18, 276, 10, 18, 3, 19, 5, 19, 279, 10,
	19, 3, 19, 3, 19, 3, 19, 3, 19, 5, 19, 285, 10, 19, 3, 19, 3, 19, 5, 19,
	289, 10, 19, 3, 19, 3, 19, 3, 19, 3, 19, 5, 19, 295, 10, 19, 3, 19, 3,
	19, 3, 19, 5, 19, 300, 10, 19, 5, 19, 302, 10, 19, 3, 19, 3, 19, 3, 19,
	3, 19, 5, 19, 308, 10, 19, 5, 19, 310, 10, 19, 3, 20, 3, 20, 3, 20, 5,
	20, 315, 10, 20, 3, 20, 3, 20, 3, 20, 3, 20, 3, 20, 7, 20, 322, 10, 20,
	12, 20, 14, 20, 325, 11, 20, 3, 20, 5, 20, 328, 10, 20, 3, 20, 3, 20, 5,
	20, 332, 10, 20, 3, 21, 3, 21, 3, 21, 3, 21, 3, 21, 3, 21, 3, 21, 3, 21,
	3, 21, 3, 21, 7, 21, 344, 10, 21, 12, 21, 14, 21, 347, 11, 21, 5, 21, 349,
	10, 21, 3, 22, 3, 22, 3, 22, 7, 22, 354, 10, 22, 12, 22, 14, 22, 357, 11,
	22, 3, 23, 3, 23, 3, 23, 3, 23, 5, 23, 363, 10, 23, 3, 24, 3, 24, 3, 24,
	3, 24, 3, 24, 3, 24, 3, 24, 3, 24, 7, 24, 373, 10, 24, 12, 24, 14, 24,
	376, 11, 24, 3, 24, 5, 24, 379, 10, 24, 3, 24, 3, 24, 3, 24, 3, 24, 3,
	24, 3, 24, 3, 24, 3, 24, 5, 24, 389, 10, 24, 3, 24, 3, 24, 3, 24, 3, 24,
	3, 24, 6, 24, 396, 10, 24, 13, 24, 14, 24, 397, 3, 24, 3, 24, 5, 24, 402,
	10, 24, 3, 24, 3, 24, 3, 24, 3, 24, 5, 24, 408, 10, 24, 3, 24, 3, 24, 3,
	24, 3, 24, 3, 24, 3, 24, 3, 24, 3, 24, 3, 24, 3, 24, 3, 24, 5, 24, 421,
	10, 24, 3, 24, 3, 24, 3, 24, 3, 24, 5, 24, 427, 10, 24, 3, 24, 3, 24, 3,
	24, 3, 24, 3, 24, 3, 24, 3, 24, 5, 24, 436, 10, 24, 3, 24, 3, 24, 3, 24,
	3, 24, 3, 24, 3, 24, 3, 24, 5, 24, 445, 10, 24, 3, 24, 3, 24, 3, 24, 3,
	24, 3, 24, 7, 24, 452, 10, 24, 12, 24, 14, 24, 455, 11, 24, 5, 24, 457,
	10, 24, 3, 24, 5, 24, 460, 10, 24, 3, 24, 7, 24, 463, 10, 24, 12, 24, 14,
	24, 466, 11, 24, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25,
	7, 25, 476, 10, 25, 12, 25, 14, 25, 479, 11, 25, 3, 25, 5, 25, 482, 10,
	25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25, 5, 25, 492,
	10, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25, 6, 25, 499, 10, 25, 13, 25,
	14, 25, 500, 3, 25, 3, 25, 5, 25, 505, 10, 25, 3, 25, 3, 25, 3, 25, 3,
	25, 5, 25, 511, 10, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25,
	3, 25, 3, 25, 3, 25, 3, 25, 5, 25, 524, 10, 25, 3, 25, 3, 25, 3, 25, 3,
	25, 5, 25, 530, 10, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25,
	5, 25, 539, 10, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3,
	25, 3, 25, 3, 25, 3, 25, 5, 25, 552, 10, 25, 3, 25, 3, 25, 5, 25, 556,
	10, 25, 3, 25, 3, 25, 3, 25, 3, 25, 3, 25, 7, 25, 563, 10, 25, 12, 25,
	14, 25, 566, 11, 25, 5, 25, 568, 10, 25, 3, 25, 7, 25, 571, 10, 25, 12,
	25, 14, 25, 574, 11, 25, 3, 26, 3, 26, 3, 26, 7, 26, 579, 10, 26, 12, 26,
	14, 26, 582, 11, 26, 3, 27, 3, 27, 5, 27, 586, 10, 27, 3, 28, 3, 28, 3,
	29, 3, 29, 3, 30, 3, 30, 3, 31, 3, 31, 5, 31, 596, 10, 31, 3, 31, 3, 31,
	5, 31, 600, 10, 31, 3, 32, 3, 32, 3, 33, 3, 33, 3, 33, 2, 4, 46, 48, 34,
	2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38,
	40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 2, 11, 3, 2, 44, 45,
	4, 2, 57, 57, 63, 63, 3, 2, 59, 60, 3, 2, 71, 72, 4, 2, 19, 20, 23, 25,
	4, 2, 31, 32, 35, 36, 5, 2, 21, 22, 30, 30, 33, 33, 3, 2, 7, 8, 6, 2, 12,
	12, 17, 18, 80, 80, 84, 86, 2, 689, 2, 67, 3, 2, 2, 2, 4, 77, 3, 2, 2,
	2, 6, 82, 3, 2, 2, 2, 8, 122, 3, 2, 2, 2, 10, 147, 3, 2, 2, 2, 12, 173,
	3, 2, 2, 2, 14, 197, 3, 2, 2, 2, 16, 199, 3, 2, 2, 2, 18, 202, 3, 2, 2,
	2, 20, 205, 3, 2, 2, 2, 22, 208, 3, 2, 2, 2, 24, 211, 3, 2, 2, 2, 26, 216,
	3, 2, 2, 2, 28, 222, 3, 2, 2, 2, 30, 225, 3, 2, 2, 2, 32, 250, 3, 2, 2,
	2, 34, 275, 3, 2, 2, 2, 36, 309, 3, 2, 2, 2, 38, 331, 3, 2, 2, 2, 40, 348,
	3, 2, 2, 2, 42, 350, 3, 2, 2, 2, 44, 358, 3, 2, 2, 2, 46, 407, 3, 2, 2,
	2, 48, 510, 3, 2, 2, 2, 50, 575, 3, 2, 2, 2, 52, 585, 3, 2, 2, 2, 54, 587,
	3, 2, 2, 2, 56, 589, 3, 2, 2, 2, 58, 591, 3, 2, 2, 2, 60, 599, 3, 2, 2,
	2, 62, 601, 3, 2, 2, 2, 64, 603, 3, 2, 2, 2, 66, 68, 5, 4, 3, 2, 67, 66,
	3, 2, 2, 2, 68, 69, 3, 2, 2, 2, 69, 67, 3, 2, 2, 2, 69, 70, 3, 2, 2, 2,
	70, 71, 3, 2, 2, 2, 71, 72, 7, 2, 2, 3, 72, 3, 3, 2, 2, 2, 73, 78, 5, 6,
	4, 2, 74, 78, 5, 8, 5, 2, 75, 78, 5, 10, 6, 2, 76, 78, 5, 12, 7, 2, 77,
	73, 3, 2, 2, 2, 77, 74, 3, 2, 2, 2, 77, 75, 3, 2, 2, 2, 77, 76, 3, 2, 2,
	2, 78, 80, 3, 2, 2, 2, 79, 81, 7, 37, 2, 2, 80, 79, 3, 2, 2, 2, 80, 81,
	3, 2, 2, 2, 81, 5, 3, 2, 2, 2, 82, 84, 7, 67, 2, 2, 83, 85, 7, 68, 2, 2,
	84, 83, 3, 2, 2, 2, 84, 85, 3, 2, 2, 2, 85, 87, 3, 2, 2, 2, 86, 88, 7,
	69, 2, 2, 87, 86, 3, 2, 2, 2, 87, 88, 3, 2, 2, 2, 88, 89, 3, 2, 2, 2, 89,
	106, 5, 54, 28, 2, 90, 91, 7, 27, 2, 2, 91, 92, 5, 50, 26, 2, 92, 93, 7,
	26, 2, 2, 93, 95, 3, 2, 2, 2, 94, 90, 3, 2, 2, 2, 94, 95, 3, 2, 2, 2, 95,
	96, 3, 2, 2, 2, 96, 107, 5, 40, 21, 2, 97, 98, 7, 70, 2, 2, 98, 103, 5,
	44, 23, 2, 99, 100, 7, 38, 2, 2, 100, 102, 5, 44, 23, 2, 101, 99, 3, 2,
	2, 2, 102, 105, 3, 2, 2, 2, 103, 101, 3, 2, 2, 2, 103, 104, 3, 2, 2, 2,
	104, 107, 3, 2, 2, 2, 105, 103, 3, 2, 2, 2, 106, 94, 3, 2, 2, 2, 106, 97,
	3, 2, 2, 2, 107, 120, 3, 2, 2, 2, 108, 109, 7, 62, 2, 2, 109, 110, 7, 74,
	2, 2, 110, 111, 7, 75, 2, 2, 111, 112, 7, 76, 2, 2, 112, 117, 5, 44, 23,
	2, 113, 114, 7, 38, 2, 2, 114, 116, 5, 44, 23, 2, 115, 113, 3, 2, 2, 2,
	116, 119, 3, 2, 2, 2, 117, 115, 3, 2, 2, 2, 117, 118, 3, 2, 2, 2, 118,
	121, 3, 2, 2, 2, 119, 117, 3, 2, 2, 2, 120, 108, 3, 2, 2, 2, 120, 121,
	3, 2, 2, 2, 121, 7, 3, 2, 2, 2, 122, 123, 7, 3, 2, 2, 123, 124, 5, 14,
	8, 2, 124, 126, 5, 16, 9, 2, 125, 127, 5, 18, 10, 2, 126, 125, 3, 2, 2,
	2, 126, 127, 3, 2, 2, 2, 127, 129, 3, 2, 2, 2, 128, 130, 5, 20, 11, 2,
	129, 128, 3, 2, 2, 2, 129, 130, 3, 2, 2, 2, 130, 132, 3, 2, 2, 2, 131,
	133, 5, 22, 12, 2, 132, 131, 3, 2, 2, 2, 132, 133, 3, 2, 2, 2, 133, 135,
	3, 2, 2, 2, 134, 136, 5, 24, 13, 2, 135, 134, 3, 2, 2, 2, 135, 136, 3,
	2, 2, 2, 136, 138, 3, 2, 2, 2, 137, 139, 5, 26, 14, 2, 138, 137, 3, 2,
	2, 2, 138, 139, 3, 2, 2, 2, 139, 144, 3, 2, 2, 2, 140, 141, 7, 66, 2, 2,
	141, 143, 5, 8, 5, 2, 142, 140, 3, 2, 2, 2, 143, 146, 3, 2, 2, 2, 144,
	142, 3, 2, 2, 2, 144, 145, 3, 2, 2, 2, 145, 9, 3, 2, 2, 2, 146, 144, 3,
	2, 2, 2, 147, 149, 7, 76, 2, 2, 148, 150, 7, 68, 2, 2, 149, 148, 3, 2,
	2, 2, 149, 150, 3, 2, 2, 2, 150, 151, 3, 2, 2, 2, 151, 152, 5, 30, 16,
	2, 152, 153, 7, 70, 2, 2, 153, 158, 5, 44, 23, 2, 154, 155, 7, 38, 2, 2,
	155, 157, 5, 44, 23, 2, 156, 154, 3, 2, 2, 2, 157, 160, 3, 2, 2, 2, 158,
	156, 3, 2, 2, 2, 158, 159, 3, 2, 2, 2, 159, 162, 3, 2, 2, 2, 160, 158,
	3, 2, 2, 2, 161, 163, 5, 18, 10, 2, 162, 161, 3, 2, 2, 2, 162, 163, 3,
	2, 2, 2, 163, 165, 3, 2, 2, 2, 164, 166, 5, 20, 11, 2, 165, 164, 3, 2,
	2, 2, 165, 166, 3, 2, 2, 2, 166, 168, 3, 2, 2, 2, 167, 169, 5, 22, 12,
	2, 168, 167, 3, 2, 2, 2, 168, 169, 3, 2, 2, 2, 169, 171, 3, 2, 2, 2, 170,
	172, 5, 24, 13, 2, 171, 170, 3, 2, 2, 2, 171, 172, 3, 2, 2, 2, 172, 11,
	3, 2, 2, 2, 173, 175, 7, 77, 2, 2, 174, 176, 7, 68, 2, 2, 175, 174, 3,
	2, 2, 2, 175, 176, 3, 2, 2, 2, 176, 177, 3, 2, 2, 2, 177, 178, 7, 5, 2,
	2, 178, 180, 5, 54, 28, 2, 179, 181, 5, 18, 10, 2, 180, 179, 3, 2, 2, 2,
	180, 181, 3, 2, 2, 2, 181, 183, 3, 2, 2, 2, 182, 184, 5, 24, 13, 2, 183,
	182, 3, 2, 2, 2, 183, 184, 3, 2, 2, 2, 184, 186, 3, 2, 2, 2, 185, 187,
	5, 20, 11, 2, 186, 185, 3, 2, 2, 2, 186, 187, 3, 2, 2, 2, 187, 13, 3, 2,
	2, 2, 188, 198, 7, 25, 2, 2, 189, 194, 5, 38, 20, 2, 190, 191, 7, 38, 2,
	2, 191, 193, 5, 38, 20, 2, 192, 190, 3, 2, 2, 2, 193, 196, 3, 2, 2, 2,
	194, 192, 3, 2, 2, 2, 194, 195, 3, 2, 2, 2, 195, 198, 3, 2, 2, 2, 196,
	194, 3, 2, 2, 2, 197, 188, 3, 2, 2, 2, 197, 189, 3, 2, 2, 2, 198, 15, 3,
	2, 2, 2, 199, 200, 7, 5, 2, 2, 200, 201, 5, 30, 16, 2, 201, 17, 3, 2, 2,
	2, 202, 203, 7, 6, 2, 2, 203, 204, 5, 46, 24, 2, 204, 19, 3, 2, 2, 2, 205,
	206, 7, 51, 2, 2, 206, 207, 7, 80, 2, 2, 207, 21, 3, 2, 2, 2, 208, 209,
	7, 52, 2, 2, 209, 210, 7, 80, 2, 2, 210, 23, 3, 2, 2, 2, 211, 212, 7, 40,
	2, 2, 212, 213, 7, 42, 2, 2, 213, 214, 5, 56, 29, 2, 214, 215, 9, 2, 2,
	2, 215, 25, 3, 2, 2, 2, 216, 217, 7, 41, 2, 2, 217, 218, 7, 42, 2, 2, 218,
	220, 5, 56, 29, 2, 219, 221, 5, 28, 15, 2, 220, 219, 3, 2, 2, 2, 220, 221,
	3, 2, 2, 2, 221, 27, 3, 2, 2, 2, 222, 223, 7, 78, 2, 2, 223, 224, 5, 46,
	24, 2, 224, 29, 3, 2, 2, 2, 225, 230, 5, 32, 17, 2, 226, 227, 7, 38, 2,
	2, 227, 229, 5, 32, 17, 2, 228, 226, 3, 2, 2, 2, 229, 232, 3, 2, 2, 2,
	230, 228, 3, 2, 2, 2, 230, 231, 3, 2, 2, 2, 231, 31, 3, 2, 2, 2, 232, 230,
	3, 2, 2, 2, 233, 237, 5, 34, 18, 2, 234, 236, 5, 36, 19, 2, 235, 234, 3,
	2, 2, 2, 236, 239, 3, 2, 2, 2, 237, 235, 3, 2, 2, 2, 237, 238, 3, 2, 2,
	2, 238, 251, 3, 2, 2, 2, 239, 237, 3, 2, 2, 2, 240, 241, 7, 27, 2, 2, 241,
	245, 5, 34, 18, 2, 242, 244, 5, 36, 19, 2, 243, 242, 3, 2, 2, 2, 244, 247,
	3, 2, 2, 2, 245, 243, 3, 2, 2, 2, 245, 246, 3, 2, 2, 2, 246, 248, 3, 2,
	2, 2, 247, 245, 3, 2, 2, 2, 248, 249, 7, 26, 2, 2, 249, 251, 3, 2, 2, 2,
	250, 233, 3, 2, 2, 2, 250, 240, 3, 2, 2, 2, 251, 33, 3, 2, 2, 2, 252, 257,
	5, 54, 28, 2, 253, 255, 7, 4, 2, 2, 254, 253, 3, 2, 2, 2, 254, 255, 3,
	2, 2, 2, 255, 256, 3, 2, 2, 2, 256, 258, 7, 79, 2, 2, 257, 254, 3, 2, 2,
	2, 257, 258, 3, 2, 2, 2, 258, 276, 3, 2, 2, 2, 259, 265, 5, 8, 5, 2, 260,
	261, 7, 27, 2, 2, 261, 262, 5, 8, 5, 2, 262, 263, 7, 26, 2, 2, 263, 265,
	3, 2, 2, 2, 264, 259, 3, 2, 2, 2, 264, 260, 3, 2, 2, 2, 265, 267, 3, 2,
	2, 2, 266, 268, 7, 4, 2, 2, 267, 266, 3, 2, 2, 2, 267, 268, 3, 2, 2, 2,
	268, 269, 3, 2, 2, 2, 269, 270, 7, 79, 2, 2, 270, 276, 3, 2, 2, 2, 271,
	272, 7, 27, 2, 2, 272, 273, 5, 30, 16, 2, 273, 274, 7, 26, 2, 2, 274, 276,
	3, 2, 2, 2, 275, 252, 3, 2, 2, 2, 275, 264, 3, 2, 2, 2, 275, 271, 3, 2,
	2, 2, 276, 35, 3, 2, 2, 2, 277, 279, 9, 3, 2, 2, 278, 277, 3, 2, 2, 2,
	278, 279, 3, 2, 2, 2, 279, 280, 3, 2, 2, 2, 280, 281, 7, 61, 2, 2, 281,
	284, 5, 34, 18, 2, 282, 283, 7, 62, 2, 2, 283, 285, 5, 48, 25, 2, 284,
	282, 3, 2, 2, 2, 284, 285, 3, 2, 2, 2, 285, 310, 3, 2, 2, 2, 286, 288,
	9, 4, 2, 2, 287, 289, 7, 58, 2, 2, 288, 287, 3, 2, 2, 2, 288, 289, 3, 2,
	2, 2, 289, 290, 3, 2, 2, 2, 290, 291, 7, 61, 2, 2, 291, 294, 5, 34, 18,
	2, 292, 293, 7, 62, 2, 2, 293, 295, 5, 48, 25, 2, 294, 292, 3, 2, 2, 2,
	294, 295, 3, 2, 2, 2, 295, 310, 3, 2, 2, 2, 296, 301, 7, 64, 2, 2, 297,
	299, 9, 4, 2, 2, 298, 300, 7, 58, 2, 2, 299, 298, 3, 2, 2, 2, 299, 300,
	3, 2, 2, 2, 300, 302, 3, 2, 2, 2, 301, 297, 3, 2, 2, 2, 301, 302, 3, 2,
	2, 2, 302, 303, 3, 2, 2, 2, 303, 304, 7, 61, 2, 2, 304, 307, 5, 34, 18,
	2, 305, 306, 7, 62, 2, 2, 306, 308, 5, 48, 25, 2, 307, 305, 3, 2, 2, 2,
	307, 308, 3, 2, 2, 2, 308, 310, 3, 2, 2, 2, 309, 278, 3, 2, 2, 2, 309,
	286, 3, 2, 2, 2, 309, 296, 3, 2, 2, 2, 310, 37, 3, 2, 2, 2, 311, 314, 5,
	56, 29, 2, 312, 313, 7, 4, 2, 2, 313, 315, 5, 56, 29, 2, 314, 312, 3, 2,
	2, 2, 314, 315, 3, 2, 2, 2, 315, 332, 3, 2, 2, 2, 316, 317, 5, 58, 30,
	2, 317, 327, 7, 27, 2, 2, 318, 323, 5, 46, 24, 2, 319, 320, 7, 38, 2, 2,
	320, 322, 5, 46, 24, 2, 321, 319, 3, 2, 2, 2, 322, 325, 3, 2, 2, 2, 323,
	321, 3, 2, 2, 2, 323, 324, 3, 2, 2, 2, 324, 328, 3, 2, 2, 2, 325, 323,
	3, 2, 2, 2, 326, 328, 7, 25, 2, 2, 327, 318, 3, 2, 2, 2, 327, 326, 3, 2,
	2, 2, 327, 328, 3, 2, 2, 2, 328, 329, 3, 2, 2, 2, 329, 330, 7, 26, 2, 2,
	330, 332, 3, 2, 2, 2, 331, 311, 3, 2, 2, 2, 331, 316, 3, 2, 2, 2, 332,
	39, 3, 2, 2, 2, 333, 349, 5, 8, 5, 2, 334, 335, 9, 5, 2, 2, 335, 336, 7,
	27, 2, 2, 336, 337, 5, 42, 22, 2, 337, 345, 7, 26, 2, 2, 338, 339, 7, 38,
	2, 2, 339, 340, 7, 27, 2, 2, 340, 341, 5, 42, 22, 2, 341, 342, 7, 26, 2,
	2, 342, 344, 3, 2, 2, 2, 343, 338, 3, 2, 2, 2, 344, 347, 3, 2, 2, 2, 345,
	343, 3, 2, 2, 2, 345, 346, 3, 2, 2, 2, 346, 349, 3, 2, 2, 2, 347, 345,
	3, 2, 2, 2, 348, 333, 3, 2, 2, 2, 348, 334, 3, 2, 2, 2, 349, 41, 3, 2,
	2, 2, 350, 355, 5, 52, 27, 2, 351, 352, 7, 38, 2, 2, 352, 354, 5, 52, 27,
	2, 353, 351, 3, 2, 2, 2, 354, 357, 3, 2, 2, 2, 355, 353, 3, 2, 2, 2, 355,
	356, 3, 2, 2, 2, 356, 43, 3, 2, 2, 2, 357, 355, 3, 2, 2, 2, 358, 359, 5,
	56, 29, 2, 359, 362, 7, 30, 2, 2, 360, 363, 5, 46, 24, 2, 361, 363, 7,
	73, 2, 2, 362, 360, 3, 2, 2, 2, 362, 361, 3, 2, 2, 2, 363, 45, 3, 2, 2,
	2, 364, 365, 8, 24, 1, 2, 365, 366, 7, 34, 2, 2, 366, 408, 5, 46, 24, 10,
	367, 368, 5, 58, 30, 2, 368, 378, 7, 27, 2, 2, 369, 374, 5, 46, 24, 2,
	370, 371, 7, 38, 2, 2, 371, 373, 5, 46, 24, 2, 372, 370, 3, 2, 2, 2, 373,
	376, 3, 2, 2, 2, 374, 372, 3, 2, 2, 2, 374, 375, 3, 2, 2, 2, 375, 379,
	3, 2, 2, 2, 376, 374, 3, 2, 2, 2, 377, 379, 7, 25, 2, 2, 378, 369, 3, 2,
	2, 2, 378, 377, 3, 2, 2, 2, 378, 379, 3, 2, 2, 2, 379, 380, 3, 2, 2, 2,
	380, 381, 7, 26, 2, 2, 381, 408, 3, 2, 2, 2, 382, 383, 7, 27, 2, 2, 383,
	384, 5, 46, 24, 2, 384, 385, 7, 26, 2, 2, 385, 408, 3, 2, 2, 2, 386, 388,
	7, 46, 2, 2, 387, 389, 5, 46, 24, 2, 388, 387, 3, 2, 2, 2, 388, 389, 3,
	2, 2, 2, 389, 395, 3, 2, 2, 2, 390, 391, 7, 47, 2, 2, 391, 392, 5, 46,
	24, 2, 392, 393, 7, 48, 2, 2, 393, 394, 5, 46, 24, 2, 394, 396, 3, 2, 2,
	2, 395, 390, 3, 2, 2, 2, 396, 397, 3, 2, 2, 2, 397, 395, 3, 2, 2, 2, 397,
	398, 3, 2, 2, 2, 398, 401, 3, 2, 2, 2, 399, 400, 7, 49, 2, 2, 400, 402,
	5, 46, 24, 2, 401, 399, 3, 2, 2, 2, 401, 402, 3, 2, 2, 2, 402, 403, 3,
	2, 2, 2, 403, 404, 7, 50, 2, 2, 404, 408, 3, 2, 2, 2, 405, 408, 5, 64,
	33, 2, 406, 408, 5, 60, 31, 2, 407, 364, 3, 2, 2, 2, 407, 367, 3, 2, 2,
	2, 407, 382, 3, 2, 2, 2, 407, 386, 3, 2, 2, 2, 407, 405, 3, 2, 2, 2, 407,
	406, 3, 2, 2, 2, 408, 464, 3, 2, 2, 2, 409, 410, 12, 15, 2, 2, 410, 411,
	9, 6, 2, 2, 411, 463, 5, 46, 24, 16, 412, 413, 12, 14, 2, 2, 413, 414,
	9, 7, 2, 2, 414, 463, 5, 46, 24, 15, 415, 416, 12, 13, 2, 2, 416, 417,
	9, 8, 2, 2, 417, 463, 5, 46, 24, 14, 418, 420, 12, 12, 2, 2, 419, 421,
	7, 34, 2, 2, 420, 419, 3, 2, 2, 2, 420, 421, 3, 2, 2, 2, 421, 422, 3, 2,
	2, 2, 422, 423, 7, 13, 2, 2, 423, 463, 5, 46, 24, 13, 424, 426, 12, 11,
	2, 2, 425, 427, 7, 34, 2, 2, 426, 425, 3, 2, 2, 2, 426, 427, 3, 2, 2, 2,
	427, 428, 3, 2, 2, 2, 428, 429, 7, 65, 2, 2, 429, 463, 5, 46, 24, 12, 430,
	431, 12, 9, 2, 2, 431, 432, 9, 9, 2, 2, 432, 463, 5, 46, 24, 10, 433, 435,
	12, 6, 2, 2, 434, 436, 7, 34, 2, 2, 435, 434, 3, 2, 2, 2, 435, 436, 3,
	2, 2, 2, 436, 437, 3, 2, 2, 2, 437, 438, 7, 15, 2, 2, 438, 439, 5, 46,
	24, 2, 439, 440, 7, 7, 2, 2, 440, 441, 5, 46, 24, 7, 441, 463, 3, 2, 2,
	2, 442, 444, 12, 16, 2, 2, 443, 445, 7, 34, 2, 2, 444, 443, 3, 2, 2, 2,
	444, 445, 3, 2, 2, 2, 445, 446, 3, 2, 2, 2, 446, 447, 7, 14, 2, 2, 447,
	459, 7, 27, 2, 2, 448, 453, 5, 46, 24, 2, 449, 450, 7, 38, 2, 2, 450, 452,
	5, 46, 24, 2, 451, 449, 3, 2, 2, 2, 452, 455, 3, 2, 2, 2, 453, 451, 3,
	2, 2, 2, 453, 454, 3, 2, 2, 2, 454, 457, 3, 2, 2, 2, 455, 453, 3, 2, 2,
	2, 456, 448, 3, 2, 2, 2, 456, 457, 3, 2, 2, 2, 457, 460, 3, 2, 2, 2, 458,
	460, 5, 8, 5, 2, 459, 456, 3, 2, 2, 2, 459, 458, 3, 2, 2, 2, 460, 461,
	3, 2, 2, 2, 461, 463, 7, 26, 2, 2, 462, 409, 3, 2, 2, 2, 462, 412, 3, 2,
	2, 2, 462, 415, 3, 2, 2, 2, 462, 418, 3, 2, 2, 2, 462, 424, 3, 2, 2, 2,
	462, 430, 3, 2, 2, 2, 462, 433, 3, 2, 2, 2, 462, 442, 3, 2, 2, 2, 463,
	466, 3, 2, 2, 2, 464, 462, 3, 2, 2, 2, 464, 465, 3, 2, 2, 2, 465, 47, 3,
	2, 2, 2, 466, 464, 3, 2, 2, 2, 467, 468, 8, 25, 1, 2, 468, 469, 7, 34,
	2, 2, 469, 511, 5, 48, 25, 10, 470, 471, 5, 58, 30, 2, 471, 481, 7, 27,
	2, 2, 472, 477, 5, 46, 24, 2, 473, 474, 7, 38, 2, 2, 474, 476, 5, 46, 24,
	2, 475, 473, 3, 2, 2, 2, 476, 479, 3, 2, 2, 2, 477, 475, 3, 2, 2, 2, 477,
	478, 3, 2, 2, 2, 478, 482, 3, 2, 2, 2, 479, 477, 3, 2, 2, 2, 480, 482,
	7, 25, 2, 2, 481, 472, 3, 2, 2, 2, 481, 480, 3, 2, 2, 2, 481, 482, 3, 2,
	2, 2, 482, 483, 3, 2, 2, 2, 483, 484, 7, 26, 2, 2, 484, 511, 3, 2, 2, 2,
	485, 486, 7, 27, 2, 2, 486, 487, 5, 48, 25, 2, 487, 488, 7, 26, 2, 2, 488,
	511, 3, 2, 2, 2, 489, 491, 7, 46, 2, 2, 490, 492, 5, 48, 25, 2, 491, 490,
	3, 2, 2, 2, 491, 492, 3, 2, 2, 2, 492, 498, 3, 2, 2, 2, 493, 494, 7, 47,
	2, 2, 494, 495, 5, 48, 25, 2, 495, 496, 7, 48, 2, 2, 496, 497, 5, 48, 25,
	2, 497, 499, 3, 2, 2, 2, 498, 493, 3, 2, 2, 2, 499, 500, 3, 2, 2, 2, 500,
	498, 3, 2, 2, 2, 500, 501, 3, 2, 2, 2, 501, 504, 3, 2, 2, 2, 502, 503,
	7, 49, 2, 2, 503, 505, 5, 48, 25, 2, 504, 502, 3, 2, 2, 2, 504, 505, 3,
	2, 2, 2, 505, 506, 3, 2, 2, 2, 506, 507, 7, 50, 2, 2, 507, 511, 3, 2, 2,
	2, 508, 511, 5, 62, 32, 2, 509, 511, 5, 60, 31, 2, 510, 467, 3, 2, 2, 2,
	510, 470, 3, 2, 2, 2, 510, 485, 3, 2, 2, 2, 510, 489, 3, 2, 2, 2, 510,
	508, 3, 2, 2, 2, 510, 509, 3, 2, 2, 2, 511, 572, 3, 2, 2, 2, 512, 513,
	12, 15, 2, 2, 513, 514, 9, 6, 2, 2, 514, 571, 5, 48, 25, 16, 515, 516,
	12, 14, 2, 2, 516, 517, 9, 7, 2, 2, 517, 571, 5, 48, 25, 15, 518, 519,
	12, 13, 2, 2, 519, 520, 9, 8, 2, 2, 520, 571, 5, 48, 25, 14, 521, 523,
	12, 12, 2, 2, 522, 524, 7, 34, 2, 2, 523, 522, 3, 2, 2, 2, 523, 524, 3,
	2, 2, 2, 524, 525, 3, 2, 2, 2, 525, 526, 7, 13, 2, 2, 526, 571, 5, 48,
	25, 13, 527, 529, 12, 11, 2, 2, 528, 530, 7, 34, 2, 2, 529, 528, 3, 2,
	2, 2, 529, 530, 3, 2, 2, 2, 530, 531, 3, 2, 2, 2, 531, 532, 7, 65, 2, 2,
	532, 571, 5, 48, 25, 12, 533, 534, 12, 9, 2, 2, 534, 535, 9, 9, 2, 2, 535,
	571, 5, 48, 25, 10, 536, 538, 12, 6, 2, 2, 537, 539, 7, 34, 2, 2, 538,
	537, 3, 2, 2, 2, 538, 539, 3, 2, 2, 2, 539, 540, 3, 2, 2, 2, 540, 541,
	7, 15, 2, 2, 541, 542, 5, 48, 25, 2, 542, 543, 7, 7, 2, 2, 543, 544, 5,
	48, 25, 7, 544, 571, 3, 2, 2, 2, 545, 551, 12, 17, 2, 2, 546, 547, 7, 10,
	2, 2, 547, 552, 7, 12, 2, 2, 548, 549, 7, 10, 2, 2, 549, 550, 7, 34, 2,
	2, 550, 552, 7, 12, 2, 2, 551, 546, 3, 2, 2, 2, 551, 548, 3, 2, 2, 2, 552,
	571, 3, 2, 2, 2, 553, 555, 12, 16, 2, 2, 554, 556, 7, 34, 2, 2, 555, 554,
	3, 2, 2, 2, 555, 556, 3, 2, 2, 2, 556, 557, 3, 2, 2, 2, 557, 558, 7, 14,
	2, 2, 558, 567, 7, 27, 2, 2, 559, 564, 5, 48, 25, 2, 560, 561, 7, 38, 2,
	2, 561, 563, 5, 48, 25, 2, 562, 560, 3, 2, 2, 2, 563, 566, 3, 2, 2, 2,
	564, 562, 3, 2, 2, 2, 564, 565, 3, 2, 2, 2, 565, 568, 3, 2, 2, 2, 566,
	564, 3, 2, 2, 2, 567, 559, 3, 2, 2, 2, 567, 568, 3, 2, 2, 2, 568, 569,
	3, 2, 2, 2, 569, 571, 7, 26, 2, 2, 570, 512, 3, 2, 2, 2, 570, 515, 3, 2,
	2, 2, 570, 518, 3, 2, 2, 2, 570, 521, 3, 2, 2, 2, 570, 527, 3, 2, 2, 2,
	570, 533, 3, 2, 2, 2, 570, 536, 3, 2, 2, 2, 570, 545, 3, 2, 2, 2, 570,
	553, 3, 2, 2, 2, 571, 574, 3, 2, 2, 2, 572, 570, 3, 2, 2, 2, 572, 573,
	3, 2, 2, 2, 573, 49, 3, 2, 2, 2, 574, 572, 3, 2, 2, 2, 575, 580, 7, 79,
	2, 2, 576, 577, 7, 38, 2, 2, 577, 579, 7, 79, 2, 2, 578, 576, 3, 2, 2,
	2, 579, 582, 3, 2, 2, 2, 580, 578, 3, 2, 2, 2, 580, 581, 3, 2, 2, 2, 581,
	51, 3, 2, 2, 2, 582, 580, 3, 2, 2, 2, 583, 586, 5, 62, 32, 2, 584, 586,
	7, 73, 2, 2, 585, 583, 3, 2, 2, 2, 585, 584, 3, 2, 2, 2, 586, 53, 3, 2,
	2, 2, 587, 588, 7, 79, 2, 2, 588, 55, 3, 2, 2, 2, 589, 590, 7, 79, 2, 2,
	590, 57, 3, 2, 2, 2, 591, 592, 7, 79, 2, 2, 592, 59, 3, 2, 2, 2, 593, 600,
	7, 79, 2, 2, 594, 596, 7, 79, 2, 2, 595, 594, 3, 2, 2, 2, 595, 596, 3,
	2, 2, 2, 596, 597, 3, 2, 2, 2, 597, 598, 7, 39, 2, 2, 598, 600, 7, 79,
	2, 2, 599, 593, 3, 2, 2, 2, 599, 595, 3, 2, 2, 2, 600, 61, 3, 2, 2, 2,
	601, 602, 9, 10, 2, 2, 602, 63, 3, 2, 2, 2, 603, 604, 9, 10, 2, 2, 604,
	65, 3, 2, 2, 2, 90, 69, 77, 80, 84, 87, 94, 103, 106, 117, 120, 126, 129,
	132, 135, 138, 144, 149, 158, 162, 165, 168, 171, 175, 180, 183, 186, 194,
	197, 220, 230, 237, 245, 250, 254, 257, 264, 267, 275, 278, 284, 288, 294,
	299, 301, 307, 309, 314, 323, 327, 331, 345, 348, 355, 362, 374, 378, 388,
	397, 401, 407, 420, 426, 435, 444, 453, 456, 459, 462, 464, 477, 481, 491,
	500, 504, 510, 523, 529, 538, 551, 555, 564, 567, 570, 572, 580, 585, 595,
	599,
}
var deserializer = antlr.NewATNDeserializer(nil)
var deserializedATN = deserializer.DeserializeFromUInt16(parserATN)

var literalNames = []string{
	"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'/'",
	"'%'", "'~'", "'!~'", "'+'", "'-'", "'*'", "')'", "'('", "']'", "'['",
	"'='", "'<'", "'>'", "'!='", "", "'<='", "'>='", "';'", "','", "'.'",
}
var symbolicNames = []string{
	"", "SELECT", "AS", "FROM", "WHERE", "AND", "OR", "XOR", "IS", "TO", "NULL",
	"LIKE", "IN", "BETWEEN", "EXISTS", "TRUE", "FALSE", "DIVIDE", "MOD", "MATCH",
	"NOT_MATCH", "PLUS", "MINUS", "ASTERISK", "RPAREN", "LPAREN", "RBRACK",
	"LBRACK", "EQ", "LT", "GT", "NOT_EQ", "NOT", "LTE", "GTE", "SEMI", "COMMA",
	"DOT", "ORDER", "GROUP", "BY", "PARTITION", "ASC", "DESC", "CASE", "WHEN",
	"THEN", "ELSE", "END", "LIMIT", "OFFSET", "INTERVAL", "SINCE", "FOLLOW",
	"UNTIL", "INNER", "OUTER", "LEFT", "RIGHT", "JOIN", "ON", "CROSS", "NATURAL",
	"REGEXP", "UNION", "INSERT", "IGNORE", "INTO", "SET", "VALUE", "VALUES",
	"DEFAULT", "DUPLICATE", "KEY", "UPDATE", "DELETE", "HAVING", "ID", "NUMBER",
	"SINGLE_LINE_COMMENT", "MULTILINE_COMMENT", "WS", "STRING", "DQUOTA_STRING",
	"SQUOTA_STRING", "BQUOTA_STRING",
}

var ruleNames = []string{
	"root", "crudStmt", "insertStmt", "selectStmt", "updateStmt", "deleteStmt",
	"columnStmt", "fromStmt", "whereStmt", "limitStmt", "offsetStmt", "orderbyStmt",
	"groupbyStmt", "havingStmt", "tableSources", "tableSource", "tableSourceItem",
	"joinPart", "selectColumn", "insertStmtValue", "exprWithDefaults", "updatedElement",
	"subExpr", "expr", "idList", "exprOrDefault", "tableName", "columnName",
	"functionName", "fieldName", "literalValue", "subLiteralValue",
}
var decisionToDFA = make([]*antlr.DFA, len(deserializedATN.DecisionToState))

func init() {
	for index, ds := range deserializedATN.DecisionToState {
		decisionToDFA[index] = antlr.NewDFA(ds, index)
	}
}

type SimpleSqlParser struct {
	*antlr.BaseParser
}

func NewSimpleSqlParser(input antlr.TokenStream) *SimpleSqlParser {
	this := new(SimpleSqlParser)

	this.BaseParser = antlr.NewBaseParser(input)

	this.Interpreter = antlr.NewParserATNSimulator(this, deserializedATN, decisionToDFA, antlr.NewPredictionContextCache())
	this.RuleNames = ruleNames
	this.LiteralNames = literalNames
	this.SymbolicNames = symbolicNames
	this.GrammarFileName = "SimpleSql.g4"

	return this
}

// SimpleSqlParser tokens.
const (
	SimpleSqlParserEOF                 = antlr.TokenEOF
	SimpleSqlParserSELECT              = 1
	SimpleSqlParserAS                  = 2
	SimpleSqlParserFROM                = 3
	SimpleSqlParserWHERE               = 4
	SimpleSqlParserAND                 = 5
	SimpleSqlParserOR                  = 6
	SimpleSqlParserXOR                 = 7
	SimpleSqlParserIS                  = 8
	SimpleSqlParserTO                  = 9
	SimpleSqlParserNULL                = 10
	SimpleSqlParserLIKE                = 11
	SimpleSqlParserIN                  = 12
	SimpleSqlParserBETWEEN             = 13
	SimpleSqlParserEXISTS              = 14
	SimpleSqlParserTRUE                = 15
	SimpleSqlParserFALSE               = 16
	SimpleSqlParserDIVIDE              = 17
	SimpleSqlParserMOD                 = 18
	SimpleSqlParserMATCH               = 19
	SimpleSqlParserNOT_MATCH           = 20
	SimpleSqlParserPLUS                = 21
	SimpleSqlParserMINUS               = 22
	SimpleSqlParserASTERISK            = 23
	SimpleSqlParserRPAREN              = 24
	SimpleSqlParserLPAREN              = 25
	SimpleSqlParserRBRACK              = 26
	SimpleSqlParserLBRACK              = 27
	SimpleSqlParserEQ                  = 28
	SimpleSqlParserLT                  = 29
	SimpleSqlParserGT                  = 30
	SimpleSqlParserNOT_EQ              = 31
	SimpleSqlParserNOT                 = 32
	SimpleSqlParserLTE                 = 33
	SimpleSqlParserGTE                 = 34
	SimpleSqlParserSEMI                = 35
	SimpleSqlParserCOMMA               = 36
	SimpleSqlParserDOT                 = 37
	SimpleSqlParserORDER               = 38
	SimpleSqlParserGROUP               = 39
	SimpleSqlParserBY                  = 40
	SimpleSqlParserPARTITION           = 41
	SimpleSqlParserASC                 = 42
	SimpleSqlParserDESC                = 43
	SimpleSqlParserCASE                = 44
	SimpleSqlParserWHEN                = 45
	SimpleSqlParserTHEN                = 46
	SimpleSqlParserELSE                = 47
	SimpleSqlParserEND                 = 48
	SimpleSqlParserLIMIT               = 49
	SimpleSqlParserOFFSET              = 50
	SimpleSqlParserINTERVAL            = 51
	SimpleSqlParserSINCE               = 52
	SimpleSqlParserFOLLOW              = 53
	SimpleSqlParserUNTIL               = 54
	SimpleSqlParserINNER               = 55
	SimpleSqlParserOUTER               = 56
	SimpleSqlParserLEFT                = 57
	SimpleSqlParserRIGHT               = 58
	SimpleSqlParserJOIN                = 59
	SimpleSqlParserON                  = 60
	SimpleSqlParserCROSS               = 61
	SimpleSqlParserNATURAL             = 62
	SimpleSqlParserREGEXP              = 63
	SimpleSqlParserUNION               = 64
	SimpleSqlParserINSERT              = 65
	SimpleSqlParserIGNORE              = 66
	SimpleSqlParserINTO                = 67
	SimpleSqlParserSET                 = 68
	SimpleSqlParserVALUE               = 69
	SimpleSqlParserVALUES              = 70
	SimpleSqlParserDEFAULT             = 71
	SimpleSqlParserDUPLICATE           = 72
	SimpleSqlParserKEY                 = 73
	SimpleSqlParserUPDATE              = 74
	SimpleSqlParserDELETE              = 75
	SimpleSqlParserHAVING              = 76
	SimpleSqlParserID                  = 77
	SimpleSqlParserNUMBER              = 78
	SimpleSqlParserSINGLE_LINE_COMMENT = 79
	SimpleSqlParserMULTILINE_COMMENT   = 80
	SimpleSqlParserWS                  = 81
	SimpleSqlParserSTRING              = 82
	SimpleSqlParserDQUOTA_STRING       = 83
	SimpleSqlParserSQUOTA_STRING       = 84
	SimpleSqlParserBQUOTA_STRING       = 85
)

// SimpleSqlParser rules.
const (
	SimpleSqlParserRULE_root             = 0
	SimpleSqlParserRULE_crudStmt         = 1
	SimpleSqlParserRULE_insertStmt       = 2
	SimpleSqlParserRULE_selectStmt       = 3
	SimpleSqlParserRULE_updateStmt       = 4
	SimpleSqlParserRULE_deleteStmt       = 5
	SimpleSqlParserRULE_columnStmt       = 6
	SimpleSqlParserRULE_fromStmt         = 7
	SimpleSqlParserRULE_whereStmt        = 8
	SimpleSqlParserRULE_limitStmt        = 9
	SimpleSqlParserRULE_offsetStmt       = 10
	SimpleSqlParserRULE_orderbyStmt      = 11
	SimpleSqlParserRULE_groupbyStmt      = 12
	SimpleSqlParserRULE_havingStmt       = 13
	SimpleSqlParserRULE_tableSources     = 14
	SimpleSqlParserRULE_tableSource      = 15
	SimpleSqlParserRULE_tableSourceItem  = 16
	SimpleSqlParserRULE_joinPart         = 17
	SimpleSqlParserRULE_selectColumn     = 18
	SimpleSqlParserRULE_insertStmtValue  = 19
	SimpleSqlParserRULE_exprWithDefaults = 20
	SimpleSqlParserRULE_updatedElement   = 21
	SimpleSqlParserRULE_subExpr          = 22
	SimpleSqlParserRULE_expr             = 23
	SimpleSqlParserRULE_idList           = 24
	SimpleSqlParserRULE_exprOrDefault    = 25
	SimpleSqlParserRULE_tableName        = 26
	SimpleSqlParserRULE_columnName       = 27
	SimpleSqlParserRULE_functionName     = 28
	SimpleSqlParserRULE_fieldName        = 29
	SimpleSqlParserRULE_literalValue     = 30
	SimpleSqlParserRULE_subLiteralValue  = 31
)

// IRootContext is an interface to support dynamic dispatch.
type IRootContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsRootContext differentiates from other interfaces.
	IsRootContext()
}

type RootContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyRootContext() *RootContext {
	var p = new(RootContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_root
	return p
}

func (*RootContext) IsRootContext() {}

func NewRootContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *RootContext {
	var p = new(RootContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_root

	return p
}

func (s *RootContext) GetParser() antlr.Parser { return s.parser }

func (s *RootContext) EOF() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserEOF, 0)
}

func (s *RootContext) AllCrudStmt() []ICrudStmtContext {
	var ts = s.GetTypedRuleContexts(reflect.TypeOf((*ICrudStmtContext)(nil)).Elem())
	var tst = make([]ICrudStmtContext, len(ts))

	for i, t := range ts {
		if t != nil {
			tst[i] = t.(ICrudStmtContext)
		}
	}

	return tst
}

func (s *RootContext) CrudStmt(i int) ICrudStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ICrudStmtContext)(nil)).Elem(), i)

	if t == nil {
		return nil
	}

	return t.(ICrudStmtContext)
}

func (s *RootContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *RootContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *RootContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterRoot(s)
	}
}

func (s *RootContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitRoot(s)
	}
}

func (p *SimpleSqlParser) Root() (localctx IRootContext) {
	localctx = NewRootContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 0, SimpleSqlParserRULE_root)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	p.SetState(65)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	for ok := true; ok; ok = _la == SimpleSqlParserSELECT || (((_la-65)&-(0x1f+1)) == 0 && ((1<<uint((_la-65)))&((1<<(SimpleSqlParserINSERT-65))|(1<<(SimpleSqlParserUPDATE-65))|(1<<(SimpleSqlParserDELETE-65)))) != 0) {
		{
			p.SetState(64)
			p.CrudStmt()
		}

		p.SetState(67)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)
	}
	{
		p.SetState(69)
		p.Match(SimpleSqlParserEOF)
	}

	return localctx
}

// ICrudStmtContext is an interface to support dynamic dispatch.
type ICrudStmtContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsCrudStmtContext differentiates from other interfaces.
	IsCrudStmtContext()
}

type CrudStmtContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyCrudStmtContext() *CrudStmtContext {
	var p = new(CrudStmtContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_crudStmt
	return p
}

func (*CrudStmtContext) IsCrudStmtContext() {}

func NewCrudStmtContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *CrudStmtContext {
	var p = new(CrudStmtContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_crudStmt

	return p
}

func (s *CrudStmtContext) GetParser() antlr.Parser { return s.parser }

func (s *CrudStmtContext) InsertStmt() IInsertStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IInsertStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IInsertStmtContext)
}

func (s *CrudStmtContext) SelectStmt() ISelectStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ISelectStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ISelectStmtContext)
}

func (s *CrudStmtContext) UpdateStmt() IUpdateStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IUpdateStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IUpdateStmtContext)
}

func (s *CrudStmtContext) DeleteStmt() IDeleteStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IDeleteStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IDeleteStmtContext)
}

func (s *CrudStmtContext) SEMI() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserSEMI, 0)
}

func (s *CrudStmtContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *CrudStmtContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *CrudStmtContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterCrudStmt(s)
	}
}

func (s *CrudStmtContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitCrudStmt(s)
	}
}

func (p *SimpleSqlParser) CrudStmt() (localctx ICrudStmtContext) {
	localctx = NewCrudStmtContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 2, SimpleSqlParserRULE_crudStmt)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	p.SetState(75)
	p.GetErrorHandler().Sync(p)

	switch p.GetTokenStream().LA(1) {
	case SimpleSqlParserINSERT:
		{
			p.SetState(71)
			p.InsertStmt()
		}

	case SimpleSqlParserSELECT:
		{
			p.SetState(72)
			p.SelectStmt()
		}

	case SimpleSqlParserUPDATE:
		{
			p.SetState(73)
			p.UpdateStmt()
		}

	case SimpleSqlParserDELETE:
		{
			p.SetState(74)
			p.DeleteStmt()
		}

	default:
		panic(antlr.NewNoViableAltException(p, nil, nil, nil, nil, nil))
	}
	p.SetState(78)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserSEMI {
		{
			p.SetState(77)
			p.Match(SimpleSqlParserSEMI)
		}

	}

	return localctx
}

// IInsertStmtContext is an interface to support dynamic dispatch.
type IInsertStmtContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// GetColumns returns the columns rule contexts.
	GetColumns() IIdListContext

	// GetSetElement returns the setElement rule contexts.
	GetSetElement() IUpdatedElementContext

	// Get_updatedElement returns the _updatedElement rule contexts.
	Get_updatedElement() IUpdatedElementContext

	// GetDuplicatedElement returns the duplicatedElement rule contexts.
	GetDuplicatedElement() IUpdatedElementContext

	// SetColumns sets the columns rule contexts.
	SetColumns(IIdListContext)

	// SetSetElement sets the setElement rule contexts.
	SetSetElement(IUpdatedElementContext)

	// Set_updatedElement sets the _updatedElement rule contexts.
	Set_updatedElement(IUpdatedElementContext)

	// SetDuplicatedElement sets the duplicatedElement rule contexts.
	SetDuplicatedElement(IUpdatedElementContext)

	// GetSetElements returns the setElements rule context list.
	GetSetElements() []IUpdatedElementContext

	// GetDuplicatedElements returns the duplicatedElements rule context list.
	GetDuplicatedElements() []IUpdatedElementContext

	// SetSetElements sets the setElements rule context list.
	SetSetElements([]IUpdatedElementContext)

	// SetDuplicatedElements sets the duplicatedElements rule context list.
	SetDuplicatedElements([]IUpdatedElementContext)

	// IsInsertStmtContext differentiates from other interfaces.
	IsInsertStmtContext()
}

type InsertStmtContext struct {
	*antlr.BaseParserRuleContext
	parser             antlr.Parser
	columns            IIdListContext
	setElement         IUpdatedElementContext
	_updatedElement    IUpdatedElementContext
	setElements        []IUpdatedElementContext
	duplicatedElement  IUpdatedElementContext
	duplicatedElements []IUpdatedElementContext
}

func NewEmptyInsertStmtContext() *InsertStmtContext {
	var p = new(InsertStmtContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_insertStmt
	return p
}

func (*InsertStmtContext) IsInsertStmtContext() {}

func NewInsertStmtContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *InsertStmtContext {
	var p = new(InsertStmtContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_insertStmt

	return p
}

func (s *InsertStmtContext) GetParser() antlr.Parser { return s.parser }

func (s *InsertStmtContext) GetColumns() IIdListContext { return s.columns }

func (s *InsertStmtContext) GetSetElement() IUpdatedElementContext { return s.setElement }

func (s *InsertStmtContext) Get_updatedElement() IUpdatedElementContext { return s._updatedElement }

func (s *InsertStmtContext) GetDuplicatedElement() IUpdatedElementContext { return s.duplicatedElement }

func (s *InsertStmtContext) SetColumns(v IIdListContext) { s.columns = v }

func (s *InsertStmtContext) SetSetElement(v IUpdatedElementContext) { s.setElement = v }

func (s *InsertStmtContext) Set_updatedElement(v IUpdatedElementContext) { s._updatedElement = v }

func (s *InsertStmtContext) SetDuplicatedElement(v IUpdatedElementContext) { s.duplicatedElement = v }

func (s *InsertStmtContext) GetSetElements() []IUpdatedElementContext { return s.setElements }

func (s *InsertStmtContext) GetDuplicatedElements() []IUpdatedElementContext {
	return s.duplicatedElements
}

func (s *InsertStmtContext) SetSetElements(v []IUpdatedElementContext) { s.setElements = v }

func (s *InsertStmtContext) SetDuplicatedElements(v []IUpdatedElementContext) {
	s.duplicatedElements = v
}

func (s *InsertStmtContext) INSERT() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserINSERT, 0)
}

func (s *InsertStmtContext) TableName() ITableNameContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ITableNameContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ITableNameContext)
}

func (s *InsertStmtContext) InsertStmtValue() IInsertStmtValueContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IInsertStmtValueContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IInsertStmtValueContext)
}

func (s *InsertStmtContext) SET() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserSET, 0)
}

func (s *InsertStmtContext) IGNORE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserIGNORE, 0)
}

func (s *InsertStmtContext) INTO() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserINTO, 0)
}

func (s *InsertStmtContext) AllUpdatedElement() []IUpdatedElementContext {
	var ts = s.GetTypedRuleContexts(reflect.TypeOf((*IUpdatedElementContext)(nil)).Elem())
	var tst = make([]IUpdatedElementContext, len(ts))

	for i, t := range ts {
		if t != nil {
			tst[i] = t.(IUpdatedElementContext)
		}
	}

	return tst
}

func (s *InsertStmtContext) UpdatedElement(i int) IUpdatedElementContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IUpdatedElementContext)(nil)).Elem(), i)

	if t == nil {
		return nil
	}

	return t.(IUpdatedElementContext)
}

func (s *InsertStmtContext) ON() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserON, 0)
}

func (s *InsertStmtContext) DUPLICATE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserDUPLICATE, 0)
}

func (s *InsertStmtContext) KEY() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserKEY, 0)
}

func (s *InsertStmtContext) UPDATE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserUPDATE, 0)
}

func (s *InsertStmtContext) LPAREN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserLPAREN, 0)
}

func (s *InsertStmtContext) RPAREN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserRPAREN, 0)
}

func (s *InsertStmtContext) AllCOMMA() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserCOMMA)
}

func (s *InsertStmtContext) COMMA(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserCOMMA, i)
}

func (s *InsertStmtContext) IdList() IIdListContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IIdListContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IIdListContext)
}

func (s *InsertStmtContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *InsertStmtContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *InsertStmtContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterInsertStmt(s)
	}
}

func (s *InsertStmtContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitInsertStmt(s)
	}
}

func (p *SimpleSqlParser) InsertStmt() (localctx IInsertStmtContext) {
	localctx = NewInsertStmtContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 4, SimpleSqlParserRULE_insertStmt)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(80)
		p.Match(SimpleSqlParserINSERT)
	}
	p.SetState(82)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserIGNORE {
		{
			p.SetState(81)
			p.Match(SimpleSqlParserIGNORE)
		}

	}
	p.SetState(85)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserINTO {
		{
			p.SetState(84)
			p.Match(SimpleSqlParserINTO)
		}

	}
	{
		p.SetState(87)
		p.TableName()
	}
	p.SetState(104)
	p.GetErrorHandler().Sync(p)

	switch p.GetTokenStream().LA(1) {
	case SimpleSqlParserSELECT, SimpleSqlParserLPAREN, SimpleSqlParserVALUE, SimpleSqlParserVALUES:
		p.SetState(92)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		if _la == SimpleSqlParserLPAREN {
			{
				p.SetState(88)
				p.Match(SimpleSqlParserLPAREN)
			}
			{
				p.SetState(89)

				var _x = p.IdList()

				localctx.(*InsertStmtContext).columns = _x
			}
			{
				p.SetState(90)
				p.Match(SimpleSqlParserRPAREN)
			}

		}
		{
			p.SetState(94)
			p.InsertStmtValue()
		}

	case SimpleSqlParserSET:
		{
			p.SetState(95)
			p.Match(SimpleSqlParserSET)
		}
		{
			p.SetState(96)

			var _x = p.UpdatedElement()

			localctx.(*InsertStmtContext).setElement = _x
		}
		p.SetState(101)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		for _la == SimpleSqlParserCOMMA {
			{
				p.SetState(97)
				p.Match(SimpleSqlParserCOMMA)
			}
			{
				p.SetState(98)

				var _x = p.UpdatedElement()

				localctx.(*InsertStmtContext)._updatedElement = _x
			}
			localctx.(*InsertStmtContext).setElements = append(localctx.(*InsertStmtContext).setElements, localctx.(*InsertStmtContext)._updatedElement)

			p.SetState(103)
			p.GetErrorHandler().Sync(p)
			_la = p.GetTokenStream().LA(1)
		}

	default:
		panic(antlr.NewNoViableAltException(p, nil, nil, nil, nil, nil))
	}
	p.SetState(118)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserON {
		{
			p.SetState(106)
			p.Match(SimpleSqlParserON)
		}
		{
			p.SetState(107)
			p.Match(SimpleSqlParserDUPLICATE)
		}
		{
			p.SetState(108)
			p.Match(SimpleSqlParserKEY)
		}
		{
			p.SetState(109)
			p.Match(SimpleSqlParserUPDATE)
		}
		{
			p.SetState(110)

			var _x = p.UpdatedElement()

			localctx.(*InsertStmtContext).duplicatedElement = _x
		}
		p.SetState(115)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		for _la == SimpleSqlParserCOMMA {
			{
				p.SetState(111)
				p.Match(SimpleSqlParserCOMMA)
			}
			{
				p.SetState(112)

				var _x = p.UpdatedElement()

				localctx.(*InsertStmtContext)._updatedElement = _x
			}
			localctx.(*InsertStmtContext).duplicatedElements = append(localctx.(*InsertStmtContext).duplicatedElements, localctx.(*InsertStmtContext)._updatedElement)

			p.SetState(117)
			p.GetErrorHandler().Sync(p)
			_la = p.GetTokenStream().LA(1)
		}

	}

	return localctx
}

// ISelectStmtContext is an interface to support dynamic dispatch.
type ISelectStmtContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsSelectStmtContext differentiates from other interfaces.
	IsSelectStmtContext()
}

type SelectStmtContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptySelectStmtContext() *SelectStmtContext {
	var p = new(SelectStmtContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_selectStmt
	return p
}

func (*SelectStmtContext) IsSelectStmtContext() {}

func NewSelectStmtContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *SelectStmtContext {
	var p = new(SelectStmtContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_selectStmt

	return p
}

func (s *SelectStmtContext) GetParser() antlr.Parser { return s.parser }

func (s *SelectStmtContext) SELECT() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserSELECT, 0)
}

func (s *SelectStmtContext) ColumnStmt() IColumnStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IColumnStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IColumnStmtContext)
}

func (s *SelectStmtContext) FromStmt() IFromStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IFromStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IFromStmtContext)
}

func (s *SelectStmtContext) WhereStmt() IWhereStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IWhereStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IWhereStmtContext)
}

func (s *SelectStmtContext) LimitStmt() ILimitStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ILimitStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ILimitStmtContext)
}

func (s *SelectStmtContext) OffsetStmt() IOffsetStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IOffsetStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IOffsetStmtContext)
}

func (s *SelectStmtContext) OrderbyStmt() IOrderbyStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IOrderbyStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IOrderbyStmtContext)
}

func (s *SelectStmtContext) GroupbyStmt() IGroupbyStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IGroupbyStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IGroupbyStmtContext)
}

func (s *SelectStmtContext) AllUNION() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserUNION)
}

func (s *SelectStmtContext) UNION(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserUNION, i)
}

func (s *SelectStmtContext) AllSelectStmt() []ISelectStmtContext {
	var ts = s.GetTypedRuleContexts(reflect.TypeOf((*ISelectStmtContext)(nil)).Elem())
	var tst = make([]ISelectStmtContext, len(ts))

	for i, t := range ts {
		if t != nil {
			tst[i] = t.(ISelectStmtContext)
		}
	}

	return tst
}

func (s *SelectStmtContext) SelectStmt(i int) ISelectStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ISelectStmtContext)(nil)).Elem(), i)

	if t == nil {
		return nil
	}

	return t.(ISelectStmtContext)
}

func (s *SelectStmtContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *SelectStmtContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *SelectStmtContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterSelectStmt(s)
	}
}

func (s *SelectStmtContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitSelectStmt(s)
	}
}

func (p *SimpleSqlParser) SelectStmt() (localctx ISelectStmtContext) {
	localctx = NewSelectStmtContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 6, SimpleSqlParserRULE_selectStmt)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	var _alt int

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(120)
		p.Match(SimpleSqlParserSELECT)
	}
	{
		p.SetState(121)
		p.ColumnStmt()
	}
	{
		p.SetState(122)
		p.FromStmt()
	}
	p.SetState(124)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserWHERE {
		{
			p.SetState(123)
			p.WhereStmt()
		}

	}
	p.SetState(127)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserLIMIT {
		{
			p.SetState(126)
			p.LimitStmt()
		}

	}
	p.SetState(130)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserOFFSET {
		{
			p.SetState(129)
			p.OffsetStmt()
		}

	}
	p.SetState(133)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserORDER {
		{
			p.SetState(132)
			p.OrderbyStmt()
		}

	}
	p.SetState(136)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserGROUP {
		{
			p.SetState(135)
			p.GroupbyStmt()
		}

	}
	p.SetState(142)
	p.GetErrorHandler().Sync(p)
	_alt = p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 15, p.GetParserRuleContext())

	for _alt != 2 && _alt != antlr.ATNInvalidAltNumber {
		if _alt == 1 {
			{
				p.SetState(138)
				p.Match(SimpleSqlParserUNION)
			}
			{
				p.SetState(139)
				p.SelectStmt()
			}

		}
		p.SetState(144)
		p.GetErrorHandler().Sync(p)
		_alt = p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 15, p.GetParserRuleContext())
	}

	return localctx
}

// IUpdateStmtContext is an interface to support dynamic dispatch.
type IUpdateStmtContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsUpdateStmtContext differentiates from other interfaces.
	IsUpdateStmtContext()
}

type UpdateStmtContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyUpdateStmtContext() *UpdateStmtContext {
	var p = new(UpdateStmtContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_updateStmt
	return p
}

func (*UpdateStmtContext) IsUpdateStmtContext() {}

func NewUpdateStmtContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *UpdateStmtContext {
	var p = new(UpdateStmtContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_updateStmt

	return p
}

func (s *UpdateStmtContext) GetParser() antlr.Parser { return s.parser }

func (s *UpdateStmtContext) UPDATE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserUPDATE, 0)
}

func (s *UpdateStmtContext) TableSources() ITableSourcesContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ITableSourcesContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ITableSourcesContext)
}

func (s *UpdateStmtContext) SET() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserSET, 0)
}

func (s *UpdateStmtContext) AllUpdatedElement() []IUpdatedElementContext {
	var ts = s.GetTypedRuleContexts(reflect.TypeOf((*IUpdatedElementContext)(nil)).Elem())
	var tst = make([]IUpdatedElementContext, len(ts))

	for i, t := range ts {
		if t != nil {
			tst[i] = t.(IUpdatedElementContext)
		}
	}

	return tst
}

func (s *UpdateStmtContext) UpdatedElement(i int) IUpdatedElementContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IUpdatedElementContext)(nil)).Elem(), i)

	if t == nil {
		return nil
	}

	return t.(IUpdatedElementContext)
}

func (s *UpdateStmtContext) IGNORE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserIGNORE, 0)
}

func (s *UpdateStmtContext) AllCOMMA() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserCOMMA)
}

func (s *UpdateStmtContext) COMMA(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserCOMMA, i)
}

func (s *UpdateStmtContext) WhereStmt() IWhereStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IWhereStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IWhereStmtContext)
}

func (s *UpdateStmtContext) LimitStmt() ILimitStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ILimitStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ILimitStmtContext)
}

func (s *UpdateStmtContext) OffsetStmt() IOffsetStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IOffsetStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IOffsetStmtContext)
}

func (s *UpdateStmtContext) OrderbyStmt() IOrderbyStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IOrderbyStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IOrderbyStmtContext)
}

func (s *UpdateStmtContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *UpdateStmtContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *UpdateStmtContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterUpdateStmt(s)
	}
}

func (s *UpdateStmtContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitUpdateStmt(s)
	}
}

func (p *SimpleSqlParser) UpdateStmt() (localctx IUpdateStmtContext) {
	localctx = NewUpdateStmtContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 8, SimpleSqlParserRULE_updateStmt)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(145)
		p.Match(SimpleSqlParserUPDATE)
	}
	p.SetState(147)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserIGNORE {
		{
			p.SetState(146)
			p.Match(SimpleSqlParserIGNORE)
		}

	}
	{
		p.SetState(149)
		p.TableSources()
	}
	{
		p.SetState(150)
		p.Match(SimpleSqlParserSET)
	}
	{
		p.SetState(151)
		p.UpdatedElement()
	}
	p.SetState(156)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	for _la == SimpleSqlParserCOMMA {
		{
			p.SetState(152)
			p.Match(SimpleSqlParserCOMMA)
		}
		{
			p.SetState(153)
			p.UpdatedElement()
		}

		p.SetState(158)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)
	}
	p.SetState(160)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserWHERE {
		{
			p.SetState(159)
			p.WhereStmt()
		}

	}
	p.SetState(163)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserLIMIT {
		{
			p.SetState(162)
			p.LimitStmt()
		}

	}
	p.SetState(166)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserOFFSET {
		{
			p.SetState(165)
			p.OffsetStmt()
		}

	}
	p.SetState(169)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserORDER {
		{
			p.SetState(168)
			p.OrderbyStmt()
		}

	}

	return localctx
}

// IDeleteStmtContext is an interface to support dynamic dispatch.
type IDeleteStmtContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsDeleteStmtContext differentiates from other interfaces.
	IsDeleteStmtContext()
}

type DeleteStmtContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyDeleteStmtContext() *DeleteStmtContext {
	var p = new(DeleteStmtContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_deleteStmt
	return p
}

func (*DeleteStmtContext) IsDeleteStmtContext() {}

func NewDeleteStmtContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *DeleteStmtContext {
	var p = new(DeleteStmtContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_deleteStmt

	return p
}

func (s *DeleteStmtContext) GetParser() antlr.Parser { return s.parser }

func (s *DeleteStmtContext) DELETE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserDELETE, 0)
}

func (s *DeleteStmtContext) FROM() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserFROM, 0)
}

func (s *DeleteStmtContext) TableName() ITableNameContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ITableNameContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ITableNameContext)
}

func (s *DeleteStmtContext) IGNORE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserIGNORE, 0)
}

func (s *DeleteStmtContext) WhereStmt() IWhereStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IWhereStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IWhereStmtContext)
}

func (s *DeleteStmtContext) OrderbyStmt() IOrderbyStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IOrderbyStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IOrderbyStmtContext)
}

func (s *DeleteStmtContext) LimitStmt() ILimitStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ILimitStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ILimitStmtContext)
}

func (s *DeleteStmtContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *DeleteStmtContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *DeleteStmtContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterDeleteStmt(s)
	}
}

func (s *DeleteStmtContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitDeleteStmt(s)
	}
}

func (p *SimpleSqlParser) DeleteStmt() (localctx IDeleteStmtContext) {
	localctx = NewDeleteStmtContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 10, SimpleSqlParserRULE_deleteStmt)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(171)
		p.Match(SimpleSqlParserDELETE)
	}
	p.SetState(173)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserIGNORE {
		{
			p.SetState(172)
			p.Match(SimpleSqlParserIGNORE)
		}

	}
	{
		p.SetState(175)
		p.Match(SimpleSqlParserFROM)
	}
	{
		p.SetState(176)
		p.TableName()
	}
	p.SetState(178)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserWHERE {
		{
			p.SetState(177)
			p.WhereStmt()
		}

	}
	p.SetState(181)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserORDER {
		{
			p.SetState(180)
			p.OrderbyStmt()
		}

	}
	p.SetState(184)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserLIMIT {
		{
			p.SetState(183)
			p.LimitStmt()
		}

	}

	return localctx
}

// IColumnStmtContext is an interface to support dynamic dispatch.
type IColumnStmtContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsColumnStmtContext differentiates from other interfaces.
	IsColumnStmtContext()
}

type ColumnStmtContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyColumnStmtContext() *ColumnStmtContext {
	var p = new(ColumnStmtContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_columnStmt
	return p
}

func (*ColumnStmtContext) IsColumnStmtContext() {}

func NewColumnStmtContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *ColumnStmtContext {
	var p = new(ColumnStmtContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_columnStmt

	return p
}

func (s *ColumnStmtContext) GetParser() antlr.Parser { return s.parser }

func (s *ColumnStmtContext) ASTERISK() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserASTERISK, 0)
}

func (s *ColumnStmtContext) AllSelectColumn() []ISelectColumnContext {
	var ts = s.GetTypedRuleContexts(reflect.TypeOf((*ISelectColumnContext)(nil)).Elem())
	var tst = make([]ISelectColumnContext, len(ts))

	for i, t := range ts {
		if t != nil {
			tst[i] = t.(ISelectColumnContext)
		}
	}

	return tst
}

func (s *ColumnStmtContext) SelectColumn(i int) ISelectColumnContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ISelectColumnContext)(nil)).Elem(), i)

	if t == nil {
		return nil
	}

	return t.(ISelectColumnContext)
}

func (s *ColumnStmtContext) AllCOMMA() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserCOMMA)
}

func (s *ColumnStmtContext) COMMA(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserCOMMA, i)
}

func (s *ColumnStmtContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *ColumnStmtContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *ColumnStmtContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterColumnStmt(s)
	}
}

func (s *ColumnStmtContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitColumnStmt(s)
	}
}

func (p *SimpleSqlParser) ColumnStmt() (localctx IColumnStmtContext) {
	localctx = NewColumnStmtContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 12, SimpleSqlParserRULE_columnStmt)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	p.SetState(195)
	p.GetErrorHandler().Sync(p)

	switch p.GetTokenStream().LA(1) {
	case SimpleSqlParserASTERISK:
		{
			p.SetState(186)
			p.Match(SimpleSqlParserASTERISK)
		}

	case SimpleSqlParserID:
		{
			p.SetState(187)
			p.SelectColumn()
		}
		p.SetState(192)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		for _la == SimpleSqlParserCOMMA {
			{
				p.SetState(188)
				p.Match(SimpleSqlParserCOMMA)
			}
			{
				p.SetState(189)
				p.SelectColumn()
			}

			p.SetState(194)
			p.GetErrorHandler().Sync(p)
			_la = p.GetTokenStream().LA(1)
		}

	default:
		panic(antlr.NewNoViableAltException(p, nil, nil, nil, nil, nil))
	}

	return localctx
}

// IFromStmtContext is an interface to support dynamic dispatch.
type IFromStmtContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsFromStmtContext differentiates from other interfaces.
	IsFromStmtContext()
}

type FromStmtContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyFromStmtContext() *FromStmtContext {
	var p = new(FromStmtContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_fromStmt
	return p
}

func (*FromStmtContext) IsFromStmtContext() {}

func NewFromStmtContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *FromStmtContext {
	var p = new(FromStmtContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_fromStmt

	return p
}

func (s *FromStmtContext) GetParser() antlr.Parser { return s.parser }

func (s *FromStmtContext) FROM() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserFROM, 0)
}

func (s *FromStmtContext) TableSources() ITableSourcesContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ITableSourcesContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ITableSourcesContext)
}

func (s *FromStmtContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *FromStmtContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *FromStmtContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterFromStmt(s)
	}
}

func (s *FromStmtContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitFromStmt(s)
	}
}

func (p *SimpleSqlParser) FromStmt() (localctx IFromStmtContext) {
	localctx = NewFromStmtContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 14, SimpleSqlParserRULE_fromStmt)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(197)
		p.Match(SimpleSqlParserFROM)
	}
	{
		p.SetState(198)
		p.TableSources()
	}

	return localctx
}

// IWhereStmtContext is an interface to support dynamic dispatch.
type IWhereStmtContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsWhereStmtContext differentiates from other interfaces.
	IsWhereStmtContext()
}

type WhereStmtContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyWhereStmtContext() *WhereStmtContext {
	var p = new(WhereStmtContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_whereStmt
	return p
}

func (*WhereStmtContext) IsWhereStmtContext() {}

func NewWhereStmtContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *WhereStmtContext {
	var p = new(WhereStmtContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_whereStmt

	return p
}

func (s *WhereStmtContext) GetParser() antlr.Parser { return s.parser }

func (s *WhereStmtContext) WHERE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserWHERE, 0)
}

func (s *WhereStmtContext) SubExpr() ISubExprContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ISubExprContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ISubExprContext)
}

func (s *WhereStmtContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *WhereStmtContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *WhereStmtContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterWhereStmt(s)
	}
}

func (s *WhereStmtContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitWhereStmt(s)
	}
}

func (p *SimpleSqlParser) WhereStmt() (localctx IWhereStmtContext) {
	localctx = NewWhereStmtContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 16, SimpleSqlParserRULE_whereStmt)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(200)
		p.Match(SimpleSqlParserWHERE)
	}
	{
		p.SetState(201)
		p.subExpr(0)
	}

	return localctx
}

// ILimitStmtContext is an interface to support dynamic dispatch.
type ILimitStmtContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsLimitStmtContext differentiates from other interfaces.
	IsLimitStmtContext()
}

type LimitStmtContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyLimitStmtContext() *LimitStmtContext {
	var p = new(LimitStmtContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_limitStmt
	return p
}

func (*LimitStmtContext) IsLimitStmtContext() {}

func NewLimitStmtContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *LimitStmtContext {
	var p = new(LimitStmtContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_limitStmt

	return p
}

func (s *LimitStmtContext) GetParser() antlr.Parser { return s.parser }

func (s *LimitStmtContext) LIMIT() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserLIMIT, 0)
}

func (s *LimitStmtContext) NUMBER() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserNUMBER, 0)
}

func (s *LimitStmtContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *LimitStmtContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *LimitStmtContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterLimitStmt(s)
	}
}

func (s *LimitStmtContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitLimitStmt(s)
	}
}

func (p *SimpleSqlParser) LimitStmt() (localctx ILimitStmtContext) {
	localctx = NewLimitStmtContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 18, SimpleSqlParserRULE_limitStmt)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(203)
		p.Match(SimpleSqlParserLIMIT)
	}
	{
		p.SetState(204)
		p.Match(SimpleSqlParserNUMBER)
	}

	return localctx
}

// IOffsetStmtContext is an interface to support dynamic dispatch.
type IOffsetStmtContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsOffsetStmtContext differentiates from other interfaces.
	IsOffsetStmtContext()
}

type OffsetStmtContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyOffsetStmtContext() *OffsetStmtContext {
	var p = new(OffsetStmtContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_offsetStmt
	return p
}

func (*OffsetStmtContext) IsOffsetStmtContext() {}

func NewOffsetStmtContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *OffsetStmtContext {
	var p = new(OffsetStmtContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_offsetStmt

	return p
}

func (s *OffsetStmtContext) GetParser() antlr.Parser { return s.parser }

func (s *OffsetStmtContext) OFFSET() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserOFFSET, 0)
}

func (s *OffsetStmtContext) NUMBER() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserNUMBER, 0)
}

func (s *OffsetStmtContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *OffsetStmtContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *OffsetStmtContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterOffsetStmt(s)
	}
}

func (s *OffsetStmtContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitOffsetStmt(s)
	}
}

func (p *SimpleSqlParser) OffsetStmt() (localctx IOffsetStmtContext) {
	localctx = NewOffsetStmtContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 20, SimpleSqlParserRULE_offsetStmt)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(206)
		p.Match(SimpleSqlParserOFFSET)
	}
	{
		p.SetState(207)
		p.Match(SimpleSqlParserNUMBER)
	}

	return localctx
}

// IOrderbyStmtContext is an interface to support dynamic dispatch.
type IOrderbyStmtContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsOrderbyStmtContext differentiates from other interfaces.
	IsOrderbyStmtContext()
}

type OrderbyStmtContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyOrderbyStmtContext() *OrderbyStmtContext {
	var p = new(OrderbyStmtContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_orderbyStmt
	return p
}

func (*OrderbyStmtContext) IsOrderbyStmtContext() {}

func NewOrderbyStmtContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *OrderbyStmtContext {
	var p = new(OrderbyStmtContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_orderbyStmt

	return p
}

func (s *OrderbyStmtContext) GetParser() antlr.Parser { return s.parser }

func (s *OrderbyStmtContext) ORDER() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserORDER, 0)
}

func (s *OrderbyStmtContext) BY() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserBY, 0)
}

func (s *OrderbyStmtContext) ColumnName() IColumnNameContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IColumnNameContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IColumnNameContext)
}

func (s *OrderbyStmtContext) ASC() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserASC, 0)
}

func (s *OrderbyStmtContext) DESC() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserDESC, 0)
}

func (s *OrderbyStmtContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *OrderbyStmtContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *OrderbyStmtContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterOrderbyStmt(s)
	}
}

func (s *OrderbyStmtContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitOrderbyStmt(s)
	}
}

func (p *SimpleSqlParser) OrderbyStmt() (localctx IOrderbyStmtContext) {
	localctx = NewOrderbyStmtContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 22, SimpleSqlParserRULE_orderbyStmt)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(209)
		p.Match(SimpleSqlParserORDER)
	}
	{
		p.SetState(210)
		p.Match(SimpleSqlParserBY)
	}
	{
		p.SetState(211)
		p.ColumnName()
	}
	{
		p.SetState(212)
		_la = p.GetTokenStream().LA(1)

		if !(_la == SimpleSqlParserASC || _la == SimpleSqlParserDESC) {
			p.GetErrorHandler().RecoverInline(p)
		} else {
			p.GetErrorHandler().ReportMatch(p)
			p.Consume()
		}
	}

	return localctx
}

// IGroupbyStmtContext is an interface to support dynamic dispatch.
type IGroupbyStmtContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsGroupbyStmtContext differentiates from other interfaces.
	IsGroupbyStmtContext()
}

type GroupbyStmtContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyGroupbyStmtContext() *GroupbyStmtContext {
	var p = new(GroupbyStmtContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_groupbyStmt
	return p
}

func (*GroupbyStmtContext) IsGroupbyStmtContext() {}

func NewGroupbyStmtContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *GroupbyStmtContext {
	var p = new(GroupbyStmtContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_groupbyStmt

	return p
}

func (s *GroupbyStmtContext) GetParser() antlr.Parser { return s.parser }

func (s *GroupbyStmtContext) GROUP() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserGROUP, 0)
}

func (s *GroupbyStmtContext) BY() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserBY, 0)
}

func (s *GroupbyStmtContext) ColumnName() IColumnNameContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IColumnNameContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IColumnNameContext)
}

func (s *GroupbyStmtContext) HavingStmt() IHavingStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IHavingStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IHavingStmtContext)
}

func (s *GroupbyStmtContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *GroupbyStmtContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *GroupbyStmtContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterGroupbyStmt(s)
	}
}

func (s *GroupbyStmtContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitGroupbyStmt(s)
	}
}

func (p *SimpleSqlParser) GroupbyStmt() (localctx IGroupbyStmtContext) {
	localctx = NewGroupbyStmtContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 24, SimpleSqlParserRULE_groupbyStmt)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(214)
		p.Match(SimpleSqlParserGROUP)
	}
	{
		p.SetState(215)
		p.Match(SimpleSqlParserBY)
	}
	{
		p.SetState(216)
		p.ColumnName()
	}
	p.SetState(218)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == SimpleSqlParserHAVING {
		{
			p.SetState(217)
			p.HavingStmt()
		}

	}

	return localctx
}

// IHavingStmtContext is an interface to support dynamic dispatch.
type IHavingStmtContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsHavingStmtContext differentiates from other interfaces.
	IsHavingStmtContext()
}

type HavingStmtContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyHavingStmtContext() *HavingStmtContext {
	var p = new(HavingStmtContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_havingStmt
	return p
}

func (*HavingStmtContext) IsHavingStmtContext() {}

func NewHavingStmtContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *HavingStmtContext {
	var p = new(HavingStmtContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_havingStmt

	return p
}

func (s *HavingStmtContext) GetParser() antlr.Parser { return s.parser }

func (s *HavingStmtContext) HAVING() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserHAVING, 0)
}

func (s *HavingStmtContext) SubExpr() ISubExprContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ISubExprContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ISubExprContext)
}

func (s *HavingStmtContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *HavingStmtContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *HavingStmtContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterHavingStmt(s)
	}
}

func (s *HavingStmtContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitHavingStmt(s)
	}
}

func (p *SimpleSqlParser) HavingStmt() (localctx IHavingStmtContext) {
	localctx = NewHavingStmtContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 26, SimpleSqlParserRULE_havingStmt)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(220)
		p.Match(SimpleSqlParserHAVING)
	}
	{
		p.SetState(221)
		p.subExpr(0)
	}

	return localctx
}

// ITableSourcesContext is an interface to support dynamic dispatch.
type ITableSourcesContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsTableSourcesContext differentiates from other interfaces.
	IsTableSourcesContext()
}

type TableSourcesContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyTableSourcesContext() *TableSourcesContext {
	var p = new(TableSourcesContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_tableSources
	return p
}

func (*TableSourcesContext) IsTableSourcesContext() {}

func NewTableSourcesContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *TableSourcesContext {
	var p = new(TableSourcesContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_tableSources

	return p
}

func (s *TableSourcesContext) GetParser() antlr.Parser { return s.parser }

func (s *TableSourcesContext) AllTableSource() []ITableSourceContext {
	var ts = s.GetTypedRuleContexts(reflect.TypeOf((*ITableSourceContext)(nil)).Elem())
	var tst = make([]ITableSourceContext, len(ts))

	for i, t := range ts {
		if t != nil {
			tst[i] = t.(ITableSourceContext)
		}
	}

	return tst
}

func (s *TableSourcesContext) TableSource(i int) ITableSourceContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ITableSourceContext)(nil)).Elem(), i)

	if t == nil {
		return nil
	}

	return t.(ITableSourceContext)
}

func (s *TableSourcesContext) AllCOMMA() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserCOMMA)
}

func (s *TableSourcesContext) COMMA(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserCOMMA, i)
}

func (s *TableSourcesContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *TableSourcesContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *TableSourcesContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterTableSources(s)
	}
}

func (s *TableSourcesContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitTableSources(s)
	}
}

func (p *SimpleSqlParser) TableSources() (localctx ITableSourcesContext) {
	localctx = NewTableSourcesContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 28, SimpleSqlParserRULE_tableSources)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(223)
		p.TableSource()
	}
	p.SetState(228)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	for _la == SimpleSqlParserCOMMA {
		{
			p.SetState(224)
			p.Match(SimpleSqlParserCOMMA)
		}
		{
			p.SetState(225)
			p.TableSource()
		}

		p.SetState(230)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)
	}

	return localctx
}

// ITableSourceContext is an interface to support dynamic dispatch.
type ITableSourceContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsTableSourceContext differentiates from other interfaces.
	IsTableSourceContext()
}

type TableSourceContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyTableSourceContext() *TableSourceContext {
	var p = new(TableSourceContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_tableSource
	return p
}

func (*TableSourceContext) IsTableSourceContext() {}

func NewTableSourceContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *TableSourceContext {
	var p = new(TableSourceContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_tableSource

	return p
}

func (s *TableSourceContext) GetParser() antlr.Parser { return s.parser }

func (s *TableSourceContext) TableSourceItem() ITableSourceItemContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ITableSourceItemContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ITableSourceItemContext)
}

func (s *TableSourceContext) AllJoinPart() []IJoinPartContext {
	var ts = s.GetTypedRuleContexts(reflect.TypeOf((*IJoinPartContext)(nil)).Elem())
	var tst = make([]IJoinPartContext, len(ts))

	for i, t := range ts {
		if t != nil {
			tst[i] = t.(IJoinPartContext)
		}
	}

	return tst
}

func (s *TableSourceContext) JoinPart(i int) IJoinPartContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IJoinPartContext)(nil)).Elem(), i)

	if t == nil {
		return nil
	}

	return t.(IJoinPartContext)
}

func (s *TableSourceContext) LPAREN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserLPAREN, 0)
}

func (s *TableSourceContext) RPAREN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserRPAREN, 0)
}

func (s *TableSourceContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *TableSourceContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *TableSourceContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterTableSource(s)
	}
}

func (s *TableSourceContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitTableSource(s)
	}
}

func (p *SimpleSqlParser) TableSource() (localctx ITableSourceContext) {
	localctx = NewTableSourceContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 30, SimpleSqlParserRULE_tableSource)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.SetState(248)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 32, p.GetParserRuleContext()) {
	case 1:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(231)
			p.TableSourceItem()
		}
		p.SetState(235)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		for ((_la-55)&-(0x1f+1)) == 0 && ((1<<uint((_la-55)))&((1<<(SimpleSqlParserINNER-55))|(1<<(SimpleSqlParserLEFT-55))|(1<<(SimpleSqlParserRIGHT-55))|(1<<(SimpleSqlParserJOIN-55))|(1<<(SimpleSqlParserCROSS-55))|(1<<(SimpleSqlParserNATURAL-55)))) != 0 {
			{
				p.SetState(232)
				p.JoinPart()
			}

			p.SetState(237)
			p.GetErrorHandler().Sync(p)
			_la = p.GetTokenStream().LA(1)
		}

	case 2:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(238)
			p.Match(SimpleSqlParserLPAREN)
		}
		{
			p.SetState(239)
			p.TableSourceItem()
		}
		p.SetState(243)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		for ((_la-55)&-(0x1f+1)) == 0 && ((1<<uint((_la-55)))&((1<<(SimpleSqlParserINNER-55))|(1<<(SimpleSqlParserLEFT-55))|(1<<(SimpleSqlParserRIGHT-55))|(1<<(SimpleSqlParserJOIN-55))|(1<<(SimpleSqlParserCROSS-55))|(1<<(SimpleSqlParserNATURAL-55)))) != 0 {
			{
				p.SetState(240)
				p.JoinPart()
			}

			p.SetState(245)
			p.GetErrorHandler().Sync(p)
			_la = p.GetTokenStream().LA(1)
		}
		{
			p.SetState(246)
			p.Match(SimpleSqlParserRPAREN)
		}

	}

	return localctx
}

// ITableSourceItemContext is an interface to support dynamic dispatch.
type ITableSourceItemContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// GetAlias returns the alias token.
	GetAlias() antlr.Token

	// SetAlias sets the alias token.
	SetAlias(antlr.Token)

	// GetSubquery returns the subquery rule contexts.
	GetSubquery() ISelectStmtContext

	// GetParanthesisSubquery returns the paranthesisSubquery rule contexts.
	GetParanthesisSubquery() ISelectStmtContext

	// SetSubquery sets the subquery rule contexts.
	SetSubquery(ISelectStmtContext)

	// SetParanthesisSubquery sets the paranthesisSubquery rule contexts.
	SetParanthesisSubquery(ISelectStmtContext)

	// IsTableSourceItemContext differentiates from other interfaces.
	IsTableSourceItemContext()
}

type TableSourceItemContext struct {
	*antlr.BaseParserRuleContext
	parser              antlr.Parser
	alias               antlr.Token
	subquery            ISelectStmtContext
	paranthesisSubquery ISelectStmtContext
}

func NewEmptyTableSourceItemContext() *TableSourceItemContext {
	var p = new(TableSourceItemContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_tableSourceItem
	return p
}

func (*TableSourceItemContext) IsTableSourceItemContext() {}

func NewTableSourceItemContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *TableSourceItemContext {
	var p = new(TableSourceItemContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_tableSourceItem

	return p
}

func (s *TableSourceItemContext) GetParser() antlr.Parser { return s.parser }

func (s *TableSourceItemContext) GetAlias() antlr.Token { return s.alias }

func (s *TableSourceItemContext) SetAlias(v antlr.Token) { s.alias = v }

func (s *TableSourceItemContext) GetSubquery() ISelectStmtContext { return s.subquery }

func (s *TableSourceItemContext) GetParanthesisSubquery() ISelectStmtContext {
	return s.paranthesisSubquery
}

func (s *TableSourceItemContext) SetSubquery(v ISelectStmtContext) { s.subquery = v }

func (s *TableSourceItemContext) SetParanthesisSubquery(v ISelectStmtContext) {
	s.paranthesisSubquery = v
}

func (s *TableSourceItemContext) TableName() ITableNameContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ITableNameContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ITableNameContext)
}

func (s *TableSourceItemContext) ID() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserID, 0)
}

func (s *TableSourceItemContext) AS() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserAS, 0)
}

func (s *TableSourceItemContext) LPAREN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserLPAREN, 0)
}

func (s *TableSourceItemContext) RPAREN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserRPAREN, 0)
}

func (s *TableSourceItemContext) SelectStmt() ISelectStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ISelectStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ISelectStmtContext)
}

func (s *TableSourceItemContext) TableSources() ITableSourcesContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ITableSourcesContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ITableSourcesContext)
}

func (s *TableSourceItemContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *TableSourceItemContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *TableSourceItemContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterTableSourceItem(s)
	}
}

func (s *TableSourceItemContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitTableSourceItem(s)
	}
}

func (p *SimpleSqlParser) TableSourceItem() (localctx ITableSourceItemContext) {
	localctx = NewTableSourceItemContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 32, SimpleSqlParserRULE_tableSourceItem)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.SetState(273)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 37, p.GetParserRuleContext()) {
	case 1:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(250)
			p.TableName()
		}
		p.SetState(255)
		p.GetErrorHandler().Sync(p)

		if p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 34, p.GetParserRuleContext()) == 1 {
			p.SetState(252)
			p.GetErrorHandler().Sync(p)
			_la = p.GetTokenStream().LA(1)

			if _la == SimpleSqlParserAS {
				{
					p.SetState(251)
					p.Match(SimpleSqlParserAS)
				}

			}
			{
				p.SetState(254)

				var _m = p.Match(SimpleSqlParserID)

				localctx.(*TableSourceItemContext).alias = _m
			}

		}

	case 2:
		p.EnterOuterAlt(localctx, 2)
		p.SetState(262)
		p.GetErrorHandler().Sync(p)

		switch p.GetTokenStream().LA(1) {
		case SimpleSqlParserSELECT:
			{
				p.SetState(257)

				var _x = p.SelectStmt()

				localctx.(*TableSourceItemContext).subquery = _x
			}

		case SimpleSqlParserLPAREN:
			{
				p.SetState(258)
				p.Match(SimpleSqlParserLPAREN)
			}
			{
				p.SetState(259)

				var _x = p.SelectStmt()

				localctx.(*TableSourceItemContext).paranthesisSubquery = _x
			}
			{
				p.SetState(260)
				p.Match(SimpleSqlParserRPAREN)
			}

		default:
			panic(antlr.NewNoViableAltException(p, nil, nil, nil, nil, nil))
		}
		p.SetState(265)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		if _la == SimpleSqlParserAS {
			{
				p.SetState(264)
				p.Match(SimpleSqlParserAS)
			}

		}
		{
			p.SetState(267)

			var _m = p.Match(SimpleSqlParserID)

			localctx.(*TableSourceItemContext).alias = _m
		}

	case 3:
		p.EnterOuterAlt(localctx, 3)
		{
			p.SetState(269)
			p.Match(SimpleSqlParserLPAREN)
		}
		{
			p.SetState(270)
			p.TableSources()
		}
		{
			p.SetState(271)
			p.Match(SimpleSqlParserRPAREN)
		}

	}

	return localctx
}

// IJoinPartContext is an interface to support dynamic dispatch.
type IJoinPartContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsJoinPartContext differentiates from other interfaces.
	IsJoinPartContext()
}

type JoinPartContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyJoinPartContext() *JoinPartContext {
	var p = new(JoinPartContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_joinPart
	return p
}

func (*JoinPartContext) IsJoinPartContext() {}

func NewJoinPartContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *JoinPartContext {
	var p = new(JoinPartContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_joinPart

	return p
}

func (s *JoinPartContext) GetParser() antlr.Parser { return s.parser }

func (s *JoinPartContext) JOIN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserJOIN, 0)
}

func (s *JoinPartContext) TableSourceItem() ITableSourceItemContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ITableSourceItemContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ITableSourceItemContext)
}

func (s *JoinPartContext) ON() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserON, 0)
}

func (s *JoinPartContext) Expr() IExprContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IExprContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IExprContext)
}

func (s *JoinPartContext) INNER() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserINNER, 0)
}

func (s *JoinPartContext) CROSS() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserCROSS, 0)
}

func (s *JoinPartContext) LEFT() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserLEFT, 0)
}

func (s *JoinPartContext) RIGHT() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserRIGHT, 0)
}

func (s *JoinPartContext) OUTER() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserOUTER, 0)
}

func (s *JoinPartContext) NATURAL() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserNATURAL, 0)
}

func (s *JoinPartContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *JoinPartContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *JoinPartContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterJoinPart(s)
	}
}

func (s *JoinPartContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitJoinPart(s)
	}
}

func (p *SimpleSqlParser) JoinPart() (localctx IJoinPartContext) {
	localctx = NewJoinPartContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 34, SimpleSqlParserRULE_joinPart)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.SetState(307)
	p.GetErrorHandler().Sync(p)

	switch p.GetTokenStream().LA(1) {
	case SimpleSqlParserINNER, SimpleSqlParserJOIN, SimpleSqlParserCROSS:
		p.EnterOuterAlt(localctx, 1)
		p.SetState(276)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		if _la == SimpleSqlParserINNER || _la == SimpleSqlParserCROSS {
			{
				p.SetState(275)
				_la = p.GetTokenStream().LA(1)

				if !(_la == SimpleSqlParserINNER || _la == SimpleSqlParserCROSS) {
					p.GetErrorHandler().RecoverInline(p)
				} else {
					p.GetErrorHandler().ReportMatch(p)
					p.Consume()
				}
			}

		}
		{
			p.SetState(278)
			p.Match(SimpleSqlParserJOIN)
		}
		{
			p.SetState(279)
			p.TableSourceItem()
		}
		p.SetState(282)
		p.GetErrorHandler().Sync(p)

		if p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 39, p.GetParserRuleContext()) == 1 {
			{
				p.SetState(280)
				p.Match(SimpleSqlParserON)
			}
			{
				p.SetState(281)
				p.expr(0)
			}

		}

	case SimpleSqlParserLEFT, SimpleSqlParserRIGHT:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(284)
			_la = p.GetTokenStream().LA(1)

			if !(_la == SimpleSqlParserLEFT || _la == SimpleSqlParserRIGHT) {
				p.GetErrorHandler().RecoverInline(p)
			} else {
				p.GetErrorHandler().ReportMatch(p)
				p.Consume()
			}
		}
		p.SetState(286)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		if _la == SimpleSqlParserOUTER {
			{
				p.SetState(285)
				p.Match(SimpleSqlParserOUTER)
			}

		}
		{
			p.SetState(288)
			p.Match(SimpleSqlParserJOIN)
		}
		{
			p.SetState(289)
			p.TableSourceItem()
		}
		p.SetState(292)
		p.GetErrorHandler().Sync(p)

		if p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 41, p.GetParserRuleContext()) == 1 {
			{
				p.SetState(290)
				p.Match(SimpleSqlParserON)
			}
			{
				p.SetState(291)
				p.expr(0)
			}

		}

	case SimpleSqlParserNATURAL:
		p.EnterOuterAlt(localctx, 3)
		{
			p.SetState(294)
			p.Match(SimpleSqlParserNATURAL)
		}
		p.SetState(299)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		if _la == SimpleSqlParserLEFT || _la == SimpleSqlParserRIGHT {
			{
				p.SetState(295)
				_la = p.GetTokenStream().LA(1)

				if !(_la == SimpleSqlParserLEFT || _la == SimpleSqlParserRIGHT) {
					p.GetErrorHandler().RecoverInline(p)
				} else {
					p.GetErrorHandler().ReportMatch(p)
					p.Consume()
				}
			}
			p.SetState(297)
			p.GetErrorHandler().Sync(p)
			_la = p.GetTokenStream().LA(1)

			if _la == SimpleSqlParserOUTER {
				{
					p.SetState(296)
					p.Match(SimpleSqlParserOUTER)
				}

			}

		}
		{
			p.SetState(301)
			p.Match(SimpleSqlParserJOIN)
		}
		{
			p.SetState(302)
			p.TableSourceItem()
		}
		p.SetState(305)
		p.GetErrorHandler().Sync(p)

		if p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 44, p.GetParserRuleContext()) == 1 {
			{
				p.SetState(303)
				p.Match(SimpleSqlParserON)
			}
			{
				p.SetState(304)
				p.expr(0)
			}

		}

	default:
		panic(antlr.NewNoViableAltException(p, nil, nil, nil, nil, nil))
	}

	return localctx
}

// ISelectColumnContext is an interface to support dynamic dispatch.
type ISelectColumnContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsSelectColumnContext differentiates from other interfaces.
	IsSelectColumnContext()
}

type SelectColumnContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptySelectColumnContext() *SelectColumnContext {
	var p = new(SelectColumnContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_selectColumn
	return p
}

func (*SelectColumnContext) IsSelectColumnContext() {}

func NewSelectColumnContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *SelectColumnContext {
	var p = new(SelectColumnContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_selectColumn

	return p
}

func (s *SelectColumnContext) GetParser() antlr.Parser { return s.parser }

func (s *SelectColumnContext) AllColumnName() []IColumnNameContext {
	var ts = s.GetTypedRuleContexts(reflect.TypeOf((*IColumnNameContext)(nil)).Elem())
	var tst = make([]IColumnNameContext, len(ts))

	for i, t := range ts {
		if t != nil {
			tst[i] = t.(IColumnNameContext)
		}
	}

	return tst
}

func (s *SelectColumnContext) ColumnName(i int) IColumnNameContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IColumnNameContext)(nil)).Elem(), i)

	if t == nil {
		return nil
	}

	return t.(IColumnNameContext)
}

func (s *SelectColumnContext) AS() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserAS, 0)
}

func (s *SelectColumnContext) FunctionName() IFunctionNameContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IFunctionNameContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IFunctionNameContext)
}

func (s *SelectColumnContext) LPAREN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserLPAREN, 0)
}

func (s *SelectColumnContext) RPAREN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserRPAREN, 0)
}

func (s *SelectColumnContext) ASTERISK() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserASTERISK, 0)
}

func (s *SelectColumnContext) AllSubExpr() []ISubExprContext {
	var ts = s.GetTypedRuleContexts(reflect.TypeOf((*ISubExprContext)(nil)).Elem())
	var tst = make([]ISubExprContext, len(ts))

	for i, t := range ts {
		if t != nil {
			tst[i] = t.(ISubExprContext)
		}
	}

	return tst
}

func (s *SelectColumnContext) SubExpr(i int) ISubExprContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ISubExprContext)(nil)).Elem(), i)

	if t == nil {
		return nil
	}

	return t.(ISubExprContext)
}

func (s *SelectColumnContext) AllCOMMA() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserCOMMA)
}

func (s *SelectColumnContext) COMMA(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserCOMMA, i)
}

func (s *SelectColumnContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *SelectColumnContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *SelectColumnContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterSelectColumn(s)
	}
}

func (s *SelectColumnContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitSelectColumn(s)
	}
}

func (p *SimpleSqlParser) SelectColumn() (localctx ISelectColumnContext) {
	localctx = NewSelectColumnContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 36, SimpleSqlParserRULE_selectColumn)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.SetState(329)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 49, p.GetParserRuleContext()) {
	case 1:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(309)
			p.ColumnName()
		}
		p.SetState(312)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		if _la == SimpleSqlParserAS {
			{
				p.SetState(310)
				p.Match(SimpleSqlParserAS)
			}
			{
				p.SetState(311)
				p.ColumnName()
			}

		}

	case 2:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(314)
			p.FunctionName()
		}
		{
			p.SetState(315)
			p.Match(SimpleSqlParserLPAREN)
		}
		p.SetState(325)
		p.GetErrorHandler().Sync(p)

		switch p.GetTokenStream().LA(1) {
		case SimpleSqlParserNULL, SimpleSqlParserTRUE, SimpleSqlParserFALSE, SimpleSqlParserLPAREN, SimpleSqlParserNOT, SimpleSqlParserDOT, SimpleSqlParserCASE, SimpleSqlParserID, SimpleSqlParserNUMBER, SimpleSqlParserSTRING, SimpleSqlParserDQUOTA_STRING, SimpleSqlParserSQUOTA_STRING:
			{
				p.SetState(316)
				p.subExpr(0)
			}
			p.SetState(321)
			p.GetErrorHandler().Sync(p)
			_la = p.GetTokenStream().LA(1)

			for _la == SimpleSqlParserCOMMA {
				{
					p.SetState(317)
					p.Match(SimpleSqlParserCOMMA)
				}
				{
					p.SetState(318)
					p.subExpr(0)
				}

				p.SetState(323)
				p.GetErrorHandler().Sync(p)
				_la = p.GetTokenStream().LA(1)
			}

		case SimpleSqlParserASTERISK:
			{
				p.SetState(324)
				p.Match(SimpleSqlParserASTERISK)
			}

		case SimpleSqlParserRPAREN:

		default:
		}
		{
			p.SetState(327)
			p.Match(SimpleSqlParserRPAREN)
		}

	}

	return localctx
}

// IInsertStmtValueContext is an interface to support dynamic dispatch.
type IInsertStmtValueContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// GetInsertFormat returns the insertFormat token.
	GetInsertFormat() antlr.Token

	// SetInsertFormat sets the insertFormat token.
	SetInsertFormat(antlr.Token)

	// IsInsertStmtValueContext differentiates from other interfaces.
	IsInsertStmtValueContext()
}

type InsertStmtValueContext struct {
	*antlr.BaseParserRuleContext
	parser       antlr.Parser
	insertFormat antlr.Token
}

func NewEmptyInsertStmtValueContext() *InsertStmtValueContext {
	var p = new(InsertStmtValueContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_insertStmtValue
	return p
}

func (*InsertStmtValueContext) IsInsertStmtValueContext() {}

func NewInsertStmtValueContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *InsertStmtValueContext {
	var p = new(InsertStmtValueContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_insertStmtValue

	return p
}

func (s *InsertStmtValueContext) GetParser() antlr.Parser { return s.parser }

func (s *InsertStmtValueContext) GetInsertFormat() antlr.Token { return s.insertFormat }

func (s *InsertStmtValueContext) SetInsertFormat(v antlr.Token) { s.insertFormat = v }

func (s *InsertStmtValueContext) SelectStmt() ISelectStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ISelectStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ISelectStmtContext)
}

func (s *InsertStmtValueContext) AllLPAREN() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserLPAREN)
}

func (s *InsertStmtValueContext) LPAREN(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserLPAREN, i)
}

func (s *InsertStmtValueContext) AllExprWithDefaults() []IExprWithDefaultsContext {
	var ts = s.GetTypedRuleContexts(reflect.TypeOf((*IExprWithDefaultsContext)(nil)).Elem())
	var tst = make([]IExprWithDefaultsContext, len(ts))

	for i, t := range ts {
		if t != nil {
			tst[i] = t.(IExprWithDefaultsContext)
		}
	}

	return tst
}

func (s *InsertStmtValueContext) ExprWithDefaults(i int) IExprWithDefaultsContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IExprWithDefaultsContext)(nil)).Elem(), i)

	if t == nil {
		return nil
	}

	return t.(IExprWithDefaultsContext)
}

func (s *InsertStmtValueContext) AllRPAREN() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserRPAREN)
}

func (s *InsertStmtValueContext) RPAREN(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserRPAREN, i)
}

func (s *InsertStmtValueContext) VALUES() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserVALUES, 0)
}

func (s *InsertStmtValueContext) VALUE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserVALUE, 0)
}

func (s *InsertStmtValueContext) AllCOMMA() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserCOMMA)
}

func (s *InsertStmtValueContext) COMMA(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserCOMMA, i)
}

func (s *InsertStmtValueContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *InsertStmtValueContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *InsertStmtValueContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterInsertStmtValue(s)
	}
}

func (s *InsertStmtValueContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitInsertStmtValue(s)
	}
}

func (p *SimpleSqlParser) InsertStmtValue() (localctx IInsertStmtValueContext) {
	localctx = NewInsertStmtValueContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 38, SimpleSqlParserRULE_insertStmtValue)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.SetState(346)
	p.GetErrorHandler().Sync(p)

	switch p.GetTokenStream().LA(1) {
	case SimpleSqlParserSELECT:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(331)
			p.SelectStmt()
		}

	case SimpleSqlParserVALUE, SimpleSqlParserVALUES:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(332)

			var _lt = p.GetTokenStream().LT(1)

			localctx.(*InsertStmtValueContext).insertFormat = _lt

			_la = p.GetTokenStream().LA(1)

			if !(_la == SimpleSqlParserVALUE || _la == SimpleSqlParserVALUES) {
				var _ri = p.GetErrorHandler().RecoverInline(p)

				localctx.(*InsertStmtValueContext).insertFormat = _ri
			} else {
				p.GetErrorHandler().ReportMatch(p)
				p.Consume()
			}
		}
		{
			p.SetState(333)
			p.Match(SimpleSqlParserLPAREN)
		}
		{
			p.SetState(334)
			p.ExprWithDefaults()
		}
		{
			p.SetState(335)
			p.Match(SimpleSqlParserRPAREN)
		}
		p.SetState(343)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		for _la == SimpleSqlParserCOMMA {
			{
				p.SetState(336)
				p.Match(SimpleSqlParserCOMMA)
			}
			{
				p.SetState(337)
				p.Match(SimpleSqlParserLPAREN)
			}
			{
				p.SetState(338)
				p.ExprWithDefaults()
			}
			{
				p.SetState(339)
				p.Match(SimpleSqlParserRPAREN)
			}

			p.SetState(345)
			p.GetErrorHandler().Sync(p)
			_la = p.GetTokenStream().LA(1)
		}

	default:
		panic(antlr.NewNoViableAltException(p, nil, nil, nil, nil, nil))
	}

	return localctx
}

// IExprWithDefaultsContext is an interface to support dynamic dispatch.
type IExprWithDefaultsContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsExprWithDefaultsContext differentiates from other interfaces.
	IsExprWithDefaultsContext()
}

type ExprWithDefaultsContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyExprWithDefaultsContext() *ExprWithDefaultsContext {
	var p = new(ExprWithDefaultsContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_exprWithDefaults
	return p
}

func (*ExprWithDefaultsContext) IsExprWithDefaultsContext() {}

func NewExprWithDefaultsContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *ExprWithDefaultsContext {
	var p = new(ExprWithDefaultsContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_exprWithDefaults

	return p
}

func (s *ExprWithDefaultsContext) GetParser() antlr.Parser { return s.parser }

func (s *ExprWithDefaultsContext) AllExprOrDefault() []IExprOrDefaultContext {
	var ts = s.GetTypedRuleContexts(reflect.TypeOf((*IExprOrDefaultContext)(nil)).Elem())
	var tst = make([]IExprOrDefaultContext, len(ts))

	for i, t := range ts {
		if t != nil {
			tst[i] = t.(IExprOrDefaultContext)
		}
	}

	return tst
}

func (s *ExprWithDefaultsContext) ExprOrDefault(i int) IExprOrDefaultContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IExprOrDefaultContext)(nil)).Elem(), i)

	if t == nil {
		return nil
	}

	return t.(IExprOrDefaultContext)
}

func (s *ExprWithDefaultsContext) AllCOMMA() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserCOMMA)
}

func (s *ExprWithDefaultsContext) COMMA(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserCOMMA, i)
}

func (s *ExprWithDefaultsContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *ExprWithDefaultsContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *ExprWithDefaultsContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterExprWithDefaults(s)
	}
}

func (s *ExprWithDefaultsContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitExprWithDefaults(s)
	}
}

func (p *SimpleSqlParser) ExprWithDefaults() (localctx IExprWithDefaultsContext) {
	localctx = NewExprWithDefaultsContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 40, SimpleSqlParserRULE_exprWithDefaults)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(348)
		p.ExprOrDefault()
	}
	p.SetState(353)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	for _la == SimpleSqlParserCOMMA {
		{
			p.SetState(349)
			p.Match(SimpleSqlParserCOMMA)
		}
		{
			p.SetState(350)
			p.ExprOrDefault()
		}

		p.SetState(355)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)
	}

	return localctx
}

// IUpdatedElementContext is an interface to support dynamic dispatch.
type IUpdatedElementContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsUpdatedElementContext differentiates from other interfaces.
	IsUpdatedElementContext()
}

type UpdatedElementContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyUpdatedElementContext() *UpdatedElementContext {
	var p = new(UpdatedElementContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_updatedElement
	return p
}

func (*UpdatedElementContext) IsUpdatedElementContext() {}

func NewUpdatedElementContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *UpdatedElementContext {
	var p = new(UpdatedElementContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_updatedElement

	return p
}

func (s *UpdatedElementContext) GetParser() antlr.Parser { return s.parser }

func (s *UpdatedElementContext) ColumnName() IColumnNameContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IColumnNameContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IColumnNameContext)
}

func (s *UpdatedElementContext) EQ() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserEQ, 0)
}

func (s *UpdatedElementContext) SubExpr() ISubExprContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ISubExprContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ISubExprContext)
}

func (s *UpdatedElementContext) DEFAULT() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserDEFAULT, 0)
}

func (s *UpdatedElementContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *UpdatedElementContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *UpdatedElementContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterUpdatedElement(s)
	}
}

func (s *UpdatedElementContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitUpdatedElement(s)
	}
}

func (p *SimpleSqlParser) UpdatedElement() (localctx IUpdatedElementContext) {
	localctx = NewUpdatedElementContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 42, SimpleSqlParserRULE_updatedElement)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(356)
		p.ColumnName()
	}
	{
		p.SetState(357)
		p.Match(SimpleSqlParserEQ)
	}
	p.SetState(360)
	p.GetErrorHandler().Sync(p)

	switch p.GetTokenStream().LA(1) {
	case SimpleSqlParserNULL, SimpleSqlParserTRUE, SimpleSqlParserFALSE, SimpleSqlParserLPAREN, SimpleSqlParserNOT, SimpleSqlParserDOT, SimpleSqlParserCASE, SimpleSqlParserID, SimpleSqlParserNUMBER, SimpleSqlParserSTRING, SimpleSqlParserDQUOTA_STRING, SimpleSqlParserSQUOTA_STRING:
		{
			p.SetState(358)
			p.subExpr(0)
		}

	case SimpleSqlParserDEFAULT:
		{
			p.SetState(359)
			p.Match(SimpleSqlParserDEFAULT)
		}

	default:
		panic(antlr.NewNoViableAltException(p, nil, nil, nil, nil, nil))
	}

	return localctx
}

// ISubExprContext is an interface to support dynamic dispatch.
type ISubExprContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// GetOp returns the op token.
	GetOp() antlr.Token

	// SetOp sets the op token.
	SetOp(antlr.Token)

	// GetInElement returns the inElement rule contexts.
	GetInElement() ISubExprContext

	// Get_subExpr returns the _subExpr rule contexts.
	Get_subExpr() ISubExprContext

	// SetInElement sets the inElement rule contexts.
	SetInElement(ISubExprContext)

	// Set_subExpr sets the _subExpr rule contexts.
	Set_subExpr(ISubExprContext)

	// GetInElements returns the inElements rule context list.
	GetInElements() []ISubExprContext

	// SetInElements sets the inElements rule context list.
	SetInElements([]ISubExprContext)

	// IsSubExprContext differentiates from other interfaces.
	IsSubExprContext()
}

type SubExprContext struct {
	*antlr.BaseParserRuleContext
	parser     antlr.Parser
	op         antlr.Token
	inElement  ISubExprContext
	_subExpr   ISubExprContext
	inElements []ISubExprContext
}

func NewEmptySubExprContext() *SubExprContext {
	var p = new(SubExprContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_subExpr
	return p
}

func (*SubExprContext) IsSubExprContext() {}

func NewSubExprContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *SubExprContext {
	var p = new(SubExprContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_subExpr

	return p
}

func (s *SubExprContext) GetParser() antlr.Parser { return s.parser }

func (s *SubExprContext) GetOp() antlr.Token { return s.op }

func (s *SubExprContext) SetOp(v antlr.Token) { s.op = v }

func (s *SubExprContext) GetInElement() ISubExprContext { return s.inElement }

func (s *SubExprContext) Get_subExpr() ISubExprContext { return s._subExpr }

func (s *SubExprContext) SetInElement(v ISubExprContext) { s.inElement = v }

func (s *SubExprContext) Set_subExpr(v ISubExprContext) { s._subExpr = v }

func (s *SubExprContext) GetInElements() []ISubExprContext { return s.inElements }

func (s *SubExprContext) SetInElements(v []ISubExprContext) { s.inElements = v }

func (s *SubExprContext) NOT() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserNOT, 0)
}

func (s *SubExprContext) AllSubExpr() []ISubExprContext {
	var ts = s.GetTypedRuleContexts(reflect.TypeOf((*ISubExprContext)(nil)).Elem())
	var tst = make([]ISubExprContext, len(ts))

	for i, t := range ts {
		if t != nil {
			tst[i] = t.(ISubExprContext)
		}
	}

	return tst
}

func (s *SubExprContext) SubExpr(i int) ISubExprContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ISubExprContext)(nil)).Elem(), i)

	if t == nil {
		return nil
	}

	return t.(ISubExprContext)
}

func (s *SubExprContext) FunctionName() IFunctionNameContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IFunctionNameContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IFunctionNameContext)
}

func (s *SubExprContext) LPAREN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserLPAREN, 0)
}

func (s *SubExprContext) RPAREN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserRPAREN, 0)
}

func (s *SubExprContext) ASTERISK() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserASTERISK, 0)
}

func (s *SubExprContext) AllCOMMA() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserCOMMA)
}

func (s *SubExprContext) COMMA(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserCOMMA, i)
}

func (s *SubExprContext) CASE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserCASE, 0)
}

func (s *SubExprContext) END() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserEND, 0)
}

func (s *SubExprContext) AllWHEN() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserWHEN)
}

func (s *SubExprContext) WHEN(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserWHEN, i)
}

func (s *SubExprContext) AllTHEN() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserTHEN)
}

func (s *SubExprContext) THEN(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserTHEN, i)
}

func (s *SubExprContext) ELSE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserELSE, 0)
}

func (s *SubExprContext) SubLiteralValue() ISubLiteralValueContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ISubLiteralValueContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ISubLiteralValueContext)
}

func (s *SubExprContext) FieldName() IFieldNameContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IFieldNameContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IFieldNameContext)
}

func (s *SubExprContext) DIVIDE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserDIVIDE, 0)
}

func (s *SubExprContext) MOD() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserMOD, 0)
}

func (s *SubExprContext) PLUS() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserPLUS, 0)
}

func (s *SubExprContext) MINUS() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserMINUS, 0)
}

func (s *SubExprContext) LT() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserLT, 0)
}

func (s *SubExprContext) LTE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserLTE, 0)
}

func (s *SubExprContext) GT() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserGT, 0)
}

func (s *SubExprContext) GTE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserGTE, 0)
}

func (s *SubExprContext) EQ() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserEQ, 0)
}

func (s *SubExprContext) NOT_EQ() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserNOT_EQ, 0)
}

func (s *SubExprContext) MATCH() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserMATCH, 0)
}

func (s *SubExprContext) NOT_MATCH() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserNOT_MATCH, 0)
}

func (s *SubExprContext) LIKE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserLIKE, 0)
}

func (s *SubExprContext) REGEXP() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserREGEXP, 0)
}

func (s *SubExprContext) AND() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserAND, 0)
}

func (s *SubExprContext) OR() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserOR, 0)
}

func (s *SubExprContext) BETWEEN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserBETWEEN, 0)
}

func (s *SubExprContext) IN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserIN, 0)
}

func (s *SubExprContext) SelectStmt() ISelectStmtContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ISelectStmtContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ISelectStmtContext)
}

func (s *SubExprContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *SubExprContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *SubExprContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterSubExpr(s)
	}
}

func (s *SubExprContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitSubExpr(s)
	}
}

func (p *SimpleSqlParser) SubExpr() (localctx ISubExprContext) {
	return p.subExpr(0)
}

func (p *SimpleSqlParser) subExpr(_p int) (localctx ISubExprContext) {
	var _parentctx antlr.ParserRuleContext = p.GetParserRuleContext()
	_parentState := p.GetState()
	localctx = NewSubExprContext(p, p.GetParserRuleContext(), _parentState)
	var _prevctx ISubExprContext = localctx
	var _ antlr.ParserRuleContext = _prevctx // TODO: To prevent unused variable warning.
	_startState := 44
	p.EnterRecursionRule(localctx, 44, SimpleSqlParserRULE_subExpr, _p)
	var _la int

	defer func() {
		p.UnrollRecursionContexts(_parentctx)
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	var _alt int

	p.EnterOuterAlt(localctx, 1)
	p.SetState(405)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 59, p.GetParserRuleContext()) {
	case 1:
		{
			p.SetState(363)
			p.Match(SimpleSqlParserNOT)
		}
		{
			p.SetState(364)
			p.subExpr(8)
		}

	case 2:
		{
			p.SetState(365)
			p.FunctionName()
		}
		{
			p.SetState(366)
			p.Match(SimpleSqlParserLPAREN)
		}
		p.SetState(376)
		p.GetErrorHandler().Sync(p)

		switch p.GetTokenStream().LA(1) {
		case SimpleSqlParserNULL, SimpleSqlParserTRUE, SimpleSqlParserFALSE, SimpleSqlParserLPAREN, SimpleSqlParserNOT, SimpleSqlParserDOT, SimpleSqlParserCASE, SimpleSqlParserID, SimpleSqlParserNUMBER, SimpleSqlParserSTRING, SimpleSqlParserDQUOTA_STRING, SimpleSqlParserSQUOTA_STRING:
			{
				p.SetState(367)
				p.subExpr(0)
			}
			p.SetState(372)
			p.GetErrorHandler().Sync(p)
			_la = p.GetTokenStream().LA(1)

			for _la == SimpleSqlParserCOMMA {
				{
					p.SetState(368)
					p.Match(SimpleSqlParserCOMMA)
				}
				{
					p.SetState(369)
					p.subExpr(0)
				}

				p.SetState(374)
				p.GetErrorHandler().Sync(p)
				_la = p.GetTokenStream().LA(1)
			}

		case SimpleSqlParserASTERISK:
			{
				p.SetState(375)
				p.Match(SimpleSqlParserASTERISK)
			}

		case SimpleSqlParserRPAREN:

		default:
		}
		{
			p.SetState(378)
			p.Match(SimpleSqlParserRPAREN)
		}

	case 3:
		{
			p.SetState(380)
			p.Match(SimpleSqlParserLPAREN)
		}
		{
			p.SetState(381)
			p.subExpr(0)
		}
		{
			p.SetState(382)
			p.Match(SimpleSqlParserRPAREN)
		}

	case 4:
		{
			p.SetState(384)
			p.Match(SimpleSqlParserCASE)
		}
		p.SetState(386)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		if (((_la)&-(0x1f+1)) == 0 && ((1<<uint(_la))&((1<<SimpleSqlParserNULL)|(1<<SimpleSqlParserTRUE)|(1<<SimpleSqlParserFALSE)|(1<<SimpleSqlParserLPAREN))) != 0) || (((_la-32)&-(0x1f+1)) == 0 && ((1<<uint((_la-32)))&((1<<(SimpleSqlParserNOT-32))|(1<<(SimpleSqlParserDOT-32))|(1<<(SimpleSqlParserCASE-32)))) != 0) || (((_la-77)&-(0x1f+1)) == 0 && ((1<<uint((_la-77)))&((1<<(SimpleSqlParserID-77))|(1<<(SimpleSqlParserNUMBER-77))|(1<<(SimpleSqlParserSTRING-77))|(1<<(SimpleSqlParserDQUOTA_STRING-77))|(1<<(SimpleSqlParserSQUOTA_STRING-77)))) != 0) {
			{
				p.SetState(385)
				p.subExpr(0)
			}

		}
		p.SetState(393)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		for ok := true; ok; ok = _la == SimpleSqlParserWHEN {
			{
				p.SetState(388)
				p.Match(SimpleSqlParserWHEN)
			}
			{
				p.SetState(389)
				p.subExpr(0)
			}
			{
				p.SetState(390)
				p.Match(SimpleSqlParserTHEN)
			}
			{
				p.SetState(391)
				p.subExpr(0)
			}

			p.SetState(395)
			p.GetErrorHandler().Sync(p)
			_la = p.GetTokenStream().LA(1)
		}
		p.SetState(399)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		if _la == SimpleSqlParserELSE {
			{
				p.SetState(397)
				p.Match(SimpleSqlParserELSE)
			}
			{
				p.SetState(398)
				p.subExpr(0)
			}

		}
		{
			p.SetState(401)
			p.Match(SimpleSqlParserEND)
		}

	case 5:
		{
			p.SetState(403)
			p.SubLiteralValue()
		}

	case 6:
		{
			p.SetState(404)
			p.FieldName()
		}

	}
	p.GetParserRuleContext().SetStop(p.GetTokenStream().LT(-1))
	p.SetState(462)
	p.GetErrorHandler().Sync(p)
	_alt = p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 68, p.GetParserRuleContext())

	for _alt != 2 && _alt != antlr.ATNInvalidAltNumber {
		if _alt == 1 {
			if p.GetParseListeners() != nil {
				p.TriggerExitRuleEvent()
			}
			_prevctx = localctx
			p.SetState(460)
			p.GetErrorHandler().Sync(p)
			switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 67, p.GetParserRuleContext()) {
			case 1:
				localctx = NewSubExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_subExpr)
				p.SetState(407)

				if !(p.Precpred(p.GetParserRuleContext(), 13)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 13)", ""))
				}
				{
					p.SetState(408)

					var _lt = p.GetTokenStream().LT(1)

					localctx.(*SubExprContext).op = _lt

					_la = p.GetTokenStream().LA(1)

					if !(((_la)&-(0x1f+1)) == 0 && ((1<<uint(_la))&((1<<SimpleSqlParserDIVIDE)|(1<<SimpleSqlParserMOD)|(1<<SimpleSqlParserPLUS)|(1<<SimpleSqlParserMINUS)|(1<<SimpleSqlParserASTERISK))) != 0) {
						var _ri = p.GetErrorHandler().RecoverInline(p)

						localctx.(*SubExprContext).op = _ri
					} else {
						p.GetErrorHandler().ReportMatch(p)
						p.Consume()
					}
				}
				{
					p.SetState(409)
					p.subExpr(14)
				}

			case 2:
				localctx = NewSubExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_subExpr)
				p.SetState(410)

				if !(p.Precpred(p.GetParserRuleContext(), 12)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 12)", ""))
				}
				{
					p.SetState(411)

					var _lt = p.GetTokenStream().LT(1)

					localctx.(*SubExprContext).op = _lt

					_la = p.GetTokenStream().LA(1)

					if !(((_la-29)&-(0x1f+1)) == 0 && ((1<<uint((_la-29)))&((1<<(SimpleSqlParserLT-29))|(1<<(SimpleSqlParserGT-29))|(1<<(SimpleSqlParserLTE-29))|(1<<(SimpleSqlParserGTE-29)))) != 0) {
						var _ri = p.GetErrorHandler().RecoverInline(p)

						localctx.(*SubExprContext).op = _ri
					} else {
						p.GetErrorHandler().ReportMatch(p)
						p.Consume()
					}
				}
				{
					p.SetState(412)
					p.subExpr(13)
				}

			case 3:
				localctx = NewSubExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_subExpr)
				p.SetState(413)

				if !(p.Precpred(p.GetParserRuleContext(), 11)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 11)", ""))
				}
				{
					p.SetState(414)

					var _lt = p.GetTokenStream().LT(1)

					localctx.(*SubExprContext).op = _lt

					_la = p.GetTokenStream().LA(1)

					if !(((_la)&-(0x1f+1)) == 0 && ((1<<uint(_la))&((1<<SimpleSqlParserMATCH)|(1<<SimpleSqlParserNOT_MATCH)|(1<<SimpleSqlParserEQ)|(1<<SimpleSqlParserNOT_EQ))) != 0) {
						var _ri = p.GetErrorHandler().RecoverInline(p)

						localctx.(*SubExprContext).op = _ri
					} else {
						p.GetErrorHandler().ReportMatch(p)
						p.Consume()
					}
				}
				{
					p.SetState(415)
					p.subExpr(12)
				}

			case 4:
				localctx = NewSubExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_subExpr)
				p.SetState(416)

				if !(p.Precpred(p.GetParserRuleContext(), 10)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 10)", ""))
				}
				p.SetState(418)
				p.GetErrorHandler().Sync(p)
				_la = p.GetTokenStream().LA(1)

				if _la == SimpleSqlParserNOT {
					{
						p.SetState(417)
						p.Match(SimpleSqlParserNOT)
					}

				}
				{
					p.SetState(420)
					p.Match(SimpleSqlParserLIKE)
				}
				{
					p.SetState(421)
					p.subExpr(11)
				}

			case 5:
				localctx = NewSubExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_subExpr)
				p.SetState(422)

				if !(p.Precpred(p.GetParserRuleContext(), 9)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 9)", ""))
				}
				p.SetState(424)
				p.GetErrorHandler().Sync(p)
				_la = p.GetTokenStream().LA(1)

				if _la == SimpleSqlParserNOT {
					{
						p.SetState(423)
						p.Match(SimpleSqlParserNOT)
					}

				}
				{
					p.SetState(426)
					p.Match(SimpleSqlParserREGEXP)
				}
				{
					p.SetState(427)
					p.subExpr(10)
				}

			case 6:
				localctx = NewSubExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_subExpr)
				p.SetState(428)

				if !(p.Precpred(p.GetParserRuleContext(), 7)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 7)", ""))
				}
				{
					p.SetState(429)

					var _lt = p.GetTokenStream().LT(1)

					localctx.(*SubExprContext).op = _lt

					_la = p.GetTokenStream().LA(1)

					if !(_la == SimpleSqlParserAND || _la == SimpleSqlParserOR) {
						var _ri = p.GetErrorHandler().RecoverInline(p)

						localctx.(*SubExprContext).op = _ri
					} else {
						p.GetErrorHandler().ReportMatch(p)
						p.Consume()
					}
				}
				{
					p.SetState(430)
					p.subExpr(8)
				}

			case 7:
				localctx = NewSubExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_subExpr)
				p.SetState(431)

				if !(p.Precpred(p.GetParserRuleContext(), 4)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 4)", ""))
				}
				p.SetState(433)
				p.GetErrorHandler().Sync(p)
				_la = p.GetTokenStream().LA(1)

				if _la == SimpleSqlParserNOT {
					{
						p.SetState(432)
						p.Match(SimpleSqlParserNOT)
					}

				}
				{
					p.SetState(435)
					p.Match(SimpleSqlParserBETWEEN)
				}
				{
					p.SetState(436)
					p.subExpr(0)
				}
				{
					p.SetState(437)
					p.Match(SimpleSqlParserAND)
				}
				{
					p.SetState(438)
					p.subExpr(5)
				}

			case 8:
				localctx = NewSubExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_subExpr)
				p.SetState(440)

				if !(p.Precpred(p.GetParserRuleContext(), 14)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 14)", ""))
				}
				p.SetState(442)
				p.GetErrorHandler().Sync(p)
				_la = p.GetTokenStream().LA(1)

				if _la == SimpleSqlParserNOT {
					{
						p.SetState(441)
						p.Match(SimpleSqlParserNOT)
					}

				}
				{
					p.SetState(444)
					p.Match(SimpleSqlParserIN)
				}
				{
					p.SetState(445)
					p.Match(SimpleSqlParserLPAREN)
				}
				p.SetState(457)
				p.GetErrorHandler().Sync(p)

				switch p.GetTokenStream().LA(1) {
				case SimpleSqlParserNULL, SimpleSqlParserTRUE, SimpleSqlParserFALSE, SimpleSqlParserRPAREN, SimpleSqlParserLPAREN, SimpleSqlParserNOT, SimpleSqlParserDOT, SimpleSqlParserCASE, SimpleSqlParserID, SimpleSqlParserNUMBER, SimpleSqlParserSTRING, SimpleSqlParserDQUOTA_STRING, SimpleSqlParserSQUOTA_STRING:
					p.SetState(454)
					p.GetErrorHandler().Sync(p)
					_la = p.GetTokenStream().LA(1)

					if (((_la)&-(0x1f+1)) == 0 && ((1<<uint(_la))&((1<<SimpleSqlParserNULL)|(1<<SimpleSqlParserTRUE)|(1<<SimpleSqlParserFALSE)|(1<<SimpleSqlParserLPAREN))) != 0) || (((_la-32)&-(0x1f+1)) == 0 && ((1<<uint((_la-32)))&((1<<(SimpleSqlParserNOT-32))|(1<<(SimpleSqlParserDOT-32))|(1<<(SimpleSqlParserCASE-32)))) != 0) || (((_la-77)&-(0x1f+1)) == 0 && ((1<<uint((_la-77)))&((1<<(SimpleSqlParserID-77))|(1<<(SimpleSqlParserNUMBER-77))|(1<<(SimpleSqlParserSTRING-77))|(1<<(SimpleSqlParserDQUOTA_STRING-77))|(1<<(SimpleSqlParserSQUOTA_STRING-77)))) != 0) {
						{
							p.SetState(446)

							var _x = p.subExpr(0)

							localctx.(*SubExprContext).inElement = _x
						}
						p.SetState(451)
						p.GetErrorHandler().Sync(p)
						_la = p.GetTokenStream().LA(1)

						for _la == SimpleSqlParserCOMMA {
							{
								p.SetState(447)
								p.Match(SimpleSqlParserCOMMA)
							}
							{
								p.SetState(448)

								var _x = p.subExpr(0)

								localctx.(*SubExprContext)._subExpr = _x
							}
							localctx.(*SubExprContext).inElements = append(localctx.(*SubExprContext).inElements, localctx.(*SubExprContext)._subExpr)

							p.SetState(453)
							p.GetErrorHandler().Sync(p)
							_la = p.GetTokenStream().LA(1)
						}

					}

				case SimpleSqlParserSELECT:
					{
						p.SetState(456)
						p.SelectStmt()
					}

				default:
					panic(antlr.NewNoViableAltException(p, nil, nil, nil, nil, nil))
				}
				{
					p.SetState(459)
					p.Match(SimpleSqlParserRPAREN)
				}

			}

		}
		p.SetState(464)
		p.GetErrorHandler().Sync(p)
		_alt = p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 68, p.GetParserRuleContext())
	}

	return localctx
}

// IExprContext is an interface to support dynamic dispatch.
type IExprContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// GetOp returns the op token.
	GetOp() antlr.Token

	// SetOp sets the op token.
	SetOp(antlr.Token)

	// IsExprContext differentiates from other interfaces.
	IsExprContext()
}

type ExprContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
	op     antlr.Token
}

func NewEmptyExprContext() *ExprContext {
	var p = new(ExprContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_expr
	return p
}

func (*ExprContext) IsExprContext() {}

func NewExprContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *ExprContext {
	var p = new(ExprContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_expr

	return p
}

func (s *ExprContext) GetParser() antlr.Parser { return s.parser }

func (s *ExprContext) GetOp() antlr.Token { return s.op }

func (s *ExprContext) SetOp(v antlr.Token) { s.op = v }

func (s *ExprContext) NOT() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserNOT, 0)
}

func (s *ExprContext) AllExpr() []IExprContext {
	var ts = s.GetTypedRuleContexts(reflect.TypeOf((*IExprContext)(nil)).Elem())
	var tst = make([]IExprContext, len(ts))

	for i, t := range ts {
		if t != nil {
			tst[i] = t.(IExprContext)
		}
	}

	return tst
}

func (s *ExprContext) Expr(i int) IExprContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IExprContext)(nil)).Elem(), i)

	if t == nil {
		return nil
	}

	return t.(IExprContext)
}

func (s *ExprContext) FunctionName() IFunctionNameContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IFunctionNameContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IFunctionNameContext)
}

func (s *ExprContext) LPAREN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserLPAREN, 0)
}

func (s *ExprContext) RPAREN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserRPAREN, 0)
}

func (s *ExprContext) ASTERISK() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserASTERISK, 0)
}

func (s *ExprContext) AllSubExpr() []ISubExprContext {
	var ts = s.GetTypedRuleContexts(reflect.TypeOf((*ISubExprContext)(nil)).Elem())
	var tst = make([]ISubExprContext, len(ts))

	for i, t := range ts {
		if t != nil {
			tst[i] = t.(ISubExprContext)
		}
	}

	return tst
}

func (s *ExprContext) SubExpr(i int) ISubExprContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ISubExprContext)(nil)).Elem(), i)

	if t == nil {
		return nil
	}

	return t.(ISubExprContext)
}

func (s *ExprContext) AllCOMMA() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserCOMMA)
}

func (s *ExprContext) COMMA(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserCOMMA, i)
}

func (s *ExprContext) CASE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserCASE, 0)
}

func (s *ExprContext) END() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserEND, 0)
}

func (s *ExprContext) AllWHEN() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserWHEN)
}

func (s *ExprContext) WHEN(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserWHEN, i)
}

func (s *ExprContext) AllTHEN() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserTHEN)
}

func (s *ExprContext) THEN(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserTHEN, i)
}

func (s *ExprContext) ELSE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserELSE, 0)
}

func (s *ExprContext) LiteralValue() ILiteralValueContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ILiteralValueContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ILiteralValueContext)
}

func (s *ExprContext) FieldName() IFieldNameContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*IFieldNameContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(IFieldNameContext)
}

func (s *ExprContext) DIVIDE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserDIVIDE, 0)
}

func (s *ExprContext) MOD() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserMOD, 0)
}

func (s *ExprContext) PLUS() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserPLUS, 0)
}

func (s *ExprContext) MINUS() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserMINUS, 0)
}

func (s *ExprContext) LT() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserLT, 0)
}

func (s *ExprContext) LTE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserLTE, 0)
}

func (s *ExprContext) GT() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserGT, 0)
}

func (s *ExprContext) GTE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserGTE, 0)
}

func (s *ExprContext) EQ() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserEQ, 0)
}

func (s *ExprContext) NOT_EQ() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserNOT_EQ, 0)
}

func (s *ExprContext) MATCH() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserMATCH, 0)
}

func (s *ExprContext) NOT_MATCH() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserNOT_MATCH, 0)
}

func (s *ExprContext) LIKE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserLIKE, 0)
}

func (s *ExprContext) REGEXP() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserREGEXP, 0)
}

func (s *ExprContext) AND() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserAND, 0)
}

func (s *ExprContext) OR() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserOR, 0)
}

func (s *ExprContext) BETWEEN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserBETWEEN, 0)
}

func (s *ExprContext) IS() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserIS, 0)
}

func (s *ExprContext) NULL() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserNULL, 0)
}

func (s *ExprContext) IN() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserIN, 0)
}

func (s *ExprContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *ExprContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *ExprContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterExpr(s)
	}
}

func (s *ExprContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitExpr(s)
	}
}

func (p *SimpleSqlParser) Expr() (localctx IExprContext) {
	return p.expr(0)
}

func (p *SimpleSqlParser) expr(_p int) (localctx IExprContext) {
	var _parentctx antlr.ParserRuleContext = p.GetParserRuleContext()
	_parentState := p.GetState()
	localctx = NewExprContext(p, p.GetParserRuleContext(), _parentState)
	var _prevctx IExprContext = localctx
	var _ antlr.ParserRuleContext = _prevctx // TODO: To prevent unused variable warning.
	_startState := 46
	p.EnterRecursionRule(localctx, 46, SimpleSqlParserRULE_expr, _p)
	var _la int

	defer func() {
		p.UnrollRecursionContexts(_parentctx)
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	var _alt int

	p.EnterOuterAlt(localctx, 1)
	p.SetState(508)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 74, p.GetParserRuleContext()) {
	case 1:
		{
			p.SetState(466)
			p.Match(SimpleSqlParserNOT)
		}
		{
			p.SetState(467)
			p.expr(8)
		}

	case 2:
		{
			p.SetState(468)
			p.FunctionName()
		}
		{
			p.SetState(469)
			p.Match(SimpleSqlParserLPAREN)
		}
		p.SetState(479)
		p.GetErrorHandler().Sync(p)

		switch p.GetTokenStream().LA(1) {
		case SimpleSqlParserNULL, SimpleSqlParserTRUE, SimpleSqlParserFALSE, SimpleSqlParserLPAREN, SimpleSqlParserNOT, SimpleSqlParserDOT, SimpleSqlParserCASE, SimpleSqlParserID, SimpleSqlParserNUMBER, SimpleSqlParserSTRING, SimpleSqlParserDQUOTA_STRING, SimpleSqlParserSQUOTA_STRING:
			{
				p.SetState(470)
				p.subExpr(0)
			}
			p.SetState(475)
			p.GetErrorHandler().Sync(p)
			_la = p.GetTokenStream().LA(1)

			for _la == SimpleSqlParserCOMMA {
				{
					p.SetState(471)
					p.Match(SimpleSqlParserCOMMA)
				}
				{
					p.SetState(472)
					p.subExpr(0)
				}

				p.SetState(477)
				p.GetErrorHandler().Sync(p)
				_la = p.GetTokenStream().LA(1)
			}

		case SimpleSqlParserASTERISK:
			{
				p.SetState(478)
				p.Match(SimpleSqlParserASTERISK)
			}

		case SimpleSqlParserRPAREN:

		default:
		}
		{
			p.SetState(481)
			p.Match(SimpleSqlParserRPAREN)
		}

	case 3:
		{
			p.SetState(483)
			p.Match(SimpleSqlParserLPAREN)
		}
		{
			p.SetState(484)
			p.expr(0)
		}
		{
			p.SetState(485)
			p.Match(SimpleSqlParserRPAREN)
		}

	case 4:
		{
			p.SetState(487)
			p.Match(SimpleSqlParserCASE)
		}
		p.SetState(489)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		if (((_la)&-(0x1f+1)) == 0 && ((1<<uint(_la))&((1<<SimpleSqlParserNULL)|(1<<SimpleSqlParserTRUE)|(1<<SimpleSqlParserFALSE)|(1<<SimpleSqlParserLPAREN))) != 0) || (((_la-32)&-(0x1f+1)) == 0 && ((1<<uint((_la-32)))&((1<<(SimpleSqlParserNOT-32))|(1<<(SimpleSqlParserDOT-32))|(1<<(SimpleSqlParserCASE-32)))) != 0) || (((_la-77)&-(0x1f+1)) == 0 && ((1<<uint((_la-77)))&((1<<(SimpleSqlParserID-77))|(1<<(SimpleSqlParserNUMBER-77))|(1<<(SimpleSqlParserSTRING-77))|(1<<(SimpleSqlParserDQUOTA_STRING-77))|(1<<(SimpleSqlParserSQUOTA_STRING-77)))) != 0) {
			{
				p.SetState(488)
				p.expr(0)
			}

		}
		p.SetState(496)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		for ok := true; ok; ok = _la == SimpleSqlParserWHEN {
			{
				p.SetState(491)
				p.Match(SimpleSqlParserWHEN)
			}
			{
				p.SetState(492)
				p.expr(0)
			}
			{
				p.SetState(493)
				p.Match(SimpleSqlParserTHEN)
			}
			{
				p.SetState(494)
				p.expr(0)
			}

			p.SetState(498)
			p.GetErrorHandler().Sync(p)
			_la = p.GetTokenStream().LA(1)
		}
		p.SetState(502)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		if _la == SimpleSqlParserELSE {
			{
				p.SetState(500)
				p.Match(SimpleSqlParserELSE)
			}
			{
				p.SetState(501)
				p.expr(0)
			}

		}
		{
			p.SetState(504)
			p.Match(SimpleSqlParserEND)
		}

	case 5:
		{
			p.SetState(506)
			p.LiteralValue()
		}

	case 6:
		{
			p.SetState(507)
			p.FieldName()
		}

	}
	p.GetParserRuleContext().SetStop(p.GetTokenStream().LT(-1))
	p.SetState(570)
	p.GetErrorHandler().Sync(p)
	_alt = p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 83, p.GetParserRuleContext())

	for _alt != 2 && _alt != antlr.ATNInvalidAltNumber {
		if _alt == 1 {
			if p.GetParseListeners() != nil {
				p.TriggerExitRuleEvent()
			}
			_prevctx = localctx
			p.SetState(568)
			p.GetErrorHandler().Sync(p)
			switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 82, p.GetParserRuleContext()) {
			case 1:
				localctx = NewExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_expr)
				p.SetState(510)

				if !(p.Precpred(p.GetParserRuleContext(), 13)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 13)", ""))
				}
				{
					p.SetState(511)

					var _lt = p.GetTokenStream().LT(1)

					localctx.(*ExprContext).op = _lt

					_la = p.GetTokenStream().LA(1)

					if !(((_la)&-(0x1f+1)) == 0 && ((1<<uint(_la))&((1<<SimpleSqlParserDIVIDE)|(1<<SimpleSqlParserMOD)|(1<<SimpleSqlParserPLUS)|(1<<SimpleSqlParserMINUS)|(1<<SimpleSqlParserASTERISK))) != 0) {
						var _ri = p.GetErrorHandler().RecoverInline(p)

						localctx.(*ExprContext).op = _ri
					} else {
						p.GetErrorHandler().ReportMatch(p)
						p.Consume()
					}
				}
				{
					p.SetState(512)
					p.expr(14)
				}

			case 2:
				localctx = NewExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_expr)
				p.SetState(513)

				if !(p.Precpred(p.GetParserRuleContext(), 12)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 12)", ""))
				}
				{
					p.SetState(514)

					var _lt = p.GetTokenStream().LT(1)

					localctx.(*ExprContext).op = _lt

					_la = p.GetTokenStream().LA(1)

					if !(((_la-29)&-(0x1f+1)) == 0 && ((1<<uint((_la-29)))&((1<<(SimpleSqlParserLT-29))|(1<<(SimpleSqlParserGT-29))|(1<<(SimpleSqlParserLTE-29))|(1<<(SimpleSqlParserGTE-29)))) != 0) {
						var _ri = p.GetErrorHandler().RecoverInline(p)

						localctx.(*ExprContext).op = _ri
					} else {
						p.GetErrorHandler().ReportMatch(p)
						p.Consume()
					}
				}
				{
					p.SetState(515)
					p.expr(13)
				}

			case 3:
				localctx = NewExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_expr)
				p.SetState(516)

				if !(p.Precpred(p.GetParserRuleContext(), 11)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 11)", ""))
				}
				{
					p.SetState(517)

					var _lt = p.GetTokenStream().LT(1)

					localctx.(*ExprContext).op = _lt

					_la = p.GetTokenStream().LA(1)

					if !(((_la)&-(0x1f+1)) == 0 && ((1<<uint(_la))&((1<<SimpleSqlParserMATCH)|(1<<SimpleSqlParserNOT_MATCH)|(1<<SimpleSqlParserEQ)|(1<<SimpleSqlParserNOT_EQ))) != 0) {
						var _ri = p.GetErrorHandler().RecoverInline(p)

						localctx.(*ExprContext).op = _ri
					} else {
						p.GetErrorHandler().ReportMatch(p)
						p.Consume()
					}
				}
				{
					p.SetState(518)
					p.expr(12)
				}

			case 4:
				localctx = NewExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_expr)
				p.SetState(519)

				if !(p.Precpred(p.GetParserRuleContext(), 10)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 10)", ""))
				}
				p.SetState(521)
				p.GetErrorHandler().Sync(p)
				_la = p.GetTokenStream().LA(1)

				if _la == SimpleSqlParserNOT {
					{
						p.SetState(520)
						p.Match(SimpleSqlParserNOT)
					}

				}
				{
					p.SetState(523)
					p.Match(SimpleSqlParserLIKE)
				}
				{
					p.SetState(524)
					p.expr(11)
				}

			case 5:
				localctx = NewExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_expr)
				p.SetState(525)

				if !(p.Precpred(p.GetParserRuleContext(), 9)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 9)", ""))
				}
				p.SetState(527)
				p.GetErrorHandler().Sync(p)
				_la = p.GetTokenStream().LA(1)

				if _la == SimpleSqlParserNOT {
					{
						p.SetState(526)
						p.Match(SimpleSqlParserNOT)
					}

				}
				{
					p.SetState(529)
					p.Match(SimpleSqlParserREGEXP)
				}
				{
					p.SetState(530)
					p.expr(10)
				}

			case 6:
				localctx = NewExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_expr)
				p.SetState(531)

				if !(p.Precpred(p.GetParserRuleContext(), 7)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 7)", ""))
				}
				{
					p.SetState(532)

					var _lt = p.GetTokenStream().LT(1)

					localctx.(*ExprContext).op = _lt

					_la = p.GetTokenStream().LA(1)

					if !(_la == SimpleSqlParserAND || _la == SimpleSqlParserOR) {
						var _ri = p.GetErrorHandler().RecoverInline(p)

						localctx.(*ExprContext).op = _ri
					} else {
						p.GetErrorHandler().ReportMatch(p)
						p.Consume()
					}
				}
				{
					p.SetState(533)
					p.expr(8)
				}

			case 7:
				localctx = NewExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_expr)
				p.SetState(534)

				if !(p.Precpred(p.GetParserRuleContext(), 4)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 4)", ""))
				}
				p.SetState(536)
				p.GetErrorHandler().Sync(p)
				_la = p.GetTokenStream().LA(1)

				if _la == SimpleSqlParserNOT {
					{
						p.SetState(535)
						p.Match(SimpleSqlParserNOT)
					}

				}
				{
					p.SetState(538)
					p.Match(SimpleSqlParserBETWEEN)
				}
				{
					p.SetState(539)
					p.expr(0)
				}
				{
					p.SetState(540)
					p.Match(SimpleSqlParserAND)
				}
				{
					p.SetState(541)
					p.expr(5)
				}

			case 8:
				localctx = NewExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_expr)
				p.SetState(543)

				if !(p.Precpred(p.GetParserRuleContext(), 15)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 15)", ""))
				}
				p.SetState(549)
				p.GetErrorHandler().Sync(p)
				switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 78, p.GetParserRuleContext()) {
				case 1:
					{
						p.SetState(544)
						p.Match(SimpleSqlParserIS)
					}
					{
						p.SetState(545)
						p.Match(SimpleSqlParserNULL)
					}

				case 2:
					{
						p.SetState(546)
						p.Match(SimpleSqlParserIS)
					}
					{
						p.SetState(547)
						p.Match(SimpleSqlParserNOT)
					}
					{
						p.SetState(548)
						p.Match(SimpleSqlParserNULL)
					}

				}

			case 9:
				localctx = NewExprContext(p, _parentctx, _parentState)
				p.PushNewRecursionContext(localctx, _startState, SimpleSqlParserRULE_expr)
				p.SetState(551)

				if !(p.Precpred(p.GetParserRuleContext(), 14)) {
					panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 14)", ""))
				}
				p.SetState(553)
				p.GetErrorHandler().Sync(p)
				_la = p.GetTokenStream().LA(1)

				if _la == SimpleSqlParserNOT {
					{
						p.SetState(552)
						p.Match(SimpleSqlParserNOT)
					}

				}
				{
					p.SetState(555)
					p.Match(SimpleSqlParserIN)
				}
				{
					p.SetState(556)
					p.Match(SimpleSqlParserLPAREN)
				}
				p.SetState(565)
				p.GetErrorHandler().Sync(p)
				_la = p.GetTokenStream().LA(1)

				if (((_la)&-(0x1f+1)) == 0 && ((1<<uint(_la))&((1<<SimpleSqlParserNULL)|(1<<SimpleSqlParserTRUE)|(1<<SimpleSqlParserFALSE)|(1<<SimpleSqlParserLPAREN))) != 0) || (((_la-32)&-(0x1f+1)) == 0 && ((1<<uint((_la-32)))&((1<<(SimpleSqlParserNOT-32))|(1<<(SimpleSqlParserDOT-32))|(1<<(SimpleSqlParserCASE-32)))) != 0) || (((_la-77)&-(0x1f+1)) == 0 && ((1<<uint((_la-77)))&((1<<(SimpleSqlParserID-77))|(1<<(SimpleSqlParserNUMBER-77))|(1<<(SimpleSqlParserSTRING-77))|(1<<(SimpleSqlParserDQUOTA_STRING-77))|(1<<(SimpleSqlParserSQUOTA_STRING-77)))) != 0) {
					{
						p.SetState(557)
						p.expr(0)
					}
					p.SetState(562)
					p.GetErrorHandler().Sync(p)
					_la = p.GetTokenStream().LA(1)

					for _la == SimpleSqlParserCOMMA {
						{
							p.SetState(558)
							p.Match(SimpleSqlParserCOMMA)
						}
						{
							p.SetState(559)
							p.expr(0)
						}

						p.SetState(564)
						p.GetErrorHandler().Sync(p)
						_la = p.GetTokenStream().LA(1)
					}

				}
				{
					p.SetState(567)
					p.Match(SimpleSqlParserRPAREN)
				}

			}

		}
		p.SetState(572)
		p.GetErrorHandler().Sync(p)
		_alt = p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 83, p.GetParserRuleContext())
	}

	return localctx
}

// IIdListContext is an interface to support dynamic dispatch.
type IIdListContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsIdListContext differentiates from other interfaces.
	IsIdListContext()
}

type IdListContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyIdListContext() *IdListContext {
	var p = new(IdListContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_idList
	return p
}

func (*IdListContext) IsIdListContext() {}

func NewIdListContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *IdListContext {
	var p = new(IdListContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_idList

	return p
}

func (s *IdListContext) GetParser() antlr.Parser { return s.parser }

func (s *IdListContext) AllID() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserID)
}

func (s *IdListContext) ID(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserID, i)
}

func (s *IdListContext) AllCOMMA() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserCOMMA)
}

func (s *IdListContext) COMMA(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserCOMMA, i)
}

func (s *IdListContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *IdListContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *IdListContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterIdList(s)
	}
}

func (s *IdListContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitIdList(s)
	}
}

func (p *SimpleSqlParser) IdList() (localctx IIdListContext) {
	localctx = NewIdListContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 48, SimpleSqlParserRULE_idList)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(573)
		p.Match(SimpleSqlParserID)
	}
	p.SetState(578)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	for _la == SimpleSqlParserCOMMA {
		{
			p.SetState(574)
			p.Match(SimpleSqlParserCOMMA)
		}
		{
			p.SetState(575)
			p.Match(SimpleSqlParserID)
		}

		p.SetState(580)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)
	}

	return localctx
}

// IExprOrDefaultContext is an interface to support dynamic dispatch.
type IExprOrDefaultContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsExprOrDefaultContext differentiates from other interfaces.
	IsExprOrDefaultContext()
}

type ExprOrDefaultContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyExprOrDefaultContext() *ExprOrDefaultContext {
	var p = new(ExprOrDefaultContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_exprOrDefault
	return p
}

func (*ExprOrDefaultContext) IsExprOrDefaultContext() {}

func NewExprOrDefaultContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *ExprOrDefaultContext {
	var p = new(ExprOrDefaultContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_exprOrDefault

	return p
}

func (s *ExprOrDefaultContext) GetParser() antlr.Parser { return s.parser }

func (s *ExprOrDefaultContext) LiteralValue() ILiteralValueContext {
	var t = s.GetTypedRuleContext(reflect.TypeOf((*ILiteralValueContext)(nil)).Elem(), 0)

	if t == nil {
		return nil
	}

	return t.(ILiteralValueContext)
}

func (s *ExprOrDefaultContext) DEFAULT() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserDEFAULT, 0)
}

func (s *ExprOrDefaultContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *ExprOrDefaultContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *ExprOrDefaultContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterExprOrDefault(s)
	}
}

func (s *ExprOrDefaultContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitExprOrDefault(s)
	}
}

func (p *SimpleSqlParser) ExprOrDefault() (localctx IExprOrDefaultContext) {
	localctx = NewExprOrDefaultContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 50, SimpleSqlParserRULE_exprOrDefault)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.SetState(583)
	p.GetErrorHandler().Sync(p)

	switch p.GetTokenStream().LA(1) {
	case SimpleSqlParserNULL, SimpleSqlParserTRUE, SimpleSqlParserFALSE, SimpleSqlParserNUMBER, SimpleSqlParserSTRING, SimpleSqlParserDQUOTA_STRING, SimpleSqlParserSQUOTA_STRING:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(581)
			p.LiteralValue()
		}

	case SimpleSqlParserDEFAULT:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(582)
			p.Match(SimpleSqlParserDEFAULT)
		}

	default:
		panic(antlr.NewNoViableAltException(p, nil, nil, nil, nil, nil))
	}

	return localctx
}

// ITableNameContext is an interface to support dynamic dispatch.
type ITableNameContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsTableNameContext differentiates from other interfaces.
	IsTableNameContext()
}

type TableNameContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyTableNameContext() *TableNameContext {
	var p = new(TableNameContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_tableName
	return p
}

func (*TableNameContext) IsTableNameContext() {}

func NewTableNameContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *TableNameContext {
	var p = new(TableNameContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_tableName

	return p
}

func (s *TableNameContext) GetParser() antlr.Parser { return s.parser }

func (s *TableNameContext) ID() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserID, 0)
}

func (s *TableNameContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *TableNameContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *TableNameContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterTableName(s)
	}
}

func (s *TableNameContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitTableName(s)
	}
}

func (p *SimpleSqlParser) TableName() (localctx ITableNameContext) {
	localctx = NewTableNameContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 52, SimpleSqlParserRULE_tableName)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(585)
		p.Match(SimpleSqlParserID)
	}

	return localctx
}

// IColumnNameContext is an interface to support dynamic dispatch.
type IColumnNameContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsColumnNameContext differentiates from other interfaces.
	IsColumnNameContext()
}

type ColumnNameContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyColumnNameContext() *ColumnNameContext {
	var p = new(ColumnNameContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_columnName
	return p
}

func (*ColumnNameContext) IsColumnNameContext() {}

func NewColumnNameContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *ColumnNameContext {
	var p = new(ColumnNameContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_columnName

	return p
}

func (s *ColumnNameContext) GetParser() antlr.Parser { return s.parser }

func (s *ColumnNameContext) ID() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserID, 0)
}

func (s *ColumnNameContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *ColumnNameContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *ColumnNameContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterColumnName(s)
	}
}

func (s *ColumnNameContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitColumnName(s)
	}
}

func (p *SimpleSqlParser) ColumnName() (localctx IColumnNameContext) {
	localctx = NewColumnNameContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 54, SimpleSqlParserRULE_columnName)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(587)
		p.Match(SimpleSqlParserID)
	}

	return localctx
}

// IFunctionNameContext is an interface to support dynamic dispatch.
type IFunctionNameContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsFunctionNameContext differentiates from other interfaces.
	IsFunctionNameContext()
}

type FunctionNameContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyFunctionNameContext() *FunctionNameContext {
	var p = new(FunctionNameContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_functionName
	return p
}

func (*FunctionNameContext) IsFunctionNameContext() {}

func NewFunctionNameContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *FunctionNameContext {
	var p = new(FunctionNameContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_functionName

	return p
}

func (s *FunctionNameContext) GetParser() antlr.Parser { return s.parser }

func (s *FunctionNameContext) ID() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserID, 0)
}

func (s *FunctionNameContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *FunctionNameContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *FunctionNameContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterFunctionName(s)
	}
}

func (s *FunctionNameContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitFunctionName(s)
	}
}

func (p *SimpleSqlParser) FunctionName() (localctx IFunctionNameContext) {
	localctx = NewFunctionNameContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 56, SimpleSqlParserRULE_functionName)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(589)
		p.Match(SimpleSqlParserID)
	}

	return localctx
}

// IFieldNameContext is an interface to support dynamic dispatch.
type IFieldNameContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsFieldNameContext differentiates from other interfaces.
	IsFieldNameContext()
}

type FieldNameContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyFieldNameContext() *FieldNameContext {
	var p = new(FieldNameContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_fieldName
	return p
}

func (*FieldNameContext) IsFieldNameContext() {}

func NewFieldNameContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *FieldNameContext {
	var p = new(FieldNameContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_fieldName

	return p
}

func (s *FieldNameContext) GetParser() antlr.Parser { return s.parser }

func (s *FieldNameContext) AllID() []antlr.TerminalNode {
	return s.GetTokens(SimpleSqlParserID)
}

func (s *FieldNameContext) ID(i int) antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserID, i)
}

func (s *FieldNameContext) DOT() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserDOT, 0)
}

func (s *FieldNameContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *FieldNameContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *FieldNameContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterFieldName(s)
	}
}

func (s *FieldNameContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitFieldName(s)
	}
}

func (p *SimpleSqlParser) FieldName() (localctx IFieldNameContext) {
	localctx = NewFieldNameContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 58, SimpleSqlParserRULE_fieldName)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.SetState(597)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 87, p.GetParserRuleContext()) {
	case 1:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(591)
			p.Match(SimpleSqlParserID)
		}

	case 2:
		p.EnterOuterAlt(localctx, 2)
		p.SetState(593)
		p.GetErrorHandler().Sync(p)
		_la = p.GetTokenStream().LA(1)

		if _la == SimpleSqlParserID {
			{
				p.SetState(592)
				p.Match(SimpleSqlParserID)
			}

		}
		{
			p.SetState(595)
			p.Match(SimpleSqlParserDOT)
		}
		{
			p.SetState(596)
			p.Match(SimpleSqlParserID)
		}

	}

	return localctx
}

// ILiteralValueContext is an interface to support dynamic dispatch.
type ILiteralValueContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsLiteralValueContext differentiates from other interfaces.
	IsLiteralValueContext()
}

type LiteralValueContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyLiteralValueContext() *LiteralValueContext {
	var p = new(LiteralValueContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_literalValue
	return p
}

func (*LiteralValueContext) IsLiteralValueContext() {}

func NewLiteralValueContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *LiteralValueContext {
	var p = new(LiteralValueContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_literalValue

	return p
}

func (s *LiteralValueContext) GetParser() antlr.Parser { return s.parser }

func (s *LiteralValueContext) NUMBER() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserNUMBER, 0)
}

func (s *LiteralValueContext) STRING() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserSTRING, 0)
}

func (s *LiteralValueContext) SQUOTA_STRING() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserSQUOTA_STRING, 0)
}

func (s *LiteralValueContext) DQUOTA_STRING() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserDQUOTA_STRING, 0)
}

func (s *LiteralValueContext) TRUE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserTRUE, 0)
}

func (s *LiteralValueContext) FALSE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserFALSE, 0)
}

func (s *LiteralValueContext) NULL() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserNULL, 0)
}

func (s *LiteralValueContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *LiteralValueContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *LiteralValueContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterLiteralValue(s)
	}
}

func (s *LiteralValueContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitLiteralValue(s)
	}
}

func (p *SimpleSqlParser) LiteralValue() (localctx ILiteralValueContext) {
	localctx = NewLiteralValueContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 60, SimpleSqlParserRULE_literalValue)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(599)
		_la = p.GetTokenStream().LA(1)

		if !((((_la)&-(0x1f+1)) == 0 && ((1<<uint(_la))&((1<<SimpleSqlParserNULL)|(1<<SimpleSqlParserTRUE)|(1<<SimpleSqlParserFALSE))) != 0) || (((_la-78)&-(0x1f+1)) == 0 && ((1<<uint((_la-78)))&((1<<(SimpleSqlParserNUMBER-78))|(1<<(SimpleSqlParserSTRING-78))|(1<<(SimpleSqlParserDQUOTA_STRING-78))|(1<<(SimpleSqlParserSQUOTA_STRING-78)))) != 0)) {
			p.GetErrorHandler().RecoverInline(p)
		} else {
			p.GetErrorHandler().ReportMatch(p)
			p.Consume()
		}
	}

	return localctx
}

// ISubLiteralValueContext is an interface to support dynamic dispatch.
type ISubLiteralValueContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsSubLiteralValueContext differentiates from other interfaces.
	IsSubLiteralValueContext()
}

type SubLiteralValueContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptySubLiteralValueContext() *SubLiteralValueContext {
	var p = new(SubLiteralValueContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = SimpleSqlParserRULE_subLiteralValue
	return p
}

func (*SubLiteralValueContext) IsSubLiteralValueContext() {}

func NewSubLiteralValueContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *SubLiteralValueContext {
	var p = new(SubLiteralValueContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = SimpleSqlParserRULE_subLiteralValue

	return p
}

func (s *SubLiteralValueContext) GetParser() antlr.Parser { return s.parser }

func (s *SubLiteralValueContext) NUMBER() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserNUMBER, 0)
}

func (s *SubLiteralValueContext) STRING() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserSTRING, 0)
}

func (s *SubLiteralValueContext) SQUOTA_STRING() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserSQUOTA_STRING, 0)
}

func (s *SubLiteralValueContext) DQUOTA_STRING() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserDQUOTA_STRING, 0)
}

func (s *SubLiteralValueContext) TRUE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserTRUE, 0)
}

func (s *SubLiteralValueContext) FALSE() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserFALSE, 0)
}

func (s *SubLiteralValueContext) NULL() antlr.TerminalNode {
	return s.GetToken(SimpleSqlParserNULL, 0)
}

func (s *SubLiteralValueContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *SubLiteralValueContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *SubLiteralValueContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.EnterSubLiteralValue(s)
	}
}

func (s *SubLiteralValueContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(SimpleSqlListener); ok {
		listenerT.ExitSubLiteralValue(s)
	}
}

func (p *SimpleSqlParser) SubLiteralValue() (localctx ISubLiteralValueContext) {
	localctx = NewSubLiteralValueContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 62, SimpleSqlParserRULE_subLiteralValue)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(601)
		_la = p.GetTokenStream().LA(1)

		if !((((_la)&-(0x1f+1)) == 0 && ((1<<uint(_la))&((1<<SimpleSqlParserNULL)|(1<<SimpleSqlParserTRUE)|(1<<SimpleSqlParserFALSE))) != 0) || (((_la-78)&-(0x1f+1)) == 0 && ((1<<uint((_la-78)))&((1<<(SimpleSqlParserNUMBER-78))|(1<<(SimpleSqlParserSTRING-78))|(1<<(SimpleSqlParserDQUOTA_STRING-78))|(1<<(SimpleSqlParserSQUOTA_STRING-78)))) != 0)) {
			p.GetErrorHandler().RecoverInline(p)
		} else {
			p.GetErrorHandler().ReportMatch(p)
			p.Consume()
		}
	}

	return localctx
}

func (p *SimpleSqlParser) Sempred(localctx antlr.RuleContext, ruleIndex, predIndex int) bool {
	switch ruleIndex {
	case 22:
		var t *SubExprContext = nil
		if localctx != nil {
			t = localctx.(*SubExprContext)
		}
		return p.SubExpr_Sempred(t, predIndex)

	case 23:
		var t *ExprContext = nil
		if localctx != nil {
			t = localctx.(*ExprContext)
		}
		return p.Expr_Sempred(t, predIndex)

	default:
		panic("No predicate with index: " + fmt.Sprint(ruleIndex))
	}
}

func (p *SimpleSqlParser) SubExpr_Sempred(localctx antlr.RuleContext, predIndex int) bool {
	switch predIndex {
	case 0:
		return p.Precpred(p.GetParserRuleContext(), 13)

	case 1:
		return p.Precpred(p.GetParserRuleContext(), 12)

	case 2:
		return p.Precpred(p.GetParserRuleContext(), 11)

	case 3:
		return p.Precpred(p.GetParserRuleContext(), 10)

	case 4:
		return p.Precpred(p.GetParserRuleContext(), 9)

	case 5:
		return p.Precpred(p.GetParserRuleContext(), 7)

	case 6:
		return p.Precpred(p.GetParserRuleContext(), 4)

	case 7:
		return p.Precpred(p.GetParserRuleContext(), 14)

	default:
		panic("No predicate with index: " + fmt.Sprint(predIndex))
	}
}

func (p *SimpleSqlParser) Expr_Sempred(localctx antlr.RuleContext, predIndex int) bool {
	switch predIndex {
	case 8:
		return p.Precpred(p.GetParserRuleContext(), 13)

	case 9:
		return p.Precpred(p.GetParserRuleContext(), 12)

	case 10:
		return p.Precpred(p.GetParserRuleContext(), 11)

	case 11:
		return p.Precpred(p.GetParserRuleContext(), 10)

	case 12:
		return p.Precpred(p.GetParserRuleContext(), 9)

	case 13:
		return p.Precpred(p.GetParserRuleContext(), 7)

	case 14:
		return p.Precpred(p.GetParserRuleContext(), 4)

	case 15:
		return p.Precpred(p.GetParserRuleContext(), 15)

	case 16:
		return p.Precpred(p.GetParserRuleContext(), 14)

	default:
		panic("No predicate with index: " + fmt.Sprint(predIndex))
	}
}

// should include in every g4 generate
func (ctx *SubLiteralValueContext) GetTextWithSpace() string {
	return string("? ")
}

func (ctx *SubLiteralValueContext) GetOriginalText() string {
	return ctx.BaseParserRuleContext.GetText()
}

//
