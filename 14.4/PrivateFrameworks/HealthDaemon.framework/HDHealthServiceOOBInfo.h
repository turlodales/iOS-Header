//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface HDHealthServiceOOBInfo : NSObject
{
    NSData *_oobData;
    NSData *_randomValue;
    NSData *_confirmationValue;
    NSData *_btAddress;
}

+ (id)reverseData:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *btAddress; // @synthesize btAddress=_btAddress;
@property(readonly, nonatomic) NSData *confirmationValue; // @synthesize confirmationValue=_confirmationValue;
@property(readonly, nonatomic) NSData *randomValue; // @synthesize randomValue=_randomValue;
@property(readonly, nonatomic) NSData *oobData; // @synthesize oobData=_oobData;
- (id)description;
- (id)initWithOOBData:(id)arg1 btAddress:(id)arg2;

@end

