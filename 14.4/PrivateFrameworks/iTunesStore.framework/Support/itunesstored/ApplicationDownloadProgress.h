//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class ApplicationHandle;

@interface ApplicationDownloadProgress : NSObject <NSCopying>
{
    ApplicationHandle *_applicationHandle;
    long long _completedUnitCount;
    long long _totalUnitCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long totalUnitCount; // @synthesize totalUnitCount=_totalUnitCount;
@property(nonatomic) long long completedUnitCount; // @synthesize completedUnitCount=_completedUnitCount;
@property(copy, nonatomic) ApplicationHandle *applicationHandle; // @synthesize applicationHandle=_applicationHandle;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

