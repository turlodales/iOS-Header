//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKColoringImageView.h>

#import <NanoTimeKitCompanion/NTKKeylineView-Protocol.h>

@class NSString, NTKKeylineTouchable, UIColor;

@interface _NTKKeylineImageView : NTKColoringImageView <NTKKeylineView>
{
    NTKKeylineTouchable *touchable;
    CDUnknownBlockType _colorizationBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType colorizationBlock; // @synthesize colorizationBlock=_colorizationBlock;
@property(retain, nonatomic) NTKKeylineTouchable *touchable; // @synthesize touchable;
@property(retain, nonatomic) UIColor *color;

// Remaining properties
@property(readonly, nonatomic) UIColor *contentColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIColor *overrideColor;
@property(readonly) Class superclass;
@property(nonatomic) _Bool usesLegibility;

@end

