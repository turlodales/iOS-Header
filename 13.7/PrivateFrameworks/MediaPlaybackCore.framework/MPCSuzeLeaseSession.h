//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICSuzeLeaseSession;

@interface MPCSuzeLeaseSession : NSObject
{
    ICSuzeLeaseSession *_icSuzeLeaseSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ICSuzeLeaseSession *icSuzeLeaseSession; // @synthesize icSuzeLeaseSession=_icSuzeLeaseSession;
- (void)endAutomaticallyRefreshingLease;
- (void)beginAutomaticallyRefreshingLease;
- (id)initWithICSuzeLeaseSession:(id)arg1;

@end

