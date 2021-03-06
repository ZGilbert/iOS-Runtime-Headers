/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIView;

@interface CrossFadeView : UIView {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _endFrame;
    UIView *_endView;
    BOOL _scaleSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _startFrame;
    UIView *_startView;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } endFrame;
@property(readonly) UIView * endView;
@property BOOL scaleSize;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } startFrame;
@property(readonly) UIView * startView;

- (void).cxx_destruct;
- (void)animateToEndStateWithDuration:(double)arg1 completion:(id)arg2;
- (void)animateToStartStateWithDuration:(double)arg1 completion:(id)arg2;
- (id)description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endFrame;
- (id)endView;
- (void)haltAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithStartView:(id)arg1 endView:(id)arg2 startFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 endFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (BOOL)scaleSize;
- (void)setEndView:(id)arg1;
- (void)setScaleSize:(BOOL)arg1;
- (void)setStartView:(id)arg1;
- (void)setToEndState;
- (void)setToStartState;
- (void)springAnimateToEndStateWithTimingFunction:(int)arg1;
- (void)springAnimateToEndStateWithTimingFunction:(int)arg1 completion:(id)arg2;
- (void)springAnimateToStartStateWithTimingFunction:(int)arg1;
- (void)springAnimateToStartStateWithTimingFunction:(int)arg1 completion:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })startFrame;
- (id)startView;

@end
