//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFAnnotation, PDFAnnotationChangePrivate;

__attribute__((visibility("hidden")))
@interface PDFAnnotationChange : NSObject
{
    PDFAnnotationChangePrivate *_private;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) unsigned long long changeTimestamp;
@property(readonly, retain, nonatomic) PDFAnnotation *annotation;
@property(readonly, nonatomic) int changeType;
- (id)initWithReorderedAndChangedAnnotation:(id)arg1;
- (id)initWithReorderedAnnotation:(id)arg1;
- (id)initWithRemovedAnnotation:(id)arg1;
- (id)initWithChangedAnnotation:(id)arg1;
- (id)initWithAddedAnnotation:(id)arg1;

@end

