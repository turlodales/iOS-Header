//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PXRunNode-Protocol.h>

@class NSString, NSURL;

@protocol PUImageInfoNode <PXRunNode>
@property(readonly, nonatomic) long long imageExifOrientation;
@property(readonly, nonatomic) _Bool useEmbeddedPreview;
@property(readonly, nonatomic) NSString *imageDataUTI;
@property(readonly, nonatomic) NSURL *imageDataURL;
@end

