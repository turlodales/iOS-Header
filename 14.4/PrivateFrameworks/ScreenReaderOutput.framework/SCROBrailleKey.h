//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReaderOutput/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;
@protocol NSSecureCoding;

@interface SCROBrailleKey : NSObject <NSSecureCoding>
{
    NSMutableArray *_maskArray;
    NSString *_identifier;
    long long _routerIndex;
    long long _routerToken;
    long long _routerLocation;
    _Bool _hasRouterInfo;
    id <NSSecureCoding> _appToken;
    int _displayToken;
    int _displayMode;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (_Bool)getRouterIndex:(long long *)arg1 token:(long long *)arg2 location:(long long *)arg3 appToken:(id *)arg4;
- (void)setRouterIndex:(long long)arg1 token:(long long)arg2 location:(long long)arg3 appToken:(id)arg4;
- (id)identifier;
- (id)keyMasks;
- (void)addKeyMask:(unsigned int)arg1;
- (id)description;
- (int)displayMode;
- (void)setDisplayMode:(int)arg1;
- (int)displayToken;
- (void)setDisplayToken:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)addModifierMask:(unsigned int)arg1;
- (void)addSpacebarKeyMask;

@end

