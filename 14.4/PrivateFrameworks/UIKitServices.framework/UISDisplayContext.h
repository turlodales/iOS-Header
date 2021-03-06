//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitServices/BSXPCCoding-Protocol.h>
#import <UIKitServices/NSCopying-Protocol.h>
#import <UIKitServices/NSMutableCopying-Protocol.h>

@class FBSDisplayConfiguration, NSString, UISApplicationSupportDisplayEdgeInfo;

@interface UISDisplayContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying>
{
    FBSDisplayConfiguration *_displayConfiguration;
    UISApplicationSupportDisplayEdgeInfo *_displayEdgeInfo;
    unsigned long long _artworkSubtype;
    unsigned long long _userInterfaceStyle;
}

+ (id)defaultContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(readonly, nonatomic) unsigned long long artworkSubtype; // @synthesize artworkSubtype=_artworkSubtype;
@property(readonly, nonatomic) UISApplicationSupportDisplayEdgeInfo *displayEdgeInfo; // @synthesize displayEdgeInfo=_displayEdgeInfo;
@property(readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration; // @synthesize displayConfiguration=_displayConfiguration;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)_initWithDisplayContext:(id)arg1;
- (id)initWithDisplayConfiguration:(id)arg1 displayEdgeInfo:(id)arg2;
- (id)initWithDisplayConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

