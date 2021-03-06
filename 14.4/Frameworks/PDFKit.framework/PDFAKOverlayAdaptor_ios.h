//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PDFKit/PDFAKOverlayAdaptor.h>

@class PDFAKOverlayAdaptorPrivate_ios;

__attribute__((visibility("hidden")))
@interface PDFAKOverlayAdaptor_ios : PDFAKOverlayAdaptor
{
    PDFAKOverlayAdaptorPrivate_ios *_privateIOS;
}

- (void).cxx_destruct;
- (void)_adjustScrollViewWithAnimationProperties:(CDStruct_c23cc2dc)arg1 delta:(double)arg2;
- (void)adjustScrollViewForKeyboardNotification:(id)arg1;
- (unsigned long long)pageIndexForAnnotation:(id)arg1;
- (void)annotationDidEndEditing:(id)arg1;
- (void)annotationWillBeginEditing:(id)arg1;
- (id)_scrollViewRecognizersForPageAtIndex:(unsigned long long)arg1;
- (void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(_Bool)arg3;
- (void)removeDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2;
- (void)addDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2;
- (void)_teardownGestureRecognizersForPageAtIndex:(unsigned long long)arg1;
- (void)_setupGestureRecognizersForPageAtIndex:(unsigned long long)arg1;
- (void)_teardownGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;
- (void)_setupGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;
- (void)updatePDFScrollViewMinimumNumberOfTouches;
- (unsigned long long)_scrollViewMinimumNumberOfTouches;
- (void)_uninstallOverlayAtIndex:(unsigned long long)arg1;
- (void)_installOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)_resetAnimationProperties;
- (id)initWithPDFView:(id)arg1;

@end

