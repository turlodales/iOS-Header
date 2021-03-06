//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class BSServiceConnectionEndpoint, NSString;
@protocol CNUIUserActionCurator, CNUIUserActionDialRequestOpener, CNUIUserActionRecorder, CNUIUserActionURLOpener, CNUIUserActionUserActivityOpener;

@protocol CNUIUserActionContext <NSObject>
@property(copy, nonatomic) BSServiceConnectionEndpoint *connectionEndpoint;
@property(copy, nonatomic) NSString *channelIdentifier;
@property(readonly, nonatomic) id <CNUIUserActionCurator> actionCurator;
@property(readonly, nonatomic) id <CNUIUserActionRecorder> actionRecorder;
@property(readonly, nonatomic) id <CNUIUserActionDialRequestOpener> dialRequestOpener;
@property(readonly, nonatomic) id <CNUIUserActionUserActivityOpener> userActivityOpener;
@property(readonly, nonatomic) id <CNUIUserActionURLOpener> urlOpener;
@end

