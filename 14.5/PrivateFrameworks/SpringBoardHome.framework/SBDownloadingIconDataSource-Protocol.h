//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBLeafIconDataSource-Protocol.h>

@class NSString;

@protocol SBDownloadingIconDataSource <SBLeafIconDataSource>
@property(readonly, nonatomic, getter=isCloudDemoted) _Bool cloudDemoted;
@property(readonly, nonatomic, getter=isPrioritizable) _Bool prioritizable;
@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;
@property(readonly, nonatomic, getter=isInstalling) _Bool installing;
@property(readonly, nonatomic, getter=isCancelable) _Bool cancelable;
@property(readonly, nonatomic, getter=isFailed) _Bool failed;
@property(readonly, nonatomic, getter=isPausable) _Bool pausable;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic, getter=isWaiting) _Bool waiting;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, copy, nonatomic) NSString *applicationDisplayName;
@property(readonly, copy, nonatomic) NSString *applicationBundleID;
- (_Bool)cancel;
- (_Bool)resume;
- (_Bool)pause;
- (_Bool)prioritize;

@optional
@property(readonly, nonatomic) Class iconClass;
@end

