//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSValue, SKUIProfileImagePicker, UIImage;

@protocol SKUIProfileImagePickerDelegate <NSObject>
- (void)profileImagePicker:(SKUIProfileImagePicker *)arg1 didPickProfileImage:(UIImage *)arg2 withCropRect:(NSValue *)arg3;
- (void)profileImagePickerDidCancel:(SKUIProfileImagePicker *)arg1;
@end

