//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSTables/NSObject-Protocol.h>

@class NSDate, NSString, TSKAnnotationAuthor;

@protocol TSKAnnotation <NSObject>
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
@property(readonly, nonatomic) int annotationType;
@property(readonly, nonatomic) NSString *annotationUUID;
- (_Bool)isFloatingComment;
- (_Bool)isInDocument;
@end

