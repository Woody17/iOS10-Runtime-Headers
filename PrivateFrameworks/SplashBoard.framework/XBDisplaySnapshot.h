/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBDisplaySnapshot : NSObject {
    FBSDisplay * _display;
    UIImage * _image;
    struct CGImage { } * _imageRef;
    NSOrderedSet * _layers;
    bool  _opaque;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _snapshotSize;
    struct __IOSurface { } * _surfaceRef;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) struct __IOSurface { }*IOSurface;
@property (nonatomic, readonly, retain) UIImage *UIImage;
@property (getter=isDataLoaded, nonatomic, readonly) bool dataLoaded;
@property (nonatomic, readonly, retain) FBSDisplay *display;
@property (nonatomic, readonly, copy) NSOrderedSet *layers;
@property (getter=isOpaque, nonatomic) bool opaque;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x1; double x2; } snapshotSize;

- (struct CGImage { }*)CGImage;
- (struct __IOSurface { }*)IOSurface;
- (id)UIImage;
- (double)_scale;
- (struct CGSize { double x1; double x2; })_scaledSnapshotSize;
- (void)_synchronizedCaptureWithCompletion:(id /* block */)arg1;
- (bool)capture;
- (void)dealloc;
- (id)display;
- (id)initWithDisplay:(id)arg1 layer:(id)arg2;
- (id)initWithDisplay:(id)arg1 layers:(id)arg2;
- (bool)isDataLoaded;
- (bool)isOpaque;
- (id)layers;
- (double)scale;
- (void)setOpaque:(bool)arg1;
- (void)setScale:(double)arg1;
- (void)setSnapshotSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })snapshotSize;

@end
