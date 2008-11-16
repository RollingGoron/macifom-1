//
//  NESCoreEmulation.h
//  Innuendo
//
//  Created by Auston Stewart on 7/27/08.
//

#import <Cocoa/Cocoa.h>

@class NES6502Interpreter;
@class NESPPUEmulator;
@class NESCartridgeEmulator;

@interface NESCoreEmulation : NSObject {

	NES6502Interpreter *cpuInterpreter;
	NESPPUEmulator *ppuEmulator;
	NESCartridgeEmulator *cartEmulator;
}

- (id)initWithROM:(NSString *)path;
- (NES6502Interpreter *)cpu;
- (NESPPUEmulator *)ppu;
- (NESCartridgeEmulator *)cartridge;
- (uint_fast32_t)runUntilBreak;

@end
