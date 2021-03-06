//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>
#import <TSReading/TSKAnnotation-Protocol.h>

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor, TSKCommand;
@protocol TSKModel;

@protocol TSDAnnotationHosting <NSObject, TSKAnnotation>
@property(nonatomic) id <TSKModel> model;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
- (void)commitText:(NSString *)arg1;
- (_Bool)isEqual:(id)arg1;

@optional
@property(copy, nonatomic) TSDCommentStorage *storage;
@property(readonly, nonatomic) NSString *changeTrackingString;
- (TSKCommand *)commandForDeletingComment;
@end

