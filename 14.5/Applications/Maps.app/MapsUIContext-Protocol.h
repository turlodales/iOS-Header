//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AppCoordinator, AppStateManager, CarStateManager, IOSChromeViewController;
@protocol ActionCoordination, NavActionCoordination;

@protocol MapsUIContext
@property(readonly, nonatomic) CarStateManager *carStateManager;
@property(readonly, nonatomic) id <NavActionCoordination> navActionCoordinator;
@property(readonly, nonatomic) id <ActionCoordination> coordinator;
@property(readonly, nonatomic) IOSChromeViewController *chrome;
@property(readonly, nonatomic) AppStateManager *appStateManager;
@property(readonly, nonatomic) AppCoordinator *appCoordinator;
@property(readonly, nonatomic, getter=isCarPlayOnlyContext) _Bool carPlayOnlyContext;
@end

