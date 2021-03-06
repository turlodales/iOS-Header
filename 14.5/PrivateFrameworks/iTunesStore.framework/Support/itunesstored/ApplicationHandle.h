//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DownloadHandle.h"

@class NSString;

@interface ApplicationHandle : DownloadHandle
{
    NSString *_bundleID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithTransactionIdentifier:(long long)arg1 downloadIdentifier:(long long)arg2 bundleIdentifier:(id)arg3;
- (id)initWithDownloadHandle:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithTransactionIdentifier:(long long)arg1 downloadIdentifier:(long long)arg2;

@end

