//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IntentsUI/NSObject-Protocol.h>

@class INInteraction, NSSet;

@protocol _INUIRemoteViewControllerServing <NSObject>
- (void)queryRepresentedPropertiesWithCompletion:(void (^)(NSArray *))arg1;
- (void)desiresInteractivity:(void (^)(_Bool))arg1;
- (void)viewWasCancelled;
- (void)configureForParameters:(NSSet *)arg1 ofInteraction:(INInteraction *)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(void (^)(_Bool, NSSet *, struct CGSize, NSError *))arg5;
@end

