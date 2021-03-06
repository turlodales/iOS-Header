//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol VUIMediaLibraryApplicationControllerDelegate;

@interface VUIMediaLibraryApplicationController : NSObject
{
    id <VUIMediaLibraryApplicationControllerDelegate> _delegate;
}

+ (id)defaultController;
- (void).cxx_destruct;
@property(retain, nonatomic) id <VUIMediaLibraryApplicationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeRentalMediaItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (unsigned long long)assetTypeForRentalMediaItem:(id)arg1;
- (void)overrideCellularPlaybackQuality:(unsigned long long)arg1 forMediaItem:(id)arg2;
- (void)clearCellularPlaybackQualityOverrides;
- (_Bool)shouldWarnAboutPlaybackQualityForRentalMediaItem:(id)arg1;
- (_Bool)isCellularDataForPlaybackEnabled;
- (id)settingsURL;

@end

