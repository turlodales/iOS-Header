//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PUAssetsDataSource;
@protocol PUAssetsDataSourceManagerDelegate;

@interface PUAssetsDataSourceManager : NSObject
{
    PUAssetsDataSource *_assetsDataSource;
    id <PUAssetsDataSourceManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PUAssetsDataSourceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PUAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;

@end

