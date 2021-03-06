//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/CRKASMRosterProviderDecoratorBase.h>

@class CATNetworkReachability;

@interface CRKASMNetworkCheckingRosterProvider : CRKASMRosterProviderDecoratorBase
{
    CATNetworkReachability *_networkReachability;
}

+ (id)reachabilityError;
- (void).cxx_destruct;
@property(readonly, nonatomic) CATNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
- (void)removeCourseWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createCourseWithProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRosterProvider:(id)arg1;

@end

