//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXInfoUpdater;

@protocol PXInfoUpdaterObserver <NSObject>
- (void)infoUpdaterDidUpdate:(PXInfoUpdater *)arg1;

@optional
- (_Bool)infoUpdaterShouldUpdate:(PXInfoUpdater *)arg1;
@end

