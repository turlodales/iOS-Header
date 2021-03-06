//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackBoardServices/BKSHIDEventDigitizerAttributes.h>

@class NSArray;

@interface BKSHIDEventPointerAttributes : BKSHIDEventDigitizerAttributes
{
    unsigned char _pointerEdgeMask;
    unsigned short _pointerState;
    NSArray *_hitTestContexts;
    double _unacceleratedRelativePositionX;
    double _unacceleratedRelativePositionY;
    double _acceleratedRelativePositionX;
    double _acceleratedRelativePositionY;
    long long _activeModifiers;
    long long _fingerDownCount;
}

+ (id)protobufSchema;
- (void).cxx_destruct;
@property(nonatomic) unsigned char pointerEdgeMask; // @synthesize pointerEdgeMask=_pointerEdgeMask;
@property(nonatomic) long long fingerDownCount; // @synthesize fingerDownCount=_fingerDownCount;
@property(nonatomic) long long activeModifiers; // @synthesize activeModifiers=_activeModifiers;
@property(nonatomic) double acceleratedRelativePositionY; // @synthesize acceleratedRelativePositionY=_acceleratedRelativePositionY;
@property(nonatomic) double acceleratedRelativePositionX; // @synthesize acceleratedRelativePositionX=_acceleratedRelativePositionX;
@property(nonatomic) double unacceleratedRelativePositionY; // @synthesize unacceleratedRelativePositionY=_unacceleratedRelativePositionY;
@property(nonatomic) double unacceleratedRelativePositionX; // @synthesize unacceleratedRelativePositionX=_unacceleratedRelativePositionX;
@property(copy, nonatomic) NSArray *hitTestContexts; // @synthesize hitTestContexts=_hitTestContexts;
@property(nonatomic) unsigned short pointerState; // @synthesize pointerState=_pointerState;
- (void)appendDescriptionToFormatter:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

