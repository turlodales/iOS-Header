//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TKTokenWatcherTokenInfo : NSObject
{
    NSString *_tokenID;
    NSString *_driverName;
    NSString *_slotName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *slotName; // @synthesize slotName=_slotName;
@property(readonly, nonatomic) NSString *driverName; // @synthesize driverName=_driverName;
@property(readonly, nonatomic) NSString *tokenID; // @synthesize tokenID=_tokenID;
- (id)initWithTokenInfo:(id)arg1;

@end

