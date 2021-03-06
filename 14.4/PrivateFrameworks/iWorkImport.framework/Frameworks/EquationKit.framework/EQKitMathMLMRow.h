//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EquationKit/EQKitMathMLNode.h>

#import <EquationKit/EQKitLayoutSchemataRow-Protocol.h>
#import <EquationKit/EQKitMathMLNode-Protocol.h>

@class NSArray, NSString;

@interface EQKitMathMLMRow : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataRow>
{
    NSArray *mChildren;
    struct {
        unsigned int mImplied;
    } mFlags;
}

- (id)schemataChildren;
@property(readonly, copy) NSString *description;
- (_Bool)isBaseFontNameUsed;
- (int)isOperatorPaddingRequired;
- (id)operatorCore;
- (_Bool)isEmbellishedOperator;
- (struct Schemata)layoutSchemata;
- (void)dealloc;
- (const set_c5c159f9 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (id)initWithChildren:(id)arg1 node:(struct _xmlNode *)arg2;
- (id)initWithChildren:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

