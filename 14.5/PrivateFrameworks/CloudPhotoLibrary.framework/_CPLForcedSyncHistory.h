//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLScopeFilter, NSDate, NSString;

@interface _CPLForcedSyncHistory : NSObject
{
    _Bool _discarded;
    NSDate *_creationDate;
    CPLScopeFilter *_filter;
    Class _taskClass;
    NSString *_errorDescription;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(readonly, nonatomic) Class taskClass; // @synthesize taskClass=_taskClass;
@property(readonly, nonatomic) CPLScopeFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) _Bool discarded; // @synthesize discarded=_discarded;
- (id)descriptionWithNow:(id)arg1;
- (id)initWithForcedSyncTask:(id)arg1 discarded:(_Bool)arg2 error:(id)arg3;

@end

