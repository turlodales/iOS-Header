//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUAssetPickerAsyncCellConfigurator : NSObject
{
}

+ (void)configureCountForCell:(id)arg1 asyncRequestID:(id)arg2 assetCollection:(id)arg3 fetchOptions:(id)arg4 countManager:(id)arg5;
+ (void)configureImageForCell:(id)arg1 asyncRequestID:(id)arg2 asset:(id)arg3 imageManager:(id)arg4;
+ (void)cancelImageRequestForCell:(id)arg1 imageManager:(id)arg2;
- (id)init;

@end

